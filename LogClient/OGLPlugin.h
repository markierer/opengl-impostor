//---------------------------------------------------------------------------

#ifndef OGLPluginH
#define OGLPluginH
//---------------------------------------------------------------------------
#include <IniFiles.hpp>

#include "CONSTANTS.h"
#include "TYPES.h"
#include "../OGL/Protocol.h"
#include "../OGL/DataPointers.h"
//---------------------------------------------------------------------------
/**
 *  The OpenGL plugin class. The class OGLPlugin decodes the incomming
 *  datastream with decode functions and finally calls the real OpenGL function.
 */
class OGLPlugin
{
private:
  /**
  * A function typedef.
  * This function typedef defines the decode function.
  */
	typedef void (*TdecodeFunc)(void * x, unsigned y);

  /**
  * A TdecodeFunc array.
  * This TdecodeFunc array holds the function pointers
  * of the decode functions.
  */
	TdecodeFunc logDecode[NUMFUNCS];

  /**
  * A handle to a device context.
  * The HDC points to the TForm.
  * @see file Main.h 
  */
  HDC hdc;

public:
  /**
  * A constructor.
  * The constructor of the class OGLPlugin.
  */
	OGLPlugin();

  /**
  * A destructor.
  * The destructor of the class OGLPlugin.
  */
	~OGLPlugin();

  /**
  * A normal member taking two arguments and returning an bool value.
  * This function decodes the incomming datastream with decode functions
  * and finally calls the real OpenGL function.
  * @param data the datastream.
  * @param numBytes length of datastream as unsigned integer.
  * @return The function state
  */
	bool __fastcall processInput(void * data, unsigned numBytes);

  /**
  * A normal member taking one argument.
  * This function links the hdc of the drawing window to the local pointer.
  * @param hdc the handle to a render window.
  */
	void __fastcall LinkRenderWindow(HDC hdc);
};
//---------------------------------------------------------------------------
#endif
