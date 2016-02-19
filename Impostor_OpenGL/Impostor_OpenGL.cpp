/**
* This application contains source code from DLL Detective
* Copyright (C) 2001,2002 Adam Moravanszky and distributed with the
* SDK from ATI.
*
* DLL Detective is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*/

/**
* Impostor_OpenGL.cpp : Defines the entry point for the DLL application.
*/ 

#include "stdafx.h"
#include <winbase.h>
#include <stdio.h>
#include <stdlib.h>

const unsigned MAX_3DCLIENTS = 6;				/**< A constant unsigned integer. The max. number of LogClients. */
unsigned numPackets = 0, numDroppedPackets = 0; /**< statistic variables for the SendSocket. */

#include "SendSocket.h"
#include "Protocol.h"
#include "DataPointers.h"

#include "CONSTANTS.h"

#undef ERROR
/**
* A macro.
* This macro shows a message box and exit the application if an error
* occurs.
*/
#define ERROR(str)\
	{\
		MessageBox (NULL, str, DLLFNAME, MB_OK | MB_ICONERROR);\
		ExitProcess (0);\
	}

/**
* A macro.
* This macro copies the real and fake function pointers
* as well as the function names to arrays.
*/
#define FNAME_FUNC(number, name)\
	if (!realFunctPtr[number] && number < NUMFUNCS)\
	{\
		realFunctPtr[number] = GetProcAddress(realDLL,#name);\
		fakeFunctPtr[number] = name;\
		functNames[number]   = #name;\
	}\
	else ERROR(dupe)

/**
* A macro.
* This macro defines a function pointer (Look in the MSDN for GetProcAddress).
*/
#define DEFINE_FUNC(funcNum, funcName, protocol, retType, argBlock)\
	typedef retType  (protocol *funcName##Ptr)argBlock;\
	__declspec(dllexport) retType protocol funcName argBlock\
		{

/**
* A macro.
* This macro tests whether the logging for a function is enabled or disabled.
*/
#define IF_LOGGING(funcNum)\
	if (logging && loggingFunc[funcNum])\
	{						

/**
* A macro.
* This macro defines the end of a encoding function.
*/
#define ENDLOG\
	logStream->Flush();\
	if (pause) waitf();\
	}		


#define LS			*logStream					/**< A macro. Pointer to logStream. */
#define LSSB(a,b)	logStream->SB(a,sizeof(b))	/**< A macro. Send logStream buffered. */
#define MAGIC		0xFEDCBA98					/**< A macro. The magic number. */	
#define HEADERSIZE	2*sizeof(DWORD)				/**< A macro. Sizeof log tag and function id DWORDS. */
#define FRONTEND_PORT 10000						/**< A macro. The port for the log data. */
#define ID_LOG 101								/**< A macro. The ID DWORD for the log data. */


/**
* Config data.
* @todo The following variables are used to control the dll with a control application (control server).
* This are original variables from DLL Detective and are not used yet. They have to be implemented
* in the control application.
* @see The DDFrontend application, you find it in the source from DLL Detective.
*/

bool suppressGlPolygonMode = false;				/**< A boolean. This boolean suppress the polygon mode and set the wireframe mode. @see DEFINES.h */
unsigned desiredClientThreadState = 0;			/**< A unsigned integer. This variable is set by the control thread, telling the client thread to execute some sort if code. */ 
unsigned actualClientThreadState = 0;			/**< A unsigned integer. This variable is set by the control thread, telling the client thread to execute some sort if code. */

#define CLIENTCODE_WIREFRAME_ON  1				/**< A macro. Used to set and unset the wireframe mode. */

/**
* A function.
* This function controls the polygon mode and set the wireframe mode.
*/
void execClientCode();

bool forceSingleBuffer = false;						/**< A boolean. This boolean used to force the singlebuffer mode. @see DEFINES.h . */
bool saveNew2DTextures = false;						/**< A boolean. This boolean used to save textures. @see DEFINES.h . */
bool save2DTextureChanges = false;					/**< A boolean. This boolean used to save textures. @see DEFINES.h . */
bool saveTexMips = false;							/**< A boolean. This boolean used to save textures. @see DEFINES.h . */

bool commWasPaused = false;							/**< A boolean. This boolean used to set pause mode. */
bool pause = false;									/**< A boolean. This boolean used to set pause mode. */
bool logging = false;								/**< A boolean. This boolean enables logging. */

bool wait = true;									/**< A boolean. This boolean is set at first call after pause is set and is cleared when press step or run. */
bool loggingFunc[NUMFUNCS];							/**< An array of booleans. This booleans are used to enable or disable the logging of an OpenGL function. */
char dupe[] = "Duplicate Func Number or overflow!"; /**< An array of chars. This is an error message. */
void * realFunctPtr[NUMFUNCS];						/**< An array of void pointers. This array contains the function pointers of the real OpenGL functions. */
void * fakeFunctPtr[NUMFUNCS];						/**< An array of void pointers. This array contains the faked OpenGL function pointers. */
char * functNames[NUMFUNCS];						/**< An array of char pointers. This array contains the OpenGL function names. */

SendSocket sockComm;								/**< A SendSocket. The object sockComm is used for the config data. @see SendSocket.h . */
SendSocket3dClients sockLog;						/**< A SendSocket. The object sockLog is used for sending the log data. @see SendSocket.h . */
Comms * logStream = &sockLog;						/**< A Comms object. @see SendSocket.h . */
HINSTANCE hInstance;								/**< A HINSTANCE. Handle to an instance. */

char * clientIP[MAX_3DCLIENTS];						/**< An array of char pointers. This array contains the IP addresses of the LogClients. */

/**
* A function.
* This function reads the INI file contains 
* the IP addresses of the LogClients.
*/
void readIniFile();

/**
* A function.
* This function starts up the socket connections.
* @return The state of the function.
*/
BOOL startComms();

/**
* A function.
* This function loads the real OpenGL32 DLL.
* @return The HINSTANCE of the real dll.
*/
HINSTANCE loadRealDLL();

/**
* A function.
* This function includes the file FNAMES.h .
* @param HINSTANCE
* @return The state of the function.
*/
BOOL linkRealDLL(HINSTANCE);

HINSTANCE realDLL = 0;	/**< A HINSTANCE. Handle to the instance of the real OpenGL32 dll. */

/**
* A function.
* This function loads and links the real OpenGL32 dll.
* @see loadRealDLL()
* @see linkRealDLL()
*/
void lockNload()
{
	realDLL = loadRealDLL();
	
	if(realDLL == NULL)
	{
		ERROR("DLL Detective: Couldn't find the real DLL.")
	}	
	if (!linkRealDLL(realDLL))
		ERROR("DLL Detective: Real DLL did not link right.")
}

/**
* A function.
* This function is called after pause bit detected.
* @see macro ENDLOG
*/
void waitf()
{
	if (desiredClientThreadState != actualClientThreadState)
		execClientCode();
	else
	{
		//tell frontend that we paused
		//*logStream << MAGIC << sizeof(DWORD)*3 << PR_PAUSEOK << numPackets << numDroppedPackets ;
		//logStream->Flush();
		numPackets = 0;
		numDroppedPackets = 0;

		while (wait) //wait until we are free to go.
		{
			Sleep(0);
			if (desiredClientThreadState != actualClientThreadState)
				execClientCode();
		}
		wait = true;

		//*logStream << MAGIC << sizeof(DWORD) << PR_RUNOK;
		//logStream->Flush();
	}
}

/**
* Include the file TYPES.h 
* NOT USED ANYMORE! Because all the types are converted to standard datatypes (no pointers).
*/
#include "TYPES.h"

#pragma warning (disable:4273)

/**
* Include the file DEFINES.h 
* This file is used to build all the faked OpenGL functions (encoding functions).
*/
extern "C"
{
	#include "DEFINES.h"
};

BOOL linkRealDLL(HINSTANCE	realDLL)
{
	#include "FNAMES.h"
	return TRUE;
}

/**
* A function. 
* This function is used to decode the datastream from the control application (control server).
* @see receiveBytes()
*/
void onHear(char * data, unsigned numBytes)
{
	// buffer doesn't include packet header.
	unsigned * dataDW = (unsigned *)data;

	switch (dataDW[0])
	{
		case PR_PAUSE:
			pause = true;
			wait = true;
			break;
		case PR_RUN:
			wait = false;
			pause = false;
			break;
		case PR_STEP:
			wait = false;
			pause = true;
			break;
		case PR_FLOG:
			if (numBytes >= 3*4 && dataDW[2] < NUMFUNCS)
			{
				loggingFunc[dataDW[2]] = dataDW[1] ? true : false;
			}
			break;
		case PR_XLOG:
			if (numBytes >= 2*4)
				logging = dataDW[1] ? true : false;
			break;
		case PR_TERMIN:
			ExitProcess (0);
			break;
		// ogl plugin specific:
		case PR_GX_WIRE:
			if (numBytes >= 2*4)
			{
				if (dataDW[1])
					desiredClientThreadState = desiredClientThreadState | CLIENTCODE_WIREFRAME_ON;
				else
					desiredClientThreadState = desiredClientThreadState & (~CLIENTCODE_WIREFRAME_ON);
			}
			commWasPaused = pause;
			pause = true;
			break;
		case PR_GX_SINGLE:
			if (numBytes >= 2*4)
				forceSingleBuffer = dataDW[1] ? true : false;
			break;
		case PR_GX_SAVETEX2D:
			if (numBytes >= 4*4)
			{
				saveNew2DTextures    = dataDW[1] ? true : false;
				save2DTextureChanges = dataDW[2] ? true : false;
				saveTexMips			 = dataDW[3] ? true : false;
			}
			break;
	}
}

void execClientCode()
{
	bool mess;
	if ((desiredClientThreadState&CLIENTCODE_WIREFRAME_ON) != (actualClientThreadState&CLIENTCODE_WIREFRAME_ON))
	{
		suppressGlPolygonMode = false; //so that the following poly mode call will have effect
		mess = logging; //remember logging state
		logging = false; //don't log this fake call
		if (desiredClientThreadState&CLIENTCODE_WIREFRAME_ON)
		{
			glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); //set wireframe mode
			suppressGlPolygonMode = true;
		}
		else
		{
			glPolygonMode(GL_FRONT_AND_BACK,GL_FILL); //assume that normal operation would have set to fill.
			suppressGlPolygonMode = false;
		}
		logging = mess; //restore old logging state.
	}
	actualClientThreadState = desiredClientThreadState;
	pause = commWasPaused;
}

/**
* A struct.
* This struct contains two DWORDS, which representing the variables
* of the header.
*/
struct Header
{
	DWORD key;			/**< the key of the header. */
	DWORD packLength;	/**< the length of the datastream. */
};

/**
* A union.
* This union contains representing the header of a datapackage.
*/
union
{
	Header strukt;				/**< the header values. */
	char bytes[sizeof(Header)];	/**< buffer for the header values. */
} header;						/**< A union variable. The header. */

/**
* A function.
* This function reads the datastream from the control application (control server).
* @see onHear()
*/
bool receiveBytes()			
{
	static char * buffer = 0; 
	static unsigned headerBytesReceived = 0;
	static unsigned dataBytesReceived = 0;
	static bool   finished = false;
	int nResult;

	if (finished) 
		finished = false;

	if (headerBytesReceived != sizeof(Header)) // else we already read the header, but still waiting for the rest.
	{
		if ((nResult = sockComm.Receive(&(header.bytes[headerBytesReceived]), sizeof(Header) - headerBytesReceived, 0)) == SOCKET_ERROR)
		{
			if (GetLastError() == WSAEWOULDBLOCK)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		headerBytesReceived += nResult;
	}

	if (headerBytesReceived == sizeof(Header))
	{
		if (!buffer) //we have header, but data not yet started.
		{		
			if (header.strukt.key != PR_MAGIC || header.strukt.packLength > 1024*1024*5 || header.strukt.packLength == 0)	//magic to make sure packet didn't slip, or packet too large.
			{
				return true;
			}
			buffer = new char [header.strukt.packLength];
			dataBytesReceived = 0;
		}
		
		if (buffer)		//we have started data
		{
			if ((nResult = sockComm.Receive(&(buffer[dataBytesReceived]), header.strukt.packLength-dataBytesReceived, 0)) == SOCKET_ERROR)
			{
				if (GetLastError() == WSAEWOULDBLOCK)
				{
					return false;
				}
				else
				{
					delete [] buffer;
					buffer = 0;
					dataBytesReceived = 0;
					return true;
				}
			}
			dataBytesReceived += nResult;
			if (dataBytesReceived == header.strukt.packLength)
			{
				//data received OK, wait for next header:
				onHear(buffer, dataBytesReceived);
				delete [] buffer;
				buffer = 0;
				dataBytesReceived = 0;
				headerBytesReceived = 0;
			}
		}
	}
	return true;
}

/**
* A thread function.
* This thread calls the receiveBytes() function.
* @see receiveBytes()
*/
unsigned long __stdcall commandThread(void * stuff)
{
	while(receiveBytes())
	{
		Sleep(0);
	}
	return 0;
}

BOOL startComms()
{
	static bool connected = false;
	if (connected)
		return true;
	connected = true;

	if (!SendSocket3dClients::initSockets())
		ERROR("DLL Detective: Winsock failed to start.");

	logStream = &sockLog;
	BOOL b1 = TRUE;
	for (int i = 0; i < MAX_3DCLIENTS; i++)
	{
		if (strcmp(clientIP[i],"none"))
			b1 = sockLog.Create(i);
	}	
	if (!b1)
		ERROR("DLL Detective: Can't create socket(s)");

	b1 = TRUE;
	for (int i = 0; i < MAX_3DCLIENTS; i++)
	{
		if (strcmp(clientIP[i],"none"))
			b1 = sockLog.Connect(i, clientIP[i], FRONTEND_PORT);
	}
	if (!b1)
		ERROR("DLL Detective: Can't connect to frontend(s) -- frontend(s) not running?");

	for (int i = 0; i < MAX_3DCLIENTS; i++)
		delete [] clientIP[i];

	DWORD mess;
	HANDLE thread = CreateThread(NULL, 0, commandThread, 0, 0, & mess);
	if (!thread) 
		ERROR("DLL Detective: Can't create new thread")

	logging = true;		
	pause = false;
	return TRUE;
}

HINSTANCE loadRealDLL()
{
	const int __MAX_PATH = 260;
	HINSTANCE d;
	TCHAR syspath[__MAX_PATH];
	
	// find real dll in application directory
	syspath[0] = '~';
	syspath[1] = 0;
	strcat(syspath,DLLFNAME);
	d = LoadLibrary(syspath);
	if (d)
		return d;
	// or find real dll in system directory
	GetSystemDirectory(syspath, __MAX_PATH);
	strcat(syspath, "\\");
	strcat(syspath,DLLFNAME);
	d = LoadLibrary(syspath);
	return d;
}

void readIniFile()
{
	const int __MAX_PATH = 260;
	CHAR clientStr[__MAX_PATH], clientTmpStr[__MAX_PATH], iniPath[__MAX_PATH];
	CHAR ch[2];
	CHAR buffer[16];

	// Find the INI File
	DWORD retVal = GetCurrentDirectory(__MAX_PATH, iniPath);
	if (retVal == 0)
		ERROR("DLL Detective: Can't find OpenGL.ini -- create the necessary INI file!");
	strcat(iniPath,"\\OpenGL32.ini");

	strcpy(clientStr,"Client");

	for (int i = 0; i < MAX_3DCLIENTS; i++)
	{
		strcpy(clientTmpStr,clientStr); // Copy "Client" to the buffer
		CHAR * hh = _itoa(i + 1,ch,10); // Convert int to char
		strcat(clientTmpStr,ch); // Merge the ClientX string
		retVal = GetPrivateProfileString("LogClients", 
										 clientTmpStr, 
										 "none", 
										 buffer, 
										 16,
										 iniPath);
		clientIP[i] = new CHAR[retVal + 1];
		strcpy(clientIP[i],buffer);
	}
}

/**
* A function.
* DllMain is a optional entry point into a dll.
*/ 
BOOL APIENTRY DllMain( HINSTANCE hinstDLL, DWORD  dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_DETACH)
	{
		SendSocket3dClients::closeSockets();
		return TRUE;
	}
	if (dwReason != DLL_PROCESS_ATTACH)
	{
		return TRUE;
	}
	hInstance = hinstDLL;
	// Init settings to defaults
	for (unsigned i = 0; i < NUMFUNCS; i++)
	{
		//suppressFunc[i] = false;
		loggingFunc[i] = true;
		realFunctPtr[i] = 0;
	}
	lockNload();
	readIniFile();
	if (!startComms())
		return FALSE;	
    return TRUE;
}