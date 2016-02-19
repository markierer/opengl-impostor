//---------------------------------------------------------------------------
#ifdef _WIN32
#include <windows.h>
#endif

#include <Gl/glu.h>
#include <vcl.h>
#pragma hdrstop

#include "OGLPlugin.h"
#include "Main.h"
//---------------------------------------------------------------------------

extern HDC hdc;

/**
* Variables for gluLookAt.
* This nine variables are used for setting up the client perspective with
* the function gluLookAt. The function gluLookAt is a member of the OpenGL
* Utility Library.
*/
GLdouble  eyeX, eyeY, eyeZ;
GLdouble  centerX, centerY, centerZ;
GLdouble  upX, upY, upZ;

/**
* A static array of GLuints.
* This array contains the memory for 1024 textures.
* @see glGenTextures in file DECODE.h
*/
static GLuint	textureMem[1024];

/**
* A static GLenum.
* The GLenum matrixMode is used for changing the perspective.
* @see glLoadIdentity in file DECODE.h
*/
static GLenum matrixMode;
//---------------------------------------------------------------------------
/**
* Macros for decoding the received datastream.
*/

/**
* A macro.
* This macro defines a function used to decoding.
*/
#define DECODE_FUNC(num,name,size)\
  void logDec_##name(void * argData, unsigned argBytes) {
/**
* A macro.
* This macro decodes a byte (8 bits) from the datastream argData.
*/
#define LSSB8(mess,type) *mess = decode_##type(*(unsigned char *)argData); argData = ((unsigned char *)argData)+1;
/**
* A macro.
* This macro decodes a unsigned short (16 bits) from the datastream argData.
*/
#define LSSB16(mess,type) *mess = decode_##type(*(unsigned short *)argData); argData = ((unsigned short *)argData)+1;
/**
* A macro.
* This macro decodes a unsigned integer (32 bits) from the datastream argData.
*/
#define LSSB32(mess,type) *mess = decode_##type(*(unsigned *)argData); argData = ((unsigned *)argData)+1;
/**
* A macro.
* This macro decodes a double (64 bits) from the datastream argData.
*/
#define LSSB64(mess,type) *mess = decode_##type(*(unsigned *)argData); argData = ((unsigned *)argData)+2;
/**
* A macro.
* This macro defines the end of a decoding function.
*/
#define ENDDECODE }

/**
* Decode constants
*/
#define decode_CGLclampf(x) decode_GLfloat(x)
#define decode_CGLshort(x)  decode_GLshort(x)
#define decode_CGLushort(x) decode_GLushort(x)
#define decode_CGLdouble(x) decode_GLdouble(x)
#define decode_CGLint(x)	decode_GLint(x)
#define decode_CGLfloat(x)  decode_GLfloat(x)
#define decode_CGLbyte(x)	decode_GLbyte(x)
#define decode_CGLubyte(x)  decode_GLubyte(x)
#define decode_CGLuint(x)	decode_GLuint(x)
#define decode_CGLboolean(x)decode_GLboolean(x)

/**
* Decode aliases
*/
#define decode_GLclampf(x)	decode_GLfloat(x)
#define decode_GLclampd(x)	decode_GLdouble(x)
#define decode_GLsizei(x)	decode_GLint(x)
#define decode_GLbitfield(x)  decode_GLuint(x)
#define decode_DWORD(x)		decode_GLuint(x)
#define decode_HDC(x)   decode_GLuint(x)
#define decode_HGLRC(x)		decode_GLuint(x)
#define decode_UINT(x)		decode_GLuint(x)
#define decode_int(x)		decode_GLuint(x)
#define decode_GLenum(x)   decode_GLuint(x)
#define decode_BOOL(x)		decode_GLboolean(x)
#define decode_FLOAT(x)		decode_GLfloat(x)

/**
* Decode standard datatypes
*/
#define decode_GLshort(x) x
#define decode_GLushort(x) x
#define decode_GLdouble(x) *(GLdouble *)&(x)
#define decode_GLint(x) x
#define decode_GLfloat(x) *(float *)&(x)
#define decode_GLbyte(x) x
#define decode_GLubyte(x) x
#define decode_GLuint(x) x
#define decode_GLboolean(x) ((x)==0 ? false : true)
//---------------------------------------------------------------------------
/**
* Include the file DECODE.h for building the logDec_##name functions.
*/
extern "C"
{
	#include "DECODE.h"
};
//---------------------------------------------------------------------------
OGLPlugin::OGLPlugin()
{
  // Load data from ini file
  TIniFile * ini = new TIniFile(ChangeFileExt( Application->ExeName, ".INI" ));
  eyeX = ini->ReadFloat("gluLookAt", "eyeX", 0.0);
  eyeY = ini->ReadFloat("gluLookAt", "eyeY", 0.0);
  eyeZ = ini->ReadFloat("gluLookAt", "eyeZ", 1.0);
  centerX = ini->ReadFloat("gluLookAt", "centerX", 0.0);
  centerY = ini->ReadFloat("gluLookAt", "centerY", 0.0);
  centerZ = ini->ReadFloat("gluLookAt", "centerZ", 0.0);
  upX = ini->ReadFloat("gluLookAt", "upX", 0.0);
  upY = ini->ReadFloat("gluLookAt", "upY", 1.0);
  upZ = ini->ReadFloat("gluLookAt", "upZ", 0.0);
  delete ini;
/**
* A macro.
* This macro links the logDec_##name functions with the array logDecode.
*/
#define FNAME_FUNC(number, name)  logDecode[number] = logDec_##name;
#include "FNAMES.h"
}
//---------------------------------------------------------------------------
OGLPlugin::~OGLPlugin()
{
  ;
}
//---------------------------------------------------------------------------
bool __fastcall OGLPlugin::processInput(void * data, unsigned numBytes)
{
	DWORD funcType;
	unsigned * dataDW = (unsigned *)data;
	DWORD packType = dataDW[0];
	switch (packType)
	{
		case PR_LOG: // Logging data
			if (numBytes >= 4*(1+1)) // Min. two unsigned values (packType & funcType)
			{
				funcType = dataDW[1];
				if (funcType < NUMFUNCS)
				{
          switch (funcType)
          {
            case 361: // Swap Buffers
            case 362:
              SwapBuffers(hdc);
              break;
            // @todo INSERT ALL THE IMPLEMENTET OGL FUNCTION NUMBERS
						case 0: 
						case 1: 
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
						case 15:
						case 16:
						case 17:
						case 19:
						case 21:
						case 23:
						case 25:
						case 27:
						case 29:
						case 31:
						case 33:
						case 35:
						case 37:
						case 39:
						case 41:
						case 43:
						case 45:
						case 47:
						case 49:
						case 50:
						case 52:
						case 53:
						case 54:
						case 55:
						case 56:
						case 57:
						case 58:
						case 60:
						case 61:
						case 62:
						case 63:
						case 64:
						case 66:
						case 68:
						case 69:
						case 72:
						case 74:
						case 75:
						case 76:
						case 78:
						case 80:
						case 82:
						case 84:
						case 85:
						case 86:
						case 87:
						case 89:
						case 90:
						case 91:
						case 92:
						case 93:
						case 94:
						case 95:
						case 96:
						case 97:
						case 98:
						case 109:
						case 135:
						case 136:
						case 138:
						case 140:
						case 142:
						case 144:
						case 146:
						case 148:
						case 153:
						case 154:
						case 155:
						case 156:
						case 157:
						case 158:
						case 159:
						case 160:
						case 161:
						case 162:
						case 163:
						case 164:
						case 165:
						case 166:
						case 167:
						case 168:
						case 169:
						case 170:
						case 171:
						case 172:
						case 173:
						case 174:
						case 175:
						case 176:
						case 177:
						case 178:
						case 179:
						case 180:
						case 181:
						case 182:
						case 183:
						case 184:
						case 185:
						case 187:
						case 189:
						case 191:
						case 193:
						case 196:
						case 197:
						case 198:
						case 199:
						case 200:
						case 201:
						case 202:
						case 203:
						case 204:
						case 205:
						case 206:
						case 207:
						case 208:
						case 209:
						case 210:
						case 211:
						case 212:
						case 213:
						case 215:
						case 216:
						case 217:
						case 218:
						case 219:
						case 221:
						case 223:
						case 225:
						case 227:
						case 229:
						case 231:
						case 233:
						case 235:
						case 237:
						case 239:
						case 241:
						case 243:
						case 245:
						case 247:
						case 249:
						case 251:
						case 253:
						case 254:
						case 255:
						case 256:
						case 257:
						case 258:
						case 259:
						case 260:
						case 261:
						case 262:
						case 263:
						case 264:
						case 266:
						case 268:
						case 270:
						case 272:
						case 274:
						case 276:
						case 278:
						case 280:
						case 282: 
						case 284:
						case 286: 
						case 288:
						case 290:
						case 292:
						case 294:
						case 297:
						case 298:
						case 299:
						case 300:
						case 301:
						case 302:
						case 303:
						case 304:
						case 305:
						case 306:
						case 307:
						case 308:
						case 309:
						case 310:
						case 311:
						case 312:
						case 313:
						case 314:
						case 315:
						case 316:
						case 317:
						case 319:
						case 321:
						case 323:
						case 325:
						case 327:
						case 329:
						case 331:
						case 333:
						case 335:
						case 337:
						case 339:
						case 342:
    					logDecode[funcType](dataDW+2,numBytes-8);
              break;
            default:
              ;
          }
				}
      }
    default:
      ;
	}
  return false;
}
//---------------------------------------------------------------------------
void __fastcall OGLPlugin::LinkRenderWindow(HDC hdc)
{
  this->hdc = hdc;
}
//---------------------------------------------------------------------------
