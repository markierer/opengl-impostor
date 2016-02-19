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
* SendSocket.h
* This file contains soecket send and receive functions.
*/

#include <WINSOCK.H>
#include <assert.h>

//startup:
class Comms
{
protected:
	#define BUFSIZE 4096
	char buffer[BUFSIZE];
	unsigned nextFreeByte;
public:
	Comms() 
	{ 
		nextFreeByte = 0; 
	}

	inline Comms& operator<<(DWORD dw)
	{
		if (nextFreeByte+sizeof(DWORD) >= BUFSIZE)
			Flush();
		*((DWORD *)&(buffer[nextFreeByte])) = dw;
		nextFreeByte+=sizeof(DWORD);
		return *this;
	}

	inline Comms& operator<<(void * d)
	{
		DWORD dw = *(DWORD *)d;
		if (nextFreeByte+sizeof(DWORD) >= BUFSIZE)
			Flush();
		*((DWORD *)&(buffer[nextFreeByte])) = dw;
		nextFreeByte+=sizeof(DWORD);
		return *this;
	}

	/*inline Comms& operator<(double dw)
	{
		if (nextFreeByte+sizeof(double) >= BUFSIZE)
			Flush();
		*((double *)&(buffer[nextFreeByte])) = dw;
		nextFreeByte+=sizeof(double);
		return *this;
	}*/

	inline void SB(void * stuff, unsigned size) //"send buffered" -- assumes/precondition: size < BUFSIZE!!!
	{
		if (nextFreeByte+size >= BUFSIZE)
			Flush();
		memcpy(&(buffer[nextFreeByte]),stuff,size);
		nextFreeByte+=size;
	}

	inline void SB(const void * stuff, unsigned size) //"send buffered" -- assumes/precondition: size < BUFSIZE!!!
	{
		if (nextFreeByte+size >= BUFSIZE)
			Flush();
		memcpy(&(buffer[nextFreeByte]),stuff,size);
		nextFreeByte+=size;
	}

	inline Comms& operator<<(const char * str)
	{ 
		unsigned len = strlen(str) + 1;

		if (nextFreeByte >= BUFSIZE)
			Flush();
		strcpy(&(buffer[nextFreeByte]),str);
		nextFreeByte+=len;
		return *this;
	}

	virtual void Flush() = 0;		//send accumulated buffered stuff
};

class SendSocket : public Comms
{
	SOCKET m_hSocket;

	inline void Socket(int nSocketType = SOCK_STREAM,int nProtocolType = 0, int nAddressFormat = PF_INET)
	{
		assert(m_hSocket == INVALID_SOCKET);
		m_hSocket = socket(nAddressFormat,nSocketType,nProtocolType);
	}

	inline BOOL Bind(const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{
		return (SOCKET_ERROR != bind(m_hSocket,lpSockAddr,nSockAddrLen));	
 	}

	BOOL Bind(UINT nSocketPort, LPCSTR lpszSocketAddress)
	{
		SOCKADDR_IN sockAddr;
		memset(&sockAddr,0,sizeof(sockAddr));
		
		LPCSTR lpszAscii = lpszSocketAddress; //T2A((LPTSTR)lpszSocketAddress);
		sockAddr.sin_family = AF_INET;
		
		if (lpszAscii == NULL)
			sockAddr.sin_addr.s_addr = htonl(INADDR_ANY);
		else
		{
			DWORD lResult = inet_addr(lpszAscii);
			if (lResult == INADDR_NONE)
			{
				WSASetLastError(WSAEINVAL);
				return FALSE;
			}
			sockAddr.sin_addr.s_addr = lResult;
		}
		
		sockAddr.sin_port = htons((u_short)nSocketPort);
		
		return Bind((SOCKADDR*)&sockAddr, sizeof(sockAddr));
	}
	
	inline BOOL ConnectHelper(const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{
		return connect(m_hSocket, lpSockAddr, nSockAddrLen) != SOCKET_ERROR;
	}
	
	inline BOOL Connect(const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{ 
		return ConnectHelper(lpSockAddr, nSockAddrLen); 
	}
public:
	static BOOL initSockets()
	{
		WSADATA wsaData;

		WORD wVersionRequested = MAKEWORD(1, 1);
		int nResult = WSAStartup(wVersionRequested, &wsaData);
		if (nResult != 0)
			return FALSE;

		if (LOBYTE(wsaData.wVersion) != 1 || HIBYTE(wsaData.wVersion) != 1)
		{
			WSACleanup();
			return FALSE;
		}
		return TRUE;
	}

	static void closeSockets()
	{
		WSACleanup();
	}

	SendSocket() 
	{
		m_hSocket = INVALID_SOCKET;
	}
	
	~SendSocket()
	{
		Close();
	}

	BOOL Create(UINT nSocketPort = 0, int nSocketType = SOCK_STREAM, LPCTSTR lpszSocketAddress = NULL)
	{
		Socket(nSocketType);
		if (m_hSocket!= INVALID_SOCKET)
			if (Bind(nSocketPort,lpszSocketAddress))
				return TRUE;
		int nResult = GetLastError();
		Close();
		WSASetLastError(nResult);
		return FALSE;
	}

	void Close()
	{
		if (m_hSocket != INVALID_SOCKET)
		{
			closesocket(m_hSocket);
			//KillSocket(m_hSocket, this);
			m_hSocket = INVALID_SOCKET;
		}
	}

	BOOL Connect(LPSTR lpszAscii, UINT nHostPort)
	{
		assert(lpszAscii != NULL);
		
		SOCKADDR_IN sockAddr;
		memset(&sockAddr,0,sizeof(sockAddr));
		
		sockAddr.sin_family = AF_INET;
		sockAddr.sin_addr.s_addr = inet_addr(lpszAscii);
		
		if (sockAddr.sin_addr.s_addr == INADDR_NONE)
		{
			LPHOSTENT lphost;
			lphost = gethostbyname(lpszAscii);
			if (lphost != NULL)
				sockAddr.sin_addr.s_addr = ((LPIN_ADDR)lphost->h_addr)->s_addr;
			else
			{
				WSASetLastError(WSAEINVAL);
				return FALSE;
			}
		}
		
		sockAddr.sin_port = htons((u_short)nHostPort);
		
		return Connect((SOCKADDR*)&sockAddr, sizeof(sockAddr));
	}

	inline bool MakeAsync() //returns true on failure.
	{
        u_long nNoBlock = 1;
        return ( 0 != ioctlsocket(m_hSocket, FIONBIO, &nNoBlock));
	}
	
	inline int Send(const void* lpBuf, int nBufLen)
	{
		return send(m_hSocket, (LPSTR)lpBuf, nBufLen, 0);
	}

	inline int Receive(void* lpBuf, int nBufLen, int nFlags)
	{
		return recv(m_hSocket, (LPSTR)lpBuf, nBufLen, nFlags);
	}

	inline void FlushInsecure()		//drops packet if cannot send.
	{
		//flushes stuff accumulated by << operator
		if (nextFreeByte != 0)
		{
			numPackets ++;
			if (SOCKET_ERROR == Send(buffer,nextFreeByte))
				numDroppedPackets ++;
			nextFreeByte = 0;
		}
	}

	void Flush()
	{
		//flushes stuff accumulated by << operator
		if (nextFreeByte != 0)
		{
			numPackets ++;
			while (SOCKET_ERROR == Send(buffer,nextFreeByte))
			{
				if (WSAEWOULDBLOCK == GetLastError())
					Sleep(0);
				else
					return;				//some serious error
			}
			nextFreeByte = 0;
		}
	}
};

class SendSocket3dClients : public Comms
{
	SOCKET  * m_hSocket;
	unsigned numActiveSockets;

	inline void Socket(UINT numClient, int nSocketType = SOCK_STREAM,int nProtocolType = 0, int nAddressFormat = PF_INET)
	{
		assert(m_hSocket[numClient] == INVALID_SOCKET);
		m_hSocket[numClient] = socket(nAddressFormat,nSocketType,nProtocolType);
		numActiveSockets++;
	}

	inline BOOL Bind(UINT numClient, const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{
		return (SOCKET_ERROR != bind(m_hSocket[numClient],lpSockAddr,nSockAddrLen));	
 	}

	BOOL Bind(UINT numClient, UINT nSocketPort, LPCSTR lpszSocketAddress)
	{
		SOCKADDR_IN sockAddr;
		memset(&sockAddr,0,sizeof(sockAddr));
		
		LPCSTR lpszAscii = lpszSocketAddress; //T2A((LPTSTR)lpszSocketAddress);
		sockAddr.sin_family = AF_INET;
		
		if (lpszAscii == NULL)
			sockAddr.sin_addr.s_addr = htonl(INADDR_ANY);
		else
		{
			DWORD lResult = inet_addr(lpszAscii);
			if (lResult == INADDR_NONE)
			{
				WSASetLastError(WSAEINVAL);
				return FALSE;
			}
			sockAddr.sin_addr.s_addr = lResult;
		}
		
		sockAddr.sin_port = htons((u_short)nSocketPort);
		
		return Bind(numClient, (SOCKADDR*)&sockAddr, sizeof(sockAddr));
	}
	
	inline BOOL ConnectHelper(UINT numClient, const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{
		return connect(m_hSocket[numClient], lpSockAddr, nSockAddrLen) != SOCKET_ERROR;
	}
	
	inline BOOL Connect(UINT numClient, const SOCKADDR* lpSockAddr, int nSockAddrLen)
	{ 
		return ConnectHelper(numClient, lpSockAddr, nSockAddrLen); 
	}
public:
	static BOOL initSockets()
	{
		WSADATA wsaData;

		WORD wVersionRequested = MAKEWORD(1, 1);
		int nResult = WSAStartup(wVersionRequested, &wsaData);
		if (nResult != 0)
			return FALSE;

		if (LOBYTE(wsaData.wVersion) != 1 || HIBYTE(wsaData.wVersion) != 1)
		{
			WSACleanup();
			return FALSE;
		}
		return TRUE;
	}

	static void closeSockets()
	{
		WSACleanup();
	}

	SendSocket3dClients() 
	{
		m_hSocket = new SOCKET [6];
		for (int i = 0; i < MAX_3DCLIENTS; i++)
			m_hSocket[i] = INVALID_SOCKET;
		numActiveSockets = 0;
	}
	
	~SendSocket3dClients()
	{
		for (int i = 0; i < MAX_3DCLIENTS; i++)
			Close(i);
	}

	BOOL Create(UINT numClient, UINT nSocketPort = 0, int nSocketType = SOCK_STREAM, LPCTSTR lpszSocketAddress = NULL)
	{
		if (numActiveSockets > MAX_3DCLIENTS)
			return FALSE;
		Socket(numClient, nSocketType);
		if (m_hSocket[numClient]!= INVALID_SOCKET)
			if (Bind(numClient, nSocketPort, lpszSocketAddress))
				return TRUE;
		int nResult = GetLastError();
		Close(numClient);
		WSASetLastError(nResult);
		return FALSE;
	}

	void Close(UINT numClient)
	{
		if (m_hSocket[numClient] != INVALID_SOCKET)
		{
			closesocket(m_hSocket[numClient]);
			//KillSocket(m_hSocket, this);
			m_hSocket[numClient] = INVALID_SOCKET;
			numActiveSockets--;
			if (numActiveSockets < 0)
				numActiveSockets = 0;
		}
	}

	BOOL Connect(UINT numClient, LPSTR lpszAscii, UINT nHostPort)
	{
		assert(lpszAscii != NULL);
		
		SOCKADDR_IN sockAddr;
		memset(&sockAddr,0,sizeof(sockAddr));
		
		sockAddr.sin_family = AF_INET;
		sockAddr.sin_addr.s_addr = inet_addr(lpszAscii);
		
		if (sockAddr.sin_addr.s_addr == INADDR_NONE)
		{
			LPHOSTENT lphost;
			lphost = gethostbyname(lpszAscii);
			if (lphost != NULL)
				sockAddr.sin_addr.s_addr = ((LPIN_ADDR)lphost->h_addr)->s_addr;
			else
			{
				WSASetLastError(WSAEINVAL);
				return FALSE;
			}
		}
		
		sockAddr.sin_port = htons((u_short)nHostPort);
		
		return Connect(numClient, (SOCKADDR*)&sockAddr, sizeof(sockAddr));
	}

	inline bool MakeAsync(UINT numClient) //returns true on failure.
	{
        u_long nNoBlock = 1;
        return ( 0 != ioctlsocket(m_hSocket[numClient], FIONBIO, &nNoBlock));
	}
	
	inline int Send(UINT numClient, const void* lpBuf, int nBufLen)
	{
		return send(m_hSocket[numClient], (LPSTR)lpBuf, nBufLen, 0);
	}

	inline int Receive(UINT numClient, void* lpBuf, int nBufLen, int nFlags)
	{
		return recv(m_hSocket[numClient], (LPSTR)lpBuf, nBufLen, nFlags);
	}

	inline void FlushInsecure()		//drops packet if cannot send.
	{
		//flushes stuff accumulated by << operator
		if (nextFreeByte != 0)
		{
			for (int i = 0; i < MAX_3DCLIENTS; i++)
			{
				numPackets ++;
				if (m_hSocket[i] != INVALID_SOCKET)
				{
					if (SOCKET_ERROR == Send(i,buffer,nextFreeByte))
						numDroppedPackets ++;
				}
			}
			nextFreeByte = 0;
		}
	}

	void Flush()
	{
		//flushes stuff accumulated by << operator
		if (nextFreeByte != 0)
		{
			for (int i = 0; i < MAX_3DCLIENTS; i++)
			{
				numPackets ++;
				if (m_hSocket[i] != INVALID_SOCKET)
				{
					while (SOCKET_ERROR == Send(i,buffer,nextFreeByte))
					{
						if (WSAEWOULDBLOCK == GetLastError())
							Sleep(0);
						else
							break; // some serious error
					}
				}
			}
			nextFreeByte = 0;
		}
	}
};
