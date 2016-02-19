//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ScktComp.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
  /**
  * A TServerSocket .
  * This TServerSocket receives the connection from the Wrapper DLL.
  */
  TServerSocket *ServerSocket;

  /**
  * A normal member taking one argument.
  * This function is am member function of TForm.
  * @param Sender a pointer to a TObject.
  */
  void __fastcall FormCreate(TObject *Sender);

  /**
  * A normal member taking one argument.
  * This function is am member function of TForm.
  * @param Sender a pointer to a TObject.
  */
  void __fastcall FormDestroy(TObject *Sender);

  /**
  * A normal member taking one argument.
  * This function is am member function of TForm.
  * @param Sender a pointer to a TObject.
  * @param Key a reference to a WORD.
  * @param Shift a TShiftState.
  */
  void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
    TShiftState Shift);

  /**
  * A normal member taking one argument.
  * This function reads the datastream from the wrapper dll.
  * @param Sender a pointer to a TObject.
  * @param Socket a pointer to a TCustomWinSocket.
  */
  void __fastcall ServerSocketClientRead(TObject *Sender,
          TCustomWinSocket *Socket);

  /**
  * A normal member taking one argument.
  * This function is am member function of TServerSocket.
  * @param Sender a pointer to a TObject.
  * @param Socket a pointer to a TCustomWinSocket.
  * @param ErrorEvent a TErrorEvent.
  * @param ErrorCode a reference to an integer.
  */
  void __fastcall ServerSocketClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);

private:	// Anwender-Deklarationen
  /**
  * A handle to a device context.
  * The HDC of the application.
  * @see FormCreate(); 
  */
  HDC hdc;

  /**
  * A handle to the OpenGL rendering context.
  * The HGLRC of the OpenGL application.
  * @see FormCreate();
  */
  HGLRC hrc;

  /**
  * A handle to a window.
  * The HWND to the taskbar.
  * @see SetupFullscreen();
  */
  HWND HTaskBar;

  /**
  * A boolean.
  * The boolean fullscreen contains the state of the window mode.
  * True means fullscreen is enabled, false means disabled.
  * @see SetupFullscreen();
  */
  bool fullscreen;

  /**
  * A OGLPlugin.
  * This object handles the decoding and calls the real OpenGL functions.
  */
  OGLPlugin *plugin;

  /**
  * A struct.
  * This struct contains two DWORDS, which representing the variables
  * of the header.
  */
  struct Header {
  	DWORD key;          /**< the key of the header. */
	  DWORD packLength;   /**< the length of the datastream. */
	};

  /**
  * A union.
  * This union contains representing the header of a datapackage.
  */
  union {
  	Header strukt;              /**< the header values. */
	  char bytes[sizeof(Header)]; /**< buffer for the header values. */
	} header;                     /**< A union variable. The header. */

public:		// Anwender-Deklarationen
  /**
  * A constructor.
  * The constructor of the class TForm1.
  * @param Owner a pointer to a TComponent.
  */
  __fastcall TForm1(TComponent* Owner);

  /**
  * A normal member.
  * This function is setting up the pixelformatdescriptor.
  */
  void __fastcall SetPixelFormatDescriptor();

  /**
  * A normal member taking one argument.
  * This function handles the fullscreen mode.
  * @param state enables or disables the fullscreen mode.  
  */
  void __fastcall SetupFullscreen(bool state);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
