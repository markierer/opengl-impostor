// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the IMPOSTOR_OPENGL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// IMPOSTOR_OPENGL_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef IMPOSTOR_OPENGL_EXPORTS
#define IMPOSTOR_OPENGL_API __declspec(dllexport)
#else
#define IMPOSTOR_OPENGL_API __declspec(dllimport)
#endif

// This class is exported from the Impostor_OpenGL.dll
class IMPOSTOR_OPENGL_API CImpostor_OpenGL {
public:
	CImpostor_OpenGL(void);
	// TODO: add your methods here.
};

extern IMPOSTOR_OPENGL_API int nImpostor_OpenGL;

IMPOSTOR_OPENGL_API int fnImpostor_OpenGL(void);

