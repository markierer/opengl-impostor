//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
#ifdef _WIN32
#include <windows.h>
#endif

#include <Gl/gl.h>

#include <math>
#include <float>
#include <assert.h>
#include <vcl.h>
#pragma hdrstop

#include "OGLPlugin.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  /* http://bdn.borland.com/article/0,1410,10528,00.html */
  plugin = new OGLPlugin();
  _control87(MCW_EM, MCW_EM);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  int i = Application->MessageBox("Would You Like To Run In Fullscreen Mode?",
                                  "Start Fullscreen?", MB_YESNO);
  if (i == IDYES)
  {
    fullscreen = true;
    SetupFullscreen(true);
  }
  else
    fullscreen = false;
  hdc = GetDC(Handle);
  plugin->LinkRenderWindow(hdc); // Link handler to plugin
  SetPixelFormatDescriptor();
  hrc = wglCreateContext(hdc);
  wglMakeCurrent(hdc, hrc);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SetPixelFormatDescriptor()
{
  PIXELFORMATDESCRIPTOR pfd = {
    sizeof(PIXELFORMATDESCRIPTOR),
    1,
    PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
    PFD_TYPE_RGBA,
    24,
    0,0,0,0,0,0,
    0,0,
    0,0,0,0,0,
    32,
    0,
    0,
    PFD_MAIN_PLANE,
    0,
    0,0,0
  }; 
  int PixelFormat = ChoosePixelFormat(hdc, &pfd);
  SetPixelFormat(hdc, PixelFormat, &pfd);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  switch (Key)
  {
    case 27:  this->Close();  // Exit with ESC
              break;
    default:  break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  ReleaseDC(hdc, hrc);
  wglMakeCurrent(hdc, NULL);
  wglDeleteContext(hrc);
  delete plugin;
  if (fullscreen)
    SetupFullscreen(false);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SetupFullscreen(bool state)
{
  if (state) // Set to fullscreen
  {
    try
    {
      HTaskBar = FindWindow("Shell_TrayWnd", NULL); // Find handle of TASKBAR
      EnableWindow(HTaskBar, false);  // Disable the taskbar
      ShowWindow(HTaskBar, SW_HIDE);  // Hide the taskbar
    }
    __finally
    {
      this->BorderStyle = bsNone;
      this->FormStyle   = fsStayOnTop;
      this->Left        = 0;
      this->Top         = 0;
      this->Height      = Screen->Height;
      this->Width       = Screen->Width;
    }
  }
  else
  {
    try
    {
      HTaskBar = FindWindow("Shell_TrayWnd", NULL); // Find handle of TASKBAR
      EnableWindow(HTaskBar, true); // Enable the taskbar
      ShowWindow(HTaskBar, SW_SHOW);  // Show the taskbar
    }
    __finally
    {
      this->BorderStyle = bsSizeable;
      this->FormStyle   = fsNormal;
      this->Left        = 400;
      this->Top         = 300;
      this->Height      = 480;
      this->Width       = 640;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocketClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  // delete rendering context
  wglMakeCurrent(NULL, NULL);
  wglDeleteContext(hrc);
  // close the socket
  Socket->Close();
  ErrorCode = 0;
  // create rendering context
  hrc = wglCreateContext(hdc);
  wglMakeCurrent(hdc, hrc);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  int nResult;
	static char * buffer = 0; 
	static unsigned headerBytesReceived = 0;
	static unsigned dataBytesReceived = 0;

	if (headerBytesReceived != sizeof(Header))  // Else we already read the header, but still waiting for the rest.
  {
  	if ((nResult = Socket->ReceiveBuf(&(header.bytes[headerBytesReceived]), sizeof(Header) - headerBytesReceived)) == SOCKET_ERROR)
    {
			return; // Error
    }
		headerBytesReceived += nResult;
  }

	assert(headerBytesReceived <= sizeof(Header));  // Can't receive more than header size!

	if (headerBytesReceived == sizeof(Header))
  {
		if (!buffer)	// We have header, but data not yet started.
    {
			if (header.strukt.key != PR_MAGIC || header.strukt.packLength > 1024*1024*5 || header.strukt.packLength == 0)	// Magic to make sure packet didn't slip, or packet too large.
      {
				return; // Error
      }
  		buffer = new char [header.strukt.packLength];
			dataBytesReceived = 0;
    }

		if (buffer)		// We have started data
    {
			if ((nResult = Socket->ReceiveBuf(&(buffer[dataBytesReceived]), header.strukt.packLength-dataBytesReceived)) == SOCKET_ERROR)
      {
				if (GetLastError() == WSAEWOULDBLOCK)
        {
					return;
        }
				else
        {
					delete [] buffer;
					buffer = 0;
					dataBytesReceived = 0;
					return;
        }
      }
	  	dataBytesReceived+=nResult;
			if (dataBytesReceived == header.strukt.packLength)
      {
				// Data received OK, wait for next header:
				plugin->processInput(buffer, dataBytesReceived);
 				delete [] buffer;
 				buffer = 0;
 				dataBytesReceived = 0;
 				headerBytesReceived = 0;
 			}
 		}
 	}
}
//---------------------------------------------------------------------------


