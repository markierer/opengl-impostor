// DECODE OpenGL32
/*DECODE_FUNC(0,glAccum, sizeof(GLenum) + sizeof(GLfloat) )
GLenum op; GLfloat value;
LSSB(&op,GLenum); LSSB(&value,GLfloat);
glAccum(op, value);
ENDLOG
DECODE_FUNC(1,glAlphaFunc)
FUNC_SIZE(1,0  + sizeof(GLenum) + sizeof(GLclampf) )
LSSB(&func,GLenum); LSSB(&ref,GLclampf); 
ENDLOG
DECODE_FUNC(2,glAreTexturesResident)
FUNC_SIZE(2,0  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(GLbooleanP) )
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); LSSB(&residences,GLbooleanP); 
ENDLOG
DECODE_FUNC(3,glArrayElement)
FUNC_SIZE(3,0  + sizeof(GLint) )
LSSB(&i,GLint); 
ENDLOG*/
DECODE_FUNC(4,glBegin,0  + sizeof(GLenum) )
GLenum mode;
LSSB(&mode,GLenum);
glBegin(mode);
ENDLOG
/*DECODE_FUNC(5,glBindTexture)
FUNC_SIZE(5,0  + sizeof(GLenum) + sizeof(GLuint) )
LSSB(&target,GLenum); LSSB(&texture,GLuint); 
ENDLOG
DECODE_FUNC(6,glBitmap)
FUNC_SIZE(6,0  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(CGLubyteP) )
LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&xorig,GLfloat); LSSB(&yorig,GLfloat); LSSB(&xmove,GLfloat); LSSB(&ymove,GLfloat); LSSB(&bitmap,CGLubyteP); 
ENDLOG
DECODE_FUNC(7,glBlendFunc)
FUNC_SIZE(7,0  + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&sfactor,GLenum); LSSB(&dfactor,GLenum); 
ENDLOG
DECODE_FUNC(8,glCallList)
FUNC_SIZE(8,0  + sizeof(GLuint) )
LSSB(&list,GLuint); 
ENDLOG
DECODE_FUNC(9,glCallLists)
FUNC_SIZE(9,0  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&n,GLsizei); LSSB(&type,GLenum); LSSB(&lists,CGLvoidP);
ENDLOG*/
DECODE_FUNC(10,glClear,0  + sizeof(GLbitfield) )
GLbitfield mask;
LSSB(&mask,GLbitfield);
glClear(mask);
ENDLOG
/*DECODE_FUNC(11,glClearAccum)
FUNC_SIZE(11,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); LSSB(&alpha,GLfloat); 
ENDLOG */
DECODE_FUNC(12,glClearColor,0  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) )
GLclampf red, green, blue, alpha;
LSSB(&red,GLclampf); LSSB(&green,GLclampf); LSSB(&blue,GLclampf); LSSB(&alpha,GLclampf);
glClearColor(red, green, blue, alpha);
ENDLOG
DECODE_FUNC(13,glClearDepth,0  + sizeof(GLclampd) )
GLclampd depth;
LSSB(&depth,GLclampd);
glClearDepth(depth);
ENDLOG
/*DECODE_FUNC(14,glClearIndex)
FUNC_SIZE(14,0  + sizeof(GLfloat) )
LSSB(&c,GLfloat); 
ENDLOG
DECODE_FUNC(15,glClearStencil)
FUNC_SIZE(15,0  + sizeof(GLint) )
LSSB(&s,GLint); 
ENDLOG
DECODE_FUNC(16,glClipPlane)
FUNC_SIZE(16,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&plane,GLenum); LSSB(&equation,CGLdoubleP); 
ENDLOG
DECODE_FUNC(17,glColor3b)
FUNC_SIZE(17,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); 
ENDLOG
DECODE_FUNC(18,glColor3bv)
FUNC_SIZE(18,0  + sizeof(CGLbyteP) )
LSSB(&v,CGLbyteP); 
ENDLOG
DECODE_FUNC(19,glColor3d)
FUNC_SIZE(19,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); 
ENDLOG
DECODE_FUNC(20,glColor3dv)
FUNC_SIZE(20,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG*/
DECODE_FUNC(21,glColor3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat red, green, blue; 
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat);
glColor3f(red, green, blue);
ENDLOG
/*DECODE_FUNC(22,glColor3fv)
FUNC_SIZE(22,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(23,glColor3i)
FUNC_SIZE(23,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); 
ENDLOG
DECODE_FUNC(24,glColor3iv)
FUNC_SIZE(24,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(25,glColor3s)
FUNC_SIZE(25,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); 
ENDLOG
DECODE_FUNC(26,glColor3sv)
FUNC_SIZE(26,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP);
ENDLOG
DECODE_FUNC(27,glColor3ub)
FUNC_SIZE(27,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); 
ENDLOG
DECODE_FUNC(28,glColor3ubv)
FUNC_SIZE(28,0  + sizeof(CGLubyteP) )
LSSB(&v,CGLubyteP); 
ENDLOG
DECODE_FUNC(29,glColor3ui)
FUNC_SIZE(29,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); 
ENDLOG
DECODE_FUNC(30,glColor3uiv)
FUNC_SIZE(30,0  + sizeof(CGLuintP) )
LSSB(&v,CGLuintP); 
ENDLOG
DECODE_FUNC(31,glColor3us)
FUNC_SIZE(31,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); 
ENDLOG
DECODE_FUNC(32,glColor3usv)
FUNC_SIZE(32,0  + sizeof(CGLushortP) )
LSSB(&v,CGLushortP); 
ENDLOG
DECODE_FUNC(33,glColor4b)
FUNC_SIZE(33,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); LSSB(&alpha,GLbyte); 
ENDLOG
DECODE_FUNC(34,glColor4bv)
FUNC_SIZE(34,0  + sizeof(CGLbyteP) )
LSSB(&v,CGLbyteP); 
ENDLOG
DECODE_FUNC(35,glColor4d)
FUNC_SIZE(35,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); LSSB(&alpha,GLdouble); 
ENDLOG
DECODE_FUNC(36,glColor4dv)
FUNC_SIZE(36,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(37,glColor4f)
FUNC_SIZE(37,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); LSSB(&alpha,GLfloat); 
ENDLOG
DECODE_FUNC(38,glColor4fv)
FUNC_SIZE(38,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(39,glColor4i)
FUNC_SIZE(39,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); LSSB(&alpha,GLint); 
ENDLOG
DECODE_FUNC(40,glColor4iv)
FUNC_SIZE(40,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(41,glColor4s)
FUNC_SIZE(41,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); LSSB(&alpha,GLshort); 
ENDLOG
DECODE_FUNC(42,glColor4sv)
FUNC_SIZE(42,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(43,glColor4ub)
FUNC_SIZE(43,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); LSSB(&alpha,GLubyte);
ENDLOG
DECODE_FUNC(44,glColor4ubv)
FUNC_SIZE(44,0  + sizeof(CGLubyteP) )
LSSB(&v,CGLubyteP); 
ENDLOG
DECODE_FUNC(45,glColor4ui)
FUNC_SIZE(45,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); LSSB(&alpha,GLuint); 
ENDLOG
DECODE_FUNC(46,glColor4uiv)
FUNC_SIZE(46,0  + sizeof(CGLuintP) )
LSSB(&v,CGLuintP); 
ENDLOG
DECODE_FUNC(47,glColor4us)
FUNC_SIZE(47,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); LSSB(&alpha,GLushort); 
ENDLOG
DECODE_FUNC(48,glColor4usv)
FUNC_SIZE(48,0  + sizeof(CGLushortP) )
LSSB(&v,CGLushortP); 
ENDLOG
DECODE_FUNC(49,glColorMask)
FUNC_SIZE(49,0  + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) )
LSSB(&red,GLboolean); LSSB(&green,GLboolean); LSSB(&blue,GLboolean); LSSB(&alpha,GLboolean); 
ENDLOG
DECODE_FUNC(50,glColorMaterial)
FUNC_SIZE(50,0  + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&face,GLenum); LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(51,glColorPointer)
FUNC_SIZE(51,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(52,glCopyPixels)
FUNC_SIZE(52,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&type,GLenum); 
ENDLOG
DECODE_FUNC(53,glCopyTexImage1D)
FUNC_SIZE(53,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalFormat,GLenum); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&border,GLint); 
ENDLOG
DECODE_FUNC(54,glCopyTexImage2D)
FUNC_SIZE(54,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalFormat,GLenum); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&border,GLint); 
ENDLOG
DECODE_FUNC(55,glCopyTexSubImage1D)
FUNC_SIZE(55,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); 
ENDLOG
DECODE_FUNC(56,glCopyTexSubImage2D)
FUNC_SIZE(56,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&yoffset,GLint); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); 
ENDLOG
DECODE_FUNC(57,glCullFace)
FUNC_SIZE(57,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(58,glDeleteLists)
FUNC_SIZE(58,0  + sizeof(GLuint) + sizeof(GLsizei) )
LSSB(&list,GLuint); LSSB(&range,GLsizei); 
ENDLOG
DECODE_FUNC(59,glDeleteTextures)
FUNC_SIZE(59,0  + sizeof(GLsizei) + sizeof(CGLuintP) )
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); 
ENDLOG*/
DECODE_FUNC(60,glDepthFunc,0  + sizeof(GLenum) )
GLenum func;
LSSB(&func,GLenum);
glDepthFunc(func);
ENDLOG
/*DECODE_FUNC(61,glDepthMask)
FUNC_SIZE(61,0  + sizeof(GLboolean) )
LSSB(&flag,GLboolean); 
ENDLOG
DECODE_FUNC(62,glDepthRange)
FUNC_SIZE(62,0  + sizeof(GLclampd) + sizeof(GLclampd) )
LSSB(&zNear,GLclampd); LSSB(&zFar,GLclampd); 
ENDLOG
DECODE_FUNC(63,glDisable)
FUNC_SIZE(63,0  + sizeof(GLenum) )
LSSB(&cap,GLenum); 
ENDLOG
DECODE_FUNC(64,glDisableClientState)
FUNC_SIZE(64,0  + sizeof(GLenum) )
LSSB(&array,GLenum); 
ENDLOG
DECODE_FUNC(65,glDrawArrays)
FUNC_SIZE(65,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLsizei) )
LSSB(&mode,GLenum); LSSB(&first,GLint); LSSB(&count,GLsizei); 
ENDLOG
DECODE_FUNC(66,glDrawBuffer)
FUNC_SIZE(66,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(67,glDrawElements)
FUNC_SIZE(67,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&mode,GLenum); LSSB(&count,GLsizei); LSSB(&type,GLenum); LSSB(&indices,CGLvoidP); 
ENDLOG
DECODE_FUNC(68,glDrawPixels)
FUNC_SIZE(68,0  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
DECODE_FUNC(69,glEdgeFlag)
FUNC_SIZE(69,0  + sizeof(GLboolean) )
LSSB(&flag,GLboolean); 
ENDLOG
DECODE_FUNC(70,glEdgeFlagPointer)
FUNC_SIZE(70,0  + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(71,glEdgeFlagv)
FUNC_SIZE(71,0  + sizeof(CGLbooleanP) )
LSSB(&flag,CGLbooleanP); 
ENDLOG */
DECODE_FUNC(72,glEnable,0  + sizeof(GLenum) )
GLenum cap;
LSSB(&cap,GLenum);
glEnable(cap);
ENDLOG
/*DECODE_FUNC(73,glEnableClientState)
FUNC_SIZE(73,0  + sizeof(GLenum) )
LSSB(&array,GLenum); 
ENDLOG*/
DECODE_FUNC(74,glEnd,0  )
glEnd();
ENDLOG
/*DECODE_FUNC(75,glEndList)
FUNC_SIZE(75,0  )
ENDLOG
DECODE_FUNC(76,glEvalCoord1d)
FUNC_SIZE(76,0  + sizeof(GLdouble) )
LSSB(&u,GLdouble); 
ENDLOG
DECODE_FUNC(77,glEvalCoord1dv)
FUNC_SIZE(77,0  + sizeof(CGLdoubleP) )
LSSB(&u,CGLdoubleP); 
ENDLOG
DECODE_FUNC(78,glEvalCoord1f)
FUNC_SIZE(78,0  + sizeof(GLfloat) )
LSSB(&u,GLfloat); 
ENDLOG
DECODE_FUNC(79,glEvalCoord1fv)
FUNC_SIZE(79,0  + sizeof(CGLfloatP) )
LSSB(&u,CGLfloatP); 
ENDLOG
DECODE_FUNC(80,glEvalCoord2d)
FUNC_SIZE(80,0  + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&u,GLdouble); LSSB(&v,GLdouble); 
ENDLOG
DECODE_FUNC(81,glEvalCoord2dv)
FUNC_SIZE(81,0  + sizeof(CGLdoubleP) )
LSSB(&u,CGLdoubleP); 
ENDLOG
DECODE_FUNC(82,glEvalCoord2f)
FUNC_SIZE(82,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&u,GLfloat); LSSB(&v,GLfloat); 
ENDLOG
DECODE_FUNC(83,glEvalCoord2fv)
FUNC_SIZE(83,0  + sizeof(CGLfloatP) )
LSSB(&u,CGLfloatP); 
ENDLOG
DECODE_FUNC(84,glEvalMesh1)
FUNC_SIZE(84,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) )
LSSB(&mode,GLenum); LSSB(&i1,GLint); LSSB(&i2,GLint); 
ENDLOG
DECODE_FUNC(85,glEvalMesh2)
FUNC_SIZE(85,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&mode,GLenum); LSSB(&i1,GLint); LSSB(&i2,GLint); LSSB(&j1,GLint); LSSB(&j2,GLint); 
ENDLOG
DECODE_FUNC(86,glEvalPoint1)
FUNC_SIZE(86,0  + sizeof(GLint) )
LSSB(&i,GLint);
ENDLOG
DECODE_FUNC(87,glEvalPoint2)
FUNC_SIZE(87,0  + sizeof(GLint) + sizeof(GLint) )
LSSB(&i,GLint); LSSB(&j,GLint); 
ENDLOG
DECODE_FUNC(88,glFeedbackBuffer)
FUNC_SIZE(88,0  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&size,GLsizei); LSSB(&type,GLenum); LSSB(&buffer,GLfloatP); 
ENDLOG
DECODE_FUNC(89,glFinish)
FUNC_SIZE(89,0  )

ENDLOG
DECODE_FUNC(90,glFlush)
FUNC_SIZE(90,0  )

ENDLOG
DECODE_FUNC(91,glFogf)
FUNC_SIZE(91,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(92,glFogfv)
FUNC_SIZE(92,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(93,glFogi)
FUNC_SIZE(93,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(94,glFogiv)
FUNC_SIZE(94,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(95,glFrontFace)
FUNC_SIZE(95,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG*/
DECODE_FUNC(96,glFrustum,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble left, right, bottom, top, zNear, zFar;
LSSB(&left,GLdouble); LSSB(&right,GLdouble); LSSB(&bottom,GLdouble); LSSB(&top,GLdouble); LSSB(&zNear,GLdouble); LSSB(&zFar,GLdouble);
glFrustum(left, right, bottom, top, zNear, zFar);
ENDLOG
/*DECODE_FUNC(97,glGenLists)
FUNC_SIZE(97,0  + sizeof(GLsizei) )
LSSB(&range,GLsizei); 
ENDLOG
DECODE_FUNC(98,glGenTextures)
FUNC_SIZE(98,0  + sizeof(GLsizei) + sizeof(GLuintP) )
LSSB(&n,GLsizei); LSSB(&textures,GLuintP); 
ENDLOG
DECODE_FUNC(99,GlmfBeginGlsBlock)
FUNC_SIZE(99,0  + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); 
ENDLOG
DECODE_FUNC(100,GlmfEndGlsBlock)
FUNC_SIZE(100,0  + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); 
ENDLOG
DECODE_FUNC(101,GlmfCloseMetaFile)
FUNC_SIZE(101,0  + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); 
ENDLOG
DECODE_FUNC(102,GlmfEndPlayback)
FUNC_SIZE(102,0  + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); 
ENDLOG
DECODE_FUNC(103,GlmfInitPlayback)
FUNC_SIZE(103,0  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); LSSB(&dwArg3,DWORD);
ENDLOG
DECODE_FUNC(104,GlmfPlayGlsRecord)
FUNC_SIZE(104,0  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); LSSB(&dwArg3,DWORD); LSSB(&dwArg4,DWORD); 
ENDLOG
DECODE_FUNC(105,glDebugEntry)
FUNC_SIZE(105,0  + sizeof(DWORD) + sizeof(DWORD) )
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); 
ENDLOG
DECODE_FUNC(106,glGetBooleanv)
FUNC_SIZE(106,0  + sizeof(GLenum) + sizeof(GLbooleanP) )
LSSB(&pname,GLenum); LSSB(&params,GLbooleanP); 
ENDLOG
DECODE_FUNC(107,glGetClipPlane)
FUNC_SIZE(107,0  + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB(&plane,GLenum); LSSB(&equation,GLdoubleP); 
ENDLOG
DECODE_FUNC(108,glGetDoublev)
FUNC_SIZE(108,0  + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB(&pname,GLenum); LSSB(&params,GLdoubleP); 
ENDLOG
DECODE_FUNC(109,glGetError)
FUNC_SIZE(109,0  )

ENDLOG
DECODE_FUNC(110,glGetFloatv)
FUNC_SIZE(110,0  + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(111,glGetIntegerv)
FUNC_SIZE(111,0  + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(112,glGetLightfv)
FUNC_SIZE(112,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(113,glGetLightiv)
FUNC_SIZE(113,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(114,glGetMapdv)
FUNC_SIZE(114,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLdoubleP); 
ENDLOG
DECODE_FUNC(115,glGetMapfv)
FUNC_SIZE(115,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLfloatP); 
ENDLOG
DECODE_FUNC(116,glGetMapiv)
FUNC_SIZE(116,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLintP); 
ENDLOG
DECODE_FUNC(117,glGetMaterialfv)
FUNC_SIZE(117,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(118,glGetMaterialiv)
FUNC_SIZE(118,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(119,glGetPixelMapfv)
FUNC_SIZE(119,0  + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&map,GLenum); LSSB(&values,GLfloatP); 
ENDLOG
DECODE_FUNC(120,glGetPixelMapuiv)
FUNC_SIZE(120,0  + sizeof(GLenum) + sizeof(GLuintP) )
LSSB(&map,GLenum); LSSB(&values,GLuintP);
ENDLOG
DECODE_FUNC(121,glGetPixelMapusv)
FUNC_SIZE(121,0  + sizeof(GLenum) + sizeof(GLushortP) )
LSSB(&map,GLenum); LSSB(&values,GLushortP); 
ENDLOG
DECODE_FUNC(122,glGetPointerv)
FUNC_SIZE(122,0  + sizeof(GLenum) + sizeof(GLvoidPP) )
LSSB(&pname,GLenum); LSSB(&params,GLvoidPP); 
ENDLOG
DECODE_FUNC(123,glGetPolygonStipple)
FUNC_SIZE(123,0  + sizeof(GLubyteP) )
LSSB(&mask,GLubyteP); 
ENDLOG
DECODE_FUNC(124,glGetString)
FUNC_SIZE(124,0  + sizeof(GLenum) )
LSSB(&name,GLenum); 
ENDLOG
DECODE_FUNC(125,glGetTexEnvfv)
FUNC_SIZE(125,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(126,glGetTexEnviv)
FUNC_SIZE(126,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(127,glGetTexGendv)
FUNC_SIZE(127,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLdoubleP); 
ENDLOG
DECODE_FUNC(128,glGetTexGenfv)
FUNC_SIZE(128,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(129,glGetTexGeniv)
FUNC_SIZE(129,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(130,glGetTexImage)
FUNC_SIZE(130,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,GLvoidP); 
ENDLOG
DECODE_FUNC(131,glGetTexLevelParameterfv)
FUNC_SIZE(131,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(132,glGetTexLevelParameteriv)
FUNC_SIZE(132,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(133,glGetTexParameterfv)
FUNC_SIZE(133,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(134,glGetTexParameteriv)
FUNC_SIZE(134,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG*/
DECODE_FUNC(135,glHint,0  + sizeof(GLenum) + sizeof(GLenum) )
GLenum target, mode;
LSSB(&target,GLenum); LSSB(&mode,GLenum);
glHint(target, mode);
ENDLOG
/*DECODE_FUNC(136,glIndexMask)
FUNC_SIZE(136,0  + sizeof(GLuint) )
LSSB(&mask,GLuint); 
ENDLOG
DECODE_FUNC(137,glIndexPointer)
FUNC_SIZE(137,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP);
ENDLOG
DECODE_FUNC(138,glIndexd)
FUNC_SIZE(138,0  + sizeof(GLdouble) )
LSSB(&c,GLdouble); 
ENDLOG
DECODE_FUNC(139,glIndexdv)
FUNC_SIZE(139,0  + sizeof(CGLdoubleP) )
LSSB(&c,CGLdoubleP); 
ENDLOG
DECODE_FUNC(140,glIndexf)
FUNC_SIZE(140,0  + sizeof(GLfloat) )
LSSB(&c,GLfloat); 
ENDLOG
DECODE_FUNC(141,glIndexfv)
FUNC_SIZE(141,0  + sizeof(CGLfloatP) )
LSSB(&c,CGLfloatP); 
ENDLOG
DECODE_FUNC(142,glIndexi)
FUNC_SIZE(142,0  + sizeof(GLint) )
LSSB(&c,GLint); 
ENDLOG
DECODE_FUNC(143,glIndexiv)
FUNC_SIZE(143,0  + sizeof(CGLintP) )
LSSB(&c,CGLintP); 
ENDLOG
DECODE_FUNC(144,glIndexs)
FUNC_SIZE(144,0  + sizeof(GLshort) )
LSSB(&c,GLshort); 
ENDLOG
DECODE_FUNC(145,glIndexsv)
FUNC_SIZE(145,0  + sizeof(CGLshortP) )
LSSB(&c,CGLshortP); 
ENDLOG
DECODE_FUNC(146,glIndexub)
FUNC_SIZE(146,0  + sizeof(GLubyte) )
LSSB(&c,GLubyte); 
ENDLOG
DECODE_FUNC(147,glIndexubv)
FUNC_SIZE(147,0  + sizeof(CGLubyteP) )
LSSB(&c,CGLubyteP); 
ENDLOG
DECODE_FUNC(148,glInitNames)
FUNC_SIZE(148,0  )

ENDLOG
DECODE_FUNC(149,glInterleavedArrays)
FUNC_SIZE(149,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&format,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(150,glIsEnabled)
FUNC_SIZE(150,0  + sizeof(GLenum) )
LSSB(&cap,GLenum); 
ENDLOG
DECODE_FUNC(151,glIsList)
FUNC_SIZE(151,0  + sizeof(GLuint) )
LSSB(&list,GLuint); 
ENDLOG
DECODE_FUNC(152,glIsTexture)
FUNC_SIZE(152,0  + sizeof(GLuint) )
LSSB(&texture,GLuint); 
ENDLOG
DECODE_FUNC(153,glLightModelf)
FUNC_SIZE(153,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(154,glLightModelfv)
FUNC_SIZE(154,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP);
ENDLOG
DECODE_FUNC(155,glLightModeli)
FUNC_SIZE(155,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(156,glLightModeliv)
FUNC_SIZE(156,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(157,glLightf)
FUNC_SIZE(157,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(158,glLightfv)
FUNC_SIZE(158,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(159,glLighti)
FUNC_SIZE(159,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(160,glLightiv)
FUNC_SIZE(160,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(161,glLineStipple)
FUNC_SIZE(161,0  + sizeof(GLint) + sizeof(GLushort) )
LSSB(&factor,GLint); LSSB(&pattern,GLushort); 
ENDLOG
DECODE_FUNC(162,glLineWidth)
FUNC_SIZE(162,0  + sizeof(GLfloat) )
LSSB(&width,GLfloat); 
ENDLOG
DECODE_FUNC(163,glListBase)
FUNC_SIZE(163,0  + sizeof(GLuint) )
LSSB(&base,GLuint); 
ENDLOG*/
DECODE_FUNC(164,glLoadIdentity,0  )
glLoadIdentity();
ENDLOG
/*DECODE_FUNC(165,glLoadMatrixd)
FUNC_SIZE(165,0  + sizeof(CGLdoubleP) )
LSSB(&m,CGLdoubleP); 
ENDLOG
DECODE_FUNC(166,glLoadMatrixf)
FUNC_SIZE(166,0  + sizeof(CGLfloatP) )
LSSB(&m,CGLfloatP); 
ENDLOG
DECODE_FUNC(167,glLoadName)
FUNC_SIZE(167,0  + sizeof(GLuint) )
LSSB(&name,GLuint); 
ENDLOG
DECODE_FUNC(168,glLogicOp)
FUNC_SIZE(168,0  + sizeof(GLenum) )
LSSB(&opcode,GLenum); 
ENDLOG
DECODE_FUNC(169,glMap1d)
FUNC_SIZE(169,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&stride,GLint); LSSB(&order,GLint); LSSB(&points,CGLdoubleP); 
ENDLOG
DECODE_FUNC(170,glMap1f)
FUNC_SIZE(170,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&stride,GLint); LSSB(&order,GLint); LSSB(&points,CGLfloatP); 
ENDLOG
DECODE_FUNC(171,glMap2d)
FUNC_SIZE(171,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&ustride,GLint); LSSB(&uorder,GLint); LSSB(&v1,GLdouble); LSSB(&v2,GLdouble); LSSB(&vstride,GLint); LSSB(&vorder,GLint); LSSB(&points,CGLdoubleP);
ENDLOG
DECODE_FUNC(172,glMap2f)
FUNC_SIZE(172,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&ustride,GLint); LSSB(&uorder,GLint); LSSB(&v1,GLfloat); LSSB(&v2,GLfloat); LSSB(&vstride,GLint); LSSB(&vorder,GLint); LSSB(&points,CGLfloatP); 
ENDLOG
DECODE_FUNC(173,glMapGrid1d)
FUNC_SIZE(173,0  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&un,GLint); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); 
ENDLOG
DECODE_FUNC(174,glMapGrid1f)
FUNC_SIZE(174,0  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&un,GLint); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); 
ENDLOG
DECODE_FUNC(175,glMapGrid2d)
FUNC_SIZE(175,0  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&un,GLint); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&vn,GLint); LSSB(&v1,GLdouble); LSSB(&v2,GLdouble); 
ENDLOG
DECODE_FUNC(176,glMapGrid2f)
FUNC_SIZE(176,0  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&un,GLint); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&vn,GLint); LSSB(&v1,GLfloat); LSSB(&v2,GLfloat); 
ENDLOG
DECODE_FUNC(177,glMaterialf)
FUNC_SIZE(177,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(178,glMaterialfv)
FUNC_SIZE(178,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(179,glMateriali)
FUNC_SIZE(179,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(180,glMaterialiv)
FUNC_SIZE(180,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG*/
DECODE_FUNC(181,glMatrixMode,0  + sizeof(GLenum) )
GLenum mode;
LSSB(&mode,GLenum);
glMatrixMode(mode);
ENDLOG
/*DECODE_FUNC(182,glMultMatrixd)
FUNC_SIZE(182,0  + sizeof(CGLdoubleP) )
LSSB(&m,CGLdoubleP); 
ENDLOG
DECODE_FUNC(183,glMultMatrixf)
FUNC_SIZE(183,0  + sizeof(CGLfloatP) )
LSSB(&m,CGLfloatP); 
ENDLOG
DECODE_FUNC(184,glNewList)
FUNC_SIZE(184,0  + sizeof(GLuint) + sizeof(GLenum) )
LSSB(&list,GLuint); LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(185,glNormal3b)
FUNC_SIZE(185,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
LSSB(&nx,GLbyte); LSSB(&ny,GLbyte); LSSB(&nz,GLbyte); 
ENDLOG
DECODE_FUNC(186,glNormal3bv)
FUNC_SIZE(186,0  + sizeof(CGLbyteP) )
LSSB(&v,CGLbyteP); 
ENDLOG
DECODE_FUNC(187,glNormal3d)
FUNC_SIZE(187,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&nx,GLdouble); LSSB(&ny,GLdouble); LSSB(&nz,GLdouble); 
ENDLOG
DECODE_FUNC(188,glNormal3dv)
FUNC_SIZE(188,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP);
ENDLOG
DECODE_FUNC(189,glNormal3f)
FUNC_SIZE(189,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&nx,GLfloat); LSSB(&ny,GLfloat); LSSB(&nz,GLfloat); 
ENDLOG
DECODE_FUNC(190,glNormal3fv)
FUNC_SIZE(190,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(191,glNormal3i)
FUNC_SIZE(191,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&nx,GLint); LSSB(&ny,GLint); LSSB(&nz,GLint); 
ENDLOG
DECODE_FUNC(192,glNormal3iv)
FUNC_SIZE(192,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(193,glNormal3s)
FUNC_SIZE(193,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&nx,GLshort); LSSB(&ny,GLshort); LSSB(&nz,GLshort); 
ENDLOG
DECODE_FUNC(194,glNormal3sv)
FUNC_SIZE(194,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(195,glNormalPointer)
FUNC_SIZE(195,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(196,glOrtho)
FUNC_SIZE(196,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&left,GLdouble); LSSB(&right,GLdouble); LSSB(&bottom,GLdouble); LSSB(&top,GLdouble); LSSB(&zNear,GLdouble); LSSB(&zFar,GLdouble); 
ENDLOG
DECODE_FUNC(197,glPassThrough)
FUNC_SIZE(197,0  + sizeof(GLfloat) )
LSSB(&token,GLfloat); 
ENDLOG
DECODE_FUNC(198,glPixelMapfv)
FUNC_SIZE(198,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLfloatP) )
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLfloatP); 
ENDLOG
DECODE_FUNC(199,glPixelMapuiv)
FUNC_SIZE(199,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLuintP) )
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLuintP); 
ENDLOG
DECODE_FUNC(200,glPixelMapusv)
FUNC_SIZE(200,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLushortP) )
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLushortP); 
ENDLOG
DECODE_FUNC(201,glPixelStoref)
FUNC_SIZE(201,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(202,glPixelStorei)
FUNC_SIZE(202,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(203,glPixelTransferf)
FUNC_SIZE(203,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(204,glPixelTransferi)
FUNC_SIZE(204,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(205,glPixelZoom)
FUNC_SIZE(205,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&xfactor,GLfloat); LSSB(&yfactor,GLfloat);
ENDLOG
DECODE_FUNC(206,glPointSize)
FUNC_SIZE(206,0  + sizeof(GLfloat) )
LSSB(&size,GLfloat); 
ENDLOG
DECODE_FUNC(207,glPolygonMode)
FUNC_SIZE(207,0  + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&face,GLenum); LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(208,glPolygonOffset)
FUNC_SIZE(208,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&factor,GLfloat); LSSB(&units,GLfloat); 
ENDLOG
DECODE_FUNC(209,glPolygonStipple)
FUNC_SIZE(209,0  + sizeof(CGLubyteP) )
LSSB(&mask,CGLubyteP); 
ENDLOG
DECODE_FUNC(210,glPopAttrib)
FUNC_SIZE(210,0  )

ENDLOG
DECODE_FUNC(211,glPopClientAttrib)
FUNC_SIZE(211,0  )

ENDLOG
DECODE_FUNC(212,glPopMatrix)
FUNC_SIZE(212,0  )

ENDLOG
DECODE_FUNC(213,glPopName)
FUNC_SIZE(213,0  )

ENDLOG
DECODE_FUNC(214,glPrioritizeTextures)
FUNC_SIZE(214,0  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(CGLclampfP) )
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); LSSB(&priorities,CGLclampfP); 
ENDLOG
DECODE_FUNC(215,glPushAttrib)
FUNC_SIZE(215,0  + sizeof(GLbitfield) )
LSSB(&mask,GLbitfield); 
ENDLOG
DECODE_FUNC(216,glPushClientAttrib)
FUNC_SIZE(216,0  + sizeof(GLbitfield) )
LSSB(&mask,GLbitfield); 
ENDLOG
DECODE_FUNC(217,glPushMatrix)
FUNC_SIZE(217,0  )

ENDLOG
DECODE_FUNC(218,glPushName)
FUNC_SIZE(218,0  + sizeof(GLuint) )
LSSB(&name,GLuint); 
ENDLOG
DECODE_FUNC(219,glRasterPos2d)
FUNC_SIZE(219,0  + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); 
ENDLOG
DECODE_FUNC(220,glRasterPos2dv)
FUNC_SIZE(220,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(221,glRasterPos2f)
FUNC_SIZE(221,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); 
ENDLOG
DECODE_FUNC(222,glRasterPos2fv)
FUNC_SIZE(222,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP);
ENDLOG
DECODE_FUNC(223,glRasterPos2i)
FUNC_SIZE(223,0  + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); 
ENDLOG
DECODE_FUNC(224,glRasterPos2iv)
FUNC_SIZE(224,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(225,glRasterPos2s)
FUNC_SIZE(225,0  + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); 
ENDLOG
DECODE_FUNC(226,glRasterPos2sv)
FUNC_SIZE(226,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(227,glRasterPos3d)
FUNC_SIZE(227,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
DECODE_FUNC(228,glRasterPos3dv)
FUNC_SIZE(228,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(229,glRasterPos3f)
FUNC_SIZE(229,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
DECODE_FUNC(230,glRasterPos3fv)
FUNC_SIZE(230,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(231,glRasterPos3i)
FUNC_SIZE(231,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); 
ENDLOG
DECODE_FUNC(232,glRasterPos3iv)
FUNC_SIZE(232,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(233,glRasterPos3s)
FUNC_SIZE(233,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); 
ENDLOG
DECODE_FUNC(234,glRasterPos3sv)
FUNC_SIZE(234,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(235,glRasterPos4d)
FUNC_SIZE(235,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); LSSB(&w,GLdouble); 
ENDLOG
DECODE_FUNC(236,glRasterPos4dv)
FUNC_SIZE(236,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(237,glRasterPos4f)
FUNC_SIZE(237,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); LSSB(&w,GLfloat); 
ENDLOG
DECODE_FUNC(238,glRasterPos4fv)
FUNC_SIZE(238,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(239,glRasterPos4i)
FUNC_SIZE(239,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); LSSB(&w,GLint);
ENDLOG
DECODE_FUNC(240,glRasterPos4iv)
FUNC_SIZE(240,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(241,glRasterPos4s)
FUNC_SIZE(241,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); LSSB(&w,GLshort); 
ENDLOG
DECODE_FUNC(242,glRasterPos4sv)
FUNC_SIZE(242,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(243,glReadBuffer)
FUNC_SIZE(243,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(244,glReadPixels)
FUNC_SIZE(244,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,GLvoidP); 
ENDLOG
DECODE_FUNC(245,glRectd)
FUNC_SIZE(245,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x1,GLdouble); LSSB(&y1,GLdouble); LSSB(&x2,GLdouble); LSSB(&y2,GLdouble); 
ENDLOG
DECODE_FUNC(246,glRectdv)
FUNC_SIZE(246,0  + sizeof(CGLdoubleP) + sizeof(CGLdoubleP) )
LSSB(&v1,CGLdoubleP); LSSB(&v2,CGLdoubleP); 
ENDLOG
DECODE_FUNC(247,glRectf)
FUNC_SIZE(247,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x1,GLfloat); LSSB(&y1,GLfloat); LSSB(&x2,GLfloat); LSSB(&y2,GLfloat); 
ENDLOG
DECODE_FUNC(248,glRectfv)
FUNC_SIZE(248,0  + sizeof(CGLfloatP) + sizeof(CGLfloatP) )
LSSB(&v1,CGLfloatP); LSSB(&v2,CGLfloatP); 
ENDLOG
DECODE_FUNC(249,glRecti)
FUNC_SIZE(249,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&x1,GLint); LSSB(&y1,GLint); LSSB(&x2,GLint); LSSB(&y2,GLint); 
ENDLOG
DECODE_FUNC(250,glRectiv)
FUNC_SIZE(250,0  + sizeof(CGLintP) + sizeof(CGLintP) )
LSSB(&v1,CGLintP); LSSB(&v2,CGLintP); 
ENDLOG
DECODE_FUNC(251,glRects)
FUNC_SIZE(251,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x1,GLshort); LSSB(&y1,GLshort); LSSB(&x2,GLshort); LSSB(&y2,GLshort); 
ENDLOG
DECODE_FUNC(252,glRectsv)
FUNC_SIZE(252,0  + sizeof(CGLshortP) + sizeof(CGLshortP) )
LSSB(&v1,CGLshortP); LSSB(&v2,CGLshortP); 
ENDLOG
DECODE_FUNC(253,glRenderMode)
FUNC_SIZE(253,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(254,glRotated)
FUNC_SIZE(254,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&angle,GLdouble); LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG*/
DECODE_FUNC(255,glRotatef,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat angle, x, y, z;
LSSB(&angle,GLfloat); LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat);
glRotatef(angle, x, y, z);
ENDLOG
/*DECODE_FUNC(256,glScaled)
FUNC_SIZE(256,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble);
ENDLOG
DECODE_FUNC(257,glScalef)
FUNC_SIZE(257,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
DECODE_FUNC(258,glScissor)
FUNC_SIZE(258,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); 
ENDLOG
DECODE_FUNC(259,glSelectBuffer)
FUNC_SIZE(259,0  + sizeof(GLsizei) + sizeof(GLuintP) )
LSSB(&size,GLsizei); LSSB(&buffer,GLuintP); 
ENDLOG */
DECODE_FUNC(260,glShadeModel,0  + sizeof(GLenum) )
GLenum mode;
LSSB(&mode,GLenum);
glShadeModel(mode);
ENDLOG
/*DECODE_FUNC(261,glStencilFunc)
FUNC_SIZE(261,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLuint) )
LSSB(&func,GLenum); LSSB(&ref,GLint); LSSB(&mask,GLuint); 
ENDLOG
DECODE_FUNC(262,glStencilMask)
FUNC_SIZE(262,0  + sizeof(GLuint) )
LSSB(&mask,GLuint); 
ENDLOG
DECODE_FUNC(263,glStencilOp)
FUNC_SIZE(263,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&fail,GLenum); LSSB(&zfail,GLenum); LSSB(&zpass,GLenum); 
ENDLOG
DECODE_FUNC(264,glTexCoord1d)
FUNC_SIZE(264,0  + sizeof(GLdouble) )
LSSB(&s,GLdouble); 
ENDLOG
DECODE_FUNC(265,glTexCoord1dv)
FUNC_SIZE(265,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(266,glTexCoord1f)
FUNC_SIZE(266,0  + sizeof(GLfloat) )
LSSB(&s,GLfloat); 
ENDLOG
DECODE_FUNC(267,glTexCoord1fv)
FUNC_SIZE(267,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(268,glTexCoord1i)
FUNC_SIZE(268,0  + sizeof(GLint) )
LSSB(&s,GLint); 
ENDLOG
DECODE_FUNC(269,glTexCoord1iv)
FUNC_SIZE(269,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(270,glTexCoord1s)
FUNC_SIZE(270,0  + sizeof(GLshort) )
LSSB(&s,GLshort); 
ENDLOG
DECODE_FUNC(271,glTexCoord1sv)
FUNC_SIZE(271,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(272,glTexCoord2d)
FUNC_SIZE(272,0  + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&s,GLdouble); LSSB(&t,GLdouble); 
ENDLOG
DECODE_FUNC(273,glTexCoord2dv)
FUNC_SIZE(273,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP);
ENDLOG
DECODE_FUNC(274,glTexCoord2f)
FUNC_SIZE(274,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&s,GLfloat); LSSB(&t,GLfloat); 
ENDLOG
DECODE_FUNC(275,glTexCoord2fv)
FUNC_SIZE(275,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(276,glTexCoord2i)
FUNC_SIZE(276,0  + sizeof(GLint) + sizeof(GLint) )
LSSB(&s,GLint); LSSB(&t,GLint); 
ENDLOG
DECODE_FUNC(277,glTexCoord2iv)
FUNC_SIZE(277,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(278,glTexCoord2s)
FUNC_SIZE(278,0  + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&s,GLshort); LSSB(&t,GLshort); 
ENDLOG
DECODE_FUNC(279,glTexCoord2sv)
FUNC_SIZE(279,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(280,glTexCoord3d)
FUNC_SIZE(280,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); 
ENDLOG
DECODE_FUNC(281,glTexCoord3dv)
FUNC_SIZE(281,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(282,glTexCoord3f)
FUNC_SIZE(282,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); 
ENDLOG
DECODE_FUNC(283,glTexCoord3fv)
FUNC_SIZE(283,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(284,glTexCoord3i)
FUNC_SIZE(284,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); 
ENDLOG
DECODE_FUNC(285,glTexCoord3iv)
FUNC_SIZE(285,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(286,glTexCoord3s)
FUNC_SIZE(286,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); 
ENDLOG
DECODE_FUNC(287,glTexCoord3sv)
FUNC_SIZE(287,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(288,glTexCoord4d)
FUNC_SIZE(288,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); LSSB(&q,GLdouble); 
ENDLOG
DECODE_FUNC(289,glTexCoord4dv)
FUNC_SIZE(289,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(290,glTexCoord4f)
FUNC_SIZE(290,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); LSSB(&q,GLfloat);
ENDLOG
DECODE_FUNC(291,glTexCoord4fv)
FUNC_SIZE(291,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(292,glTexCoord4i)
FUNC_SIZE(292,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); LSSB(&q,GLint); 
ENDLOG
DECODE_FUNC(293,glTexCoord4iv)
FUNC_SIZE(293,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(294,glTexCoord4s)
FUNC_SIZE(294,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); LSSB(&q,GLshort); 
ENDLOG
DECODE_FUNC(295,glTexCoord4sv)
FUNC_SIZE(295,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(296,glTexCoordPointer)
FUNC_SIZE(296,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(297,glTexEnvf)
FUNC_SIZE(297,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(298,glTexEnvfv)
FUNC_SIZE(298,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(299,glTexEnvi)
FUNC_SIZE(299,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(300,glTexEnviv)
FUNC_SIZE(300,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(301,glTexGend)
FUNC_SIZE(301,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdouble) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLdouble); 
ENDLOG
DECODE_FUNC(302,glTexGendv)
FUNC_SIZE(302,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLdoubleP); 
ENDLOG
DECODE_FUNC(303,glTexGenf)
FUNC_SIZE(303,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(304,glTexGenfv)
FUNC_SIZE(304,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(305,glTexGeni)
FUNC_SIZE(305,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(306,glTexGeniv)
FUNC_SIZE(306,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(307,glTexImage1D)
FUNC_SIZE(307,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalformat,GLint); LSSB(&width,GLsizei); LSSB(&border,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP);
ENDLOG
DECODE_FUNC(308,glTexImage2D)
FUNC_SIZE(308,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalformat,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&border,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
DECODE_FUNC(309,glTexParameterf)
FUNC_SIZE(309,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(310,glTexParameterfv)
FUNC_SIZE(310,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(311,glTexParameteri)
FUNC_SIZE(311,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(312,glTexParameteriv)
FUNC_SIZE(312,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(313,glTexSubImage1D)
FUNC_SIZE(313,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&width,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
DECODE_FUNC(314,glTexSubImage2D)
FUNC_SIZE(314,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&yoffset,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
DECODE_FUNC(315,glTranslated)
FUNC_SIZE(315,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG*/
DECODE_FUNC(316,glTranslatef,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat);
glTranslatef(x, y, z);
ENDLOG
/*DECODE_FUNC(317,glVertex2d)
FUNC_SIZE(317,0  + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); 
ENDLOG
DECODE_FUNC(318,glVertex2dv)
FUNC_SIZE(318,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(319,glVertex2f)
FUNC_SIZE(319,0  + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); 
ENDLOG
DECODE_FUNC(320,glVertex2fv)
FUNC_SIZE(320,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(321,glVertex2i)
FUNC_SIZE(321,0  + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); 
ENDLOG
DECODE_FUNC(322,glVertex2iv)
FUNC_SIZE(322,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(323,glVertex2s)
FUNC_SIZE(323,0  + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); 
ENDLOG
DECODE_FUNC(324,glVertex2sv)
FUNC_SIZE(324,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP);
ENDLOG
DECODE_FUNC(325,glVertex3d)
FUNC_SIZE(325,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
DECODE_FUNC(326,glVertex3dv)
FUNC_SIZE(326,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG*/
DECODE_FUNC(327,glVertex3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat);
glVertex3f(x, y, z);
ENDLOG
/*DECODE_FUNC(328,glVertex3fv)
FUNC_SIZE(328,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(329,glVertex3i)
FUNC_SIZE(329,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); 
ENDLOG
DECODE_FUNC(330,glVertex3iv)
FUNC_SIZE(330,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(331,glVertex3s)
FUNC_SIZE(331,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); 
ENDLOG
DECODE_FUNC(332,glVertex3sv)
FUNC_SIZE(332,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(333,glVertex4d)
FUNC_SIZE(333,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); LSSB(&w,GLdouble); 
ENDLOG
DECODE_FUNC(334,glVertex4dv)
FUNC_SIZE(334,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(335,glVertex4f)
FUNC_SIZE(335,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); LSSB(&w,GLfloat); 
ENDLOG
DECODE_FUNC(336,glVertex4fv)
FUNC_SIZE(336,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(337,glVertex4i)
FUNC_SIZE(337,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); LSSB(&w,GLint); 
ENDLOG
DECODE_FUNC(338,glVertex4iv)
FUNC_SIZE(338,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(339,glVertex4s)
FUNC_SIZE(339,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); LSSB(&w,GLshort); 
ENDLOG
DECODE_FUNC(340,glVertex4sv)
FUNC_SIZE(340,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(341,glVertexPointer)
FUNC_SIZE(341,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP);
ENDLOG*/
DECODE_FUNC(342,glViewport,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
GLint x, y;
GLsizei width, height;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei);
glViewport(x, y, width, height);
ENDLOG
/*DECODE_FUNC(343,wglChoosePixelFormat)
FUNC_SIZE(343,0  + sizeof(HDC) + sizeof(CPIXELFORMATDESCRIPTORP) )
LSSB(&a,HDC); LSSB(&b,CPIXELFORMATDESCRIPTORP); 
ENDLOG
DECODE_FUNC(344,wglCopyContext)
FUNC_SIZE(344,0  + sizeof(HGLRC) + sizeof(HGLRC) + sizeof(UINT) )
LSSB(&a,HGLRC); LSSB(&b,HGLRC); LSSB(&c,UINT); 
ENDLOG
DECODE_FUNC(345,wglCreateContext)
FUNC_SIZE(345,0  + sizeof(HDC) )
LSSB(&a,HDC); 
ENDLOG
DECODE_FUNC(346,wglCreateLayerContext)
FUNC_SIZE(346,0  + sizeof(HDC) + sizeof(int) )
LSSB(&a,HDC); LSSB(&b,int); 
ENDLOG
DECODE_FUNC(347,wglDeleteContext)
FUNC_SIZE(347,0  + sizeof(HGLRC) )
LSSB(&a,HGLRC); 
ENDLOG
DECODE_FUNC(348,wglDescribeLayerPlane)
FUNC_SIZE(348,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(UINT) + sizeof(LPLAYERPLANEDESCRIPTOR) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,UINT); LSSB(&e,LPLAYERPLANEDESCRIPTOR); 
ENDLOG
DECODE_FUNC(349,wglDescribePixelFormat)
FUNC_SIZE(349,0  + sizeof(HDC) + sizeof(int) + sizeof(UINT) + sizeof(LPPIXELFORMATDESCRIPTOR) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,UINT); LSSB(&d,LPPIXELFORMATDESCRIPTOR); 
ENDLOG
DECODE_FUNC(350,wglGetCurrentContext)
FUNC_SIZE(350,0  )

ENDLOG
DECODE_FUNC(351,wglGetCurrentDC)
FUNC_SIZE(351,0  )

ENDLOG
DECODE_FUNC(352,wglGetDefaultProcAddress)
FUNC_SIZE(352,0  + sizeof(LPCSTR) )
LSSB(&a,LPCSTR); 
ENDLOG
DECODE_FUNC(353,wglGetLayerPaletteEntries)
FUNC_SIZE(353,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(COLORREFP) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,int); LSSB(&e,COLORREFP); 
ENDLOG
DECODE_FUNC(354,wglGetPixelFormat)
FUNC_SIZE(354,0  + sizeof(HDC) )
LSSB(&a,HDC); 
ENDLOG
DECODE_FUNC(355,wglGetProcAddress)
FUNC_SIZE(355,0  + sizeof(LPCSTR) )
LSSB(&a,LPCSTR); 
ENDLOG
DECODE_FUNC(356,wglMakeCurrent)
FUNC_SIZE(356,0  + sizeof(HDC) + sizeof(HGLRC) )
LSSB(&a,HDC); LSSB(&b,HGLRC); 
ENDLOG
DECODE_FUNC(357,wglRealizeLayerPalette)
FUNC_SIZE(357,0  + sizeof(HDC) + sizeof(int) + sizeof(BOOL) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,BOOL); 
ENDLOG
DECODE_FUNC(358,wglSetLayerPaletteEntries)
FUNC_SIZE(358,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(CCOLORREFP) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,int); LSSB(&e,CCOLORREFP);
ENDLOG
DECODE_FUNC(359,wglSetPixelFormat)
FUNC_SIZE(359,0  + sizeof(HDC) + sizeof(int) + sizeof(CPIXELFORMATDESCRIPTORP) )
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,CPIXELFORMATDESCRIPTORP); 
ENDLOG
DECODE_FUNC(360,wglShareLists)
FUNC_SIZE(360,0  + sizeof(HGLRC) + sizeof(HGLRC) )
LSSB(&a,HGLRC); LSSB(&b,HGLRC); 
ENDLOG
DECODE_FUNC(361,wglSwapBuffers,0  + sizeof(HDC) )
HDC a;
LSSB(&a,HDC);
wglSwapBuffers(a);
ENDLOG
DECODE_FUNC(362,wglSwapLayerBuffers)
FUNC_SIZE(362,0  + sizeof(HDC) + sizeof(UINT) )
LSSB(&a,HDC); LSSB(&b,UINT); 
ENDLOG
DECODE_FUNC(363,wglUseFontBitmapsA)
FUNC_SIZE(363,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); 
ENDLOG
DECODE_FUNC(364,wglUseFontBitmapsW)
FUNC_SIZE(364,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); 
ENDLOG
DECODE_FUNC(365,wglUseFontOutlinesA)
FUNC_SIZE(365,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) )
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); LSSB(&e,FLOAT); LSSB(&f,FLOAT); LSSB(&g,int); LSSB(&h,LPGLYPHMETRICSFLOAT); 
ENDLOG
DECODE_FUNC(366,wglUseFontOutlinesW)
FUNC_SIZE(366,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) )
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); LSSB(&e,FLOAT); LSSB(&f,FLOAT); LSSB(&g,int); LSSB(&h,LPGLYPHMETRICSFLOAT); 
ENDLOG
DECODE_FUNC(367,glActiveTextureARB)
FUNC_SIZE(367,0  + sizeof(GLenum) )
LSSB(&texture,GLenum); 
ENDLOG
DECODE_FUNC(368,glClientActiveTextureARB)
FUNC_SIZE(368,0  + sizeof(GLenum) )
LSSB(&texture,GLenum); 
ENDLOG
DECODE_FUNC(369,glMultiTexCoord1dARB)
FUNC_SIZE(369,0  + sizeof(GLenum) + sizeof(GLdouble) )
LSSB(&target,GLenum); LSSB(&s,GLdouble); 
ENDLOG
DECODE_FUNC(370,glMultiTexCoord1dvARB)
FUNC_SIZE(370,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(371,glMultiTexCoord1fARB)
FUNC_SIZE(371,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&s,GLfloat); 
ENDLOG
DECODE_FUNC(372,glMultiTexCoord1fvARB)
FUNC_SIZE(372,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(373,glMultiTexCoord1iARB)
FUNC_SIZE(373,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&s,GLint); 
ENDLOG
DECODE_FUNC(374,glMultiTexCoord1ivARB)
FUNC_SIZE(374,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(375,glMultiTexCoord1sARB)
FUNC_SIZE(375,0  + sizeof(GLenum) + sizeof(GLshort) )
LSSB(&target,GLenum); LSSB(&s,GLshort);
ENDLOG
DECODE_FUNC(376,glMultiTexCoord1svARB)
FUNC_SIZE(376,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(377,glMultiTexCoord2dARB)
FUNC_SIZE(377,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); 
ENDLOG
DECODE_FUNC(378,glMultiTexCoord2dvARB)
FUNC_SIZE(378,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(379,glMultiTexCoord2fARB)
FUNC_SIZE(379,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); 
ENDLOG
DECODE_FUNC(380,glMultiTexCoord2fvARB)
FUNC_SIZE(380,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(381,glMultiTexCoord2iARB)
FUNC_SIZE(381,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); 
ENDLOG
DECODE_FUNC(382,glMultiTexCoord2ivARB)
FUNC_SIZE(382,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(383,glMultiTexCoord2sARB)
FUNC_SIZE(383,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); 
ENDLOG
DECODE_FUNC(384,glMultiTexCoord2svARB)
FUNC_SIZE(384,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(385,glMultiTexCoord3dARB)
FUNC_SIZE(385,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); 
ENDLOG
DECODE_FUNC(386,glMultiTexCoord3dvARB)
FUNC_SIZE(386,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(387,glMultiTexCoord3fARB)
FUNC_SIZE(387,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); 
ENDLOG
DECODE_FUNC(388,glMultiTexCoord3fvARB)
FUNC_SIZE(388,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(389,glMultiTexCoord3iARB)
FUNC_SIZE(389,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); 
ENDLOG
DECODE_FUNC(390,glMultiTexCoord3ivARB)
FUNC_SIZE(390,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(391,glMultiTexCoord3sARB)
FUNC_SIZE(391,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); 
ENDLOG
DECODE_FUNC(392,glMultiTexCoord3svARB)
FUNC_SIZE(392,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB(&target,GLenum); LSSB(&v,CGLshortP);
ENDLOG
DECODE_FUNC(393,glMultiTexCoord4dARB)
FUNC_SIZE(393,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); LSSB(&q,GLdouble); 
ENDLOG
DECODE_FUNC(394,glMultiTexCoord4dvARB)
FUNC_SIZE(394,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(395,glMultiTexCoord4fARB)
FUNC_SIZE(395,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); LSSB(&q,GLfloat); 
ENDLOG
DECODE_FUNC(396,glMultiTexCoord4fvARB)
FUNC_SIZE(396,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(397,glMultiTexCoord4iARB)
FUNC_SIZE(397,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); LSSB(&q,GLint); 
ENDLOG
DECODE_FUNC(398,glMultiTexCoord4ivARB)
FUNC_SIZE(398,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(399,glMultiTexCoord4sARB)
FUNC_SIZE(399,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); LSSB(&q,GLshort); 
ENDLOG
DECODE_FUNC(400,glMultiTexCoord4svARB)
FUNC_SIZE(400,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(401,glBlendColorEXT)
FUNC_SIZE(401,0  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) )
LSSB(&red,GLclampf); LSSB(&green,GLclampf); LSSB(&blue,GLclampf); LSSB(&alpha,GLclampf); 
ENDLOG
DECODE_FUNC(402,glBlendEquationEXT)
FUNC_SIZE(402,0  + sizeof(GLenum) )
LSSB(&mode,GLenum); 
ENDLOG
DECODE_FUNC(403,glFogCoorddEXT)
FUNC_SIZE(403,0  + sizeof(GLdouble) )
LSSB(&coord,GLdouble); 
ENDLOG
DECODE_FUNC(404,glFogCoorddvEXT)
FUNC_SIZE(404,0  + sizeof(CGLdoubleP) )
LSSB(&coord,CGLdoubleP); 
ENDLOG
DECODE_FUNC(405,glFogCoordfEXT)
FUNC_SIZE(405,0  + sizeof(GLfloat) )
LSSB(&coord,GLfloat); 
ENDLOG
DECODE_FUNC(406,glFogCoordfvEXT)
FUNC_SIZE(406,0  + sizeof(CGLfloatP) )
LSSB(&coord,CGLfloatP); 
ENDLOG
DECODE_FUNC(407,glFogCoordPointerEXT)
FUNC_SIZE(407,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(408,glSecondaryColor3bEXT)
FUNC_SIZE(408,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); 
ENDLOG
DECODE_FUNC(409,glSecondaryColor3bvEXT)
FUNC_SIZE(409,0  + sizeof(CGLbyteP) )
LSSB(&v,CGLbyteP);
ENDLOG
DECODE_FUNC(410,glSecondaryColor3dEXT)
FUNC_SIZE(410,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); 
ENDLOG
DECODE_FUNC(411,glSecondaryColor3dvEXT)
FUNC_SIZE(411,0  + sizeof(CGLdoubleP) )
LSSB(&v,CGLdoubleP); 
ENDLOG
DECODE_FUNC(412,glSecondaryColor3fEXT)
FUNC_SIZE(412,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); 
ENDLOG
DECODE_FUNC(413,glSecondaryColor3fvEXT)
FUNC_SIZE(413,0  + sizeof(CGLfloatP) )
LSSB(&v,CGLfloatP); 
ENDLOG
DECODE_FUNC(414,glSecondaryColor3iEXT)
FUNC_SIZE(414,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); 
ENDLOG
DECODE_FUNC(415,glSecondaryColor3ivEXT)
FUNC_SIZE(415,0  + sizeof(CGLintP) )
LSSB(&v,CGLintP); 
ENDLOG
DECODE_FUNC(416,glSecondaryColor3sEXT)
FUNC_SIZE(416,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); 
ENDLOG
DECODE_FUNC(417,glSecondaryColor3svEXT)
FUNC_SIZE(417,0  + sizeof(CGLshortP) )
LSSB(&v,CGLshortP); 
ENDLOG
DECODE_FUNC(418,glSecondaryColor3ubEXT)
FUNC_SIZE(418,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); 
ENDLOG
DECODE_FUNC(419,glSecondaryColor3ubvEXT)
FUNC_SIZE(419,0  + sizeof(CGLubyteP) )
LSSB(&v,CGLubyteP); 
ENDLOG
DECODE_FUNC(420,glSecondaryColor3uiEXT)
FUNC_SIZE(420,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); 
ENDLOG
DECODE_FUNC(421,glSecondaryColor3uivEXT)
FUNC_SIZE(421,0  + sizeof(CGLuintP) )
LSSB(&v,CGLuintP); 
ENDLOG
DECODE_FUNC(422,glSecondaryColor3usEXT)
FUNC_SIZE(422,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); 
ENDLOG
DECODE_FUNC(423,glSecondaryColor3usvEXT)
FUNC_SIZE(423,0  + sizeof(CGLushortP) )
LSSB(&v,CGLushortP); 
ENDLOG
DECODE_FUNC(424,glSecondaryColorPointerEXT)
FUNC_SIZE(424,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLvoidP) )
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,GLvoidP); 
ENDLOG
DECODE_FUNC(425,glGenFencesNV)
FUNC_SIZE(425,0  + sizeof(GLsizei) + sizeof(GLuintP) )
LSSB(&n,GLsizei); LSSB(&fences,GLuintP); 
ENDLOG
DECODE_FUNC(426,glDeleteFencesNV)
FUNC_SIZE(426,0  + sizeof(GLsizei) + sizeof(CGLuintP) )
LSSB(&n,GLsizei); LSSB(&fences,CGLuintP);
ENDLOG
DECODE_FUNC(427,glSetFenceNV)
FUNC_SIZE(427,0  + sizeof(GLuint) + sizeof(GLenum) )
LSSB(&fence,GLuint); LSSB(&condition,GLenum); 
ENDLOG
DECODE_FUNC(428,glTestFenceNV)
FUNC_SIZE(428,0  + sizeof(GLuint) )
LSSB(&fence,GLuint); 
ENDLOG
DECODE_FUNC(429,glFinishFenceNV)
FUNC_SIZE(429,0  + sizeof(GLuint) )
LSSB(&fence,GLuint); 
ENDLOG
DECODE_FUNC(430,glIsFenceNV)
FUNC_SIZE(430,0  + sizeof(GLuint) )
LSSB(&fence,GLuint); 
ENDLOG
DECODE_FUNC(431,glGetFenceivNV)
FUNC_SIZE(431,0  + sizeof(GLuint) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&fence,GLuint); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(432,glCombinerParameterfvNV)
FUNC_SIZE(432,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
DECODE_FUNC(433,glCombinerParameterfNV)
FUNC_SIZE(433,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
DECODE_FUNC(434,glCombinerParameterivNV)
FUNC_SIZE(434,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
DECODE_FUNC(435,glCombinerParameteriNV)
FUNC_SIZE(435,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
DECODE_FUNC(436,glCombinerInputNV)
FUNC_SIZE(436,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&input,GLenum); LSSB(&mapping,GLenum); LSSB(&componentUsage,GLenum); 
ENDLOG
DECODE_FUNC(437,glCombinerOutputNV)
FUNC_SIZE(437,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&abOutput,GLenum); LSSB(&cdOutput,GLenum); LSSB(&sumOutput,GLenum); LSSB(&scale,GLenum); LSSB(&bias,GLenum); LSSB(&abDotProduct,GLboolean); LSSB(&cdDotProduct,GLboolean); LSSB(&muxSum,GLboolean); 
ENDLOG
DECODE_FUNC(438,glFinalCombinerInputNV)
FUNC_SIZE(438,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
LSSB(&variable,GLenum); LSSB(&input,GLenum); LSSB(&mapping,GLenum); LSSB(&componentUsage,GLenum); 
ENDLOG
DECODE_FUNC(439,glGetCombinerInputParameterfvNV)
FUNC_SIZE(439,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(440,glGetCombinerInputParameterivNV)
FUNC_SIZE(440,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(441,glGetCombinerOutputParameterfvNV)
FUNC_SIZE(441,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
DECODE_FUNC(442,glGetCombinerOutputParameterivNV)
FUNC_SIZE(442,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(443,glGetFinalCombinerInputParameterfvNV)
FUNC_SIZE(443,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP);
ENDLOG
DECODE_FUNC(444,glGetFinalCombinerInputParameterivNV)
FUNC_SIZE(444,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
DECODE_FUNC(445,glFlushVertexArrayRangeNV)
FUNC_SIZE(445,0 )

ENDLOG
DECODE_FUNC(446,glVertexArrayRangeNV)
FUNC_SIZE(446,0  + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB(&size,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
DECODE_FUNC(447,wglAllocateMemoryNV)
FUNC_SIZE(447,0  + sizeof(int) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB(&size,int); LSSB(&readfreq,GLfloat); LSSB(&writefreq,GLfloat); LSSB(&priority,GLfloat); 
ENDLOG
DECODE_FUNC(448,wglFreeMemoryNV)
FUNC_SIZE(448,0  + sizeof(GLvoidP) )
LSSB(&pointer,GLvoidP); 
ENDLOG
DECODE_FUNC(449,wglSwapIntervalEXT)
FUNC_SIZE(449,0  + sizeof(int) )
LSSB(&a,int); 
ENDLOG
DECODE_FUNC(450,wglGetSwapIntervalEXT)
FUNC_SIZE(450,0  )

ENDLOG */
