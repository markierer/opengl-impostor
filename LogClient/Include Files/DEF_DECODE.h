// DEFINES OpenGL32

// GLCALLCONV void  glAccum (GLenum op, GLfloat value);
DEFINE_FUNC(0, glAccum, GLCALLCONV, void, (GLenum op, GLfloat value))

// GLCALLCONV void  glAlphaFunc (GLenum func, GLclampf ref);
DEFINE_FUNC(1, glAlphaFunc, GLCALLCONV, void, (GLenum func, GLclampf ref))

// GLCALLCONV GLboolean  glAreTexturesResident (GLsizei n, CGLuintP textures, GLbooleanP residences);
DEFINE_FUNC(2, glAreTexturesResident, GLCALLCONV, GLboolean, (GLsizei n, CGLuintP textures, GLbooleanP residences))

// GLCALLCONV void  glArrayElement (GLint i);
DEFINE_FUNC(3, glArrayElement, GLCALLCONV, void, (GLint i))

// GLCALLCONV void  glBegin (GLenum mode);
DEFINE_FUNC(4, glBegin, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glBindTexture (GLenum target, GLuint texture);
DEFINE_FUNC(5, glBindTexture, GLCALLCONV, void, (GLenum target, GLuint texture))

// GLCALLCONV void  glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, CGLubyteP bitmap);
DEFINE_FUNC(6, glBitmap, GLCALLCONV, void, (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, CGLubyteP bitmap))

// GLCALLCONV void  glBlendFunc (GLenum sfactor, GLenum dfactor);
DEFINE_FUNC(7, glBlendFunc, GLCALLCONV, void, (GLenum sfactor, GLenum dfactor))

// GLCALLCONV void  glCallList (GLuint list);
DEFINE_FUNC(8, glCallList, GLCALLCONV, void, (GLuint list))

// GLCALLCONV void  glCallLists (GLsizei n, GLenum type, CGLvoidP lists);
DEFINE_FUNC(9, glCallLists, GLCALLCONV, void, (GLsizei n, GLenum type, CGLvoidP lists))

// GLCALLCONV void  glClear (GLbitfield mask);
DEFINE_FUNC(10, glClear, GLCALLCONV, void, (GLbitfield mask))

// GLCALLCONV void  glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
DEFINE_FUNC(11, glClearAccum, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha))

// GLCALLCONV void  glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
DEFINE_FUNC(12, glClearColor, GLCALLCONV, void, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))

// GLCALLCONV void  glClearDepth (GLclampd depth);
DEFINE_FUNC(13, glClearDepth, GLCALLCONV, void, (GLclampd depth))

// GLCALLCONV void  glClearIndex (GLfloat c);
DEFINE_FUNC(14, glClearIndex, GLCALLCONV, void, (GLfloat c))

// GLCALLCONV void  glClearStencil (GLint s);
DEFINE_FUNC(15, glClearStencil, GLCALLCONV, void, (GLint s))

// GLCALLCONV void  glClipPlane (GLenum plane, CGLdoubleP equation);
DEFINE_FUNC(16, glClipPlane, GLCALLCONV, void, (GLenum plane, CGLdoubleP equation))

// GLCALLCONV void  glColor3b (GLbyte red, GLbyte green, GLbyte blue);
DEFINE_FUNC(17, glColor3b, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue))

// GLCALLCONV void  glColor3bv (CGLbyteP v);
DEFINE_FUNC(18, glColor3bv, GLCALLCONV, void, (CGLbyteP v))

// GLCALLCONV void  glColor3d (GLdouble red, GLdouble green, GLdouble blue);
DEFINE_FUNC(19, glColor3d, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue))

// GLCALLCONV void  glColor3dv (CGLdoubleP v);
DEFINE_FUNC(20, glColor3dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glColor3f (GLfloat red, GLfloat green, GLfloat blue);
DEFINE_FUNC(21, glColor3f, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue))

// GLCALLCONV void  glColor3fv (CGLfloatP v);
DEFINE_FUNC(22, glColor3fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glColor3i (GLint red, GLint green, GLint blue);
DEFINE_FUNC(23, glColor3i, GLCALLCONV, void, (GLint red, GLint green, GLint blue))

// GLCALLCONV void  glColor3iv (CGLintP v);
DEFINE_FUNC(24, glColor3iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glColor3s (GLshort red, GLshort green, GLshort blue);
DEFINE_FUNC(25, glColor3s, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue))

// GLCALLCONV void  glColor3sv (CGLshortP v);
DEFINE_FUNC(26, glColor3sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
DEFINE_FUNC(27, glColor3ub, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue))

// GLCALLCONV void  glColor3ubv (CGLubyteP v);
DEFINE_FUNC(28, glColor3ubv, GLCALLCONV, void, (CGLubyteP v))

// GLCALLCONV void  glColor3ui (GLuint red, GLuint green, GLuint blue);
DEFINE_FUNC(29, glColor3ui, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue))

// GLCALLCONV void  glColor3uiv (CGLuintP v);
DEFINE_FUNC(30, glColor3uiv, GLCALLCONV, void, (CGLuintP v))

// GLCALLCONV void  glColor3us (GLushort red, GLushort green, GLushort blue);
DEFINE_FUNC(31, glColor3us, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue))

// GLCALLCONV void  glColor3usv (CGLushortP v);
DEFINE_FUNC(32, glColor3usv, GLCALLCONV, void, (CGLushortP v))

// GLCALLCONV void  glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
DEFINE_FUNC(33, glColor4b, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha))

// GLCALLCONV void  glColor4bv (CGLbyteP v);
DEFINE_FUNC(34, glColor4bv, GLCALLCONV, void, (CGLbyteP v))

// GLCALLCONV void  glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
DEFINE_FUNC(35, glColor4d, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha))

// GLCALLCONV void  glColor4dv (CGLdoubleP v);
DEFINE_FUNC(36, glColor4dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
DEFINE_FUNC(37, glColor4f, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha))

// GLCALLCONV void  glColor4fv (CGLfloatP v);
DEFINE_FUNC(38, glColor4fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
DEFINE_FUNC(39, glColor4i, GLCALLCONV, void, (GLint red, GLint green, GLint blue, GLint alpha))

// GLCALLCONV void  glColor4iv (CGLintP v);
DEFINE_FUNC(40, glColor4iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
DEFINE_FUNC(41, glColor4s, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue, GLshort alpha))

// GLCALLCONV void  glColor4sv (CGLshortP v);
DEFINE_FUNC(42, glColor4sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
DEFINE_FUNC(43, glColor4ub, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha))

// GLCALLCONV void  glColor4ubv (CGLubyteP v);
DEFINE_FUNC(44, glColor4ubv, GLCALLCONV, void, (CGLubyteP v))

// GLCALLCONV void  glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
DEFINE_FUNC(45, glColor4ui, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue, GLuint alpha))

// GLCALLCONV void  glColor4uiv (CGLuintP v);
DEFINE_FUNC(46, glColor4uiv, GLCALLCONV, void, (CGLuintP v))

// GLCALLCONV void  glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
DEFINE_FUNC(47, glColor4us, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue, GLushort alpha))

// GLCALLCONV void  glColor4usv (CGLushortP v);
DEFINE_FUNC(48, glColor4usv, GLCALLCONV, void, (CGLushortP v))

// GLCALLCONV void  glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
DEFINE_FUNC(49, glColorMask, GLCALLCONV, void, (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha))

// GLCALLCONV void  glColorMaterial (GLenum face, GLenum mode);
DEFINE_FUNC(50, glColorMaterial, GLCALLCONV, void, (GLenum face, GLenum mode))

// GLCALLCONV void  glColorPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(51, glColorPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
DEFINE_FUNC(52, glCopyPixels, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type))

// GLCALLCONV void  glCopyTexImage1D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
DEFINE_FUNC(53, glCopyTexImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border))

// GLCALLCONV void  glCopyTexImage2D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
DEFINE_FUNC(54, glCopyTexImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border))

// GLCALLCONV void  glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
DEFINE_FUNC(55, glCopyTexSubImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width))

// GLCALLCONV void  glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(56, glCopyTexSubImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height))

// GLCALLCONV void  glCullFace (GLenum mode);
DEFINE_FUNC(57, glCullFace, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glDeleteLists (GLuint list, GLsizei range);
DEFINE_FUNC(58, glDeleteLists, GLCALLCONV, void, (GLuint list, GLsizei range))


// GLCALLCONV void  glDeleteTextures (GLsizei n, CGLuintP textures);
DEFINE_FUNC(59, glDeleteTextures, GLCALLCONV, void, (GLsizei n, CGLuintP textures))

// GLCALLCONV void  glDepthFunc (GLenum func);
DEFINE_FUNC(60, glDepthFunc, GLCALLCONV, void, (GLenum func))

// GLCALLCONV void  glDepthMask (GLboolean flag);
DEFINE_FUNC(61, glDepthMask, GLCALLCONV, void, (GLboolean flag))

// GLCALLCONV void  glDepthRange (GLclampd zNear, GLclampd zFar);
DEFINE_FUNC(62, glDepthRange, GLCALLCONV, void, (GLclampd zNear, GLclampd zFar))

// GLCALLCONV void  glDisable (GLenum cap);
DEFINE_FUNC(63, glDisable, GLCALLCONV, void, (GLenum cap))

// GLCALLCONV void  glDisableClientState (GLenum array);
DEFINE_FUNC(64, glDisableClientState, GLCALLCONV, void, (GLenum array))

// GLCALLCONV void  glDrawArrays (GLenum mode, GLint first, GLsizei count);
DEFINE_FUNC(65, glDrawArrays, GLCALLCONV, void, (GLenum mode, GLint first, GLsizei count))

// GLCALLCONV void  glDrawBuffer (GLenum mode);
DEFINE_FUNC(66, glDrawBuffer, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glDrawElements (GLenum mode, GLsizei count, GLenum type, CGLvoidP indices);
DEFINE_FUNC(67, glDrawElements, GLCALLCONV, void, (GLenum mode, GLsizei count, GLenum type, CGLvoidP indices))

// GLCALLCONV void  glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(68, glDrawPixels, GLCALLCONV, void, (GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels))

// GLCALLCONV void  glEdgeFlag (GLboolean flag);
DEFINE_FUNC(69, glEdgeFlag, GLCALLCONV, void, (GLboolean flag))

// GLCALLCONV void  glEdgeFlagPointer (GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(70, glEdgeFlagPointer, GLCALLCONV, void, (GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glEdgeFlagv (CGLbooleanP flag);
DEFINE_FUNC(71, glEdgeFlagv, GLCALLCONV, void, (CGLbooleanP flag))

// GLCALLCONV void  glEnable (GLenum cap);
DEFINE_FUNC(72, glEnable, GLCALLCONV, void, (GLenum cap))

// GLCALLCONV void  glEnableClientState (GLenum array);
DEFINE_FUNC(73, glEnableClientState, GLCALLCONV, void, (GLenum array))

// GLCALLCONV void  glEnd ();
DEFINE_FUNC(74, glEnd, GLCALLCONV, void, ())

// GLCALLCONV void  glEndList ();
DEFINE_FUNC(75, glEndList, GLCALLCONV, void, ())

// GLCALLCONV void  glEvalCoord1d (GLdouble u);
DEFINE_FUNC(76, glEvalCoord1d, GLCALLCONV, void, (GLdouble u))

// GLCALLCONV void  glEvalCoord1dv (CGLdoubleP u);
DEFINE_FUNC(77, glEvalCoord1dv, GLCALLCONV, void, (CGLdoubleP u))

// GLCALLCONV void  glEvalCoord1f (GLfloat u);
DEFINE_FUNC(78, glEvalCoord1f, GLCALLCONV, void, (GLfloat u))

// GLCALLCONV void  glEvalCoord1fv (CGLfloatP u);
DEFINE_FUNC(79, glEvalCoord1fv, GLCALLCONV, void, (CGLfloatP u))

// GLCALLCONV void  glEvalCoord2d (GLdouble u, GLdouble v);
DEFINE_FUNC(80, glEvalCoord2d, GLCALLCONV, void, (GLdouble u, GLdouble v))

// GLCALLCONV void  glEvalCoord2dv (CGLdoubleP u);
DEFINE_FUNC(81, glEvalCoord2dv, GLCALLCONV, void, (CGLdoubleP u))

// GLCALLCONV void  glEvalCoord2f (GLfloat u, GLfloat v);
DEFINE_FUNC(82, glEvalCoord2f, GLCALLCONV, void, (GLfloat u, GLfloat v))

// GLCALLCONV void  glEvalCoord2fv (CGLfloatP u);
DEFINE_FUNC(83, glEvalCoord2fv, GLCALLCONV, void, (CGLfloatP u))

// GLCALLCONV void  glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
DEFINE_FUNC(84, glEvalMesh1, GLCALLCONV, void, (GLenum mode, GLint i1, GLint i2))

// GLCALLCONV void  glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
DEFINE_FUNC(85, glEvalMesh2, GLCALLCONV, void, (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2))

// GLCALLCONV void  glEvalPoint1 (GLint i);
DEFINE_FUNC(86, glEvalPoint1, GLCALLCONV, void, (GLint i))

// GLCALLCONV void  glEvalPoint2 (GLint i, GLint j);
DEFINE_FUNC(87, glEvalPoint2, GLCALLCONV, void, (GLint i, GLint j))

// GLCALLCONV void  glFeedbackBuffer (GLsizei size, GLenum type, GLfloatP buffer);
DEFINE_FUNC(88, glFeedbackBuffer, GLCALLCONV, void, (GLsizei size, GLenum type, GLfloatP buffer))

// GLCALLCONV void  glFinish ();
DEFINE_FUNC(89, glFinish, GLCALLCONV, void, ())

// GLCALLCONV void  glFlush ();
DEFINE_FUNC(90, glFlush, GLCALLCONV, void, ())

// GLCALLCONV void  glFogf (GLenum pname, GLfloat param);
DEFINE_FUNC(91, glFogf, GLCALLCONV, void, (GLenum pname, GLfloat param))

// GLCALLCONV void  glFogfv (GLenum pname, CGLfloatP params);
DEFINE_FUNC(92, glFogfv, GLCALLCONV, void, (GLenum pname, CGLfloatP params))

// GLCALLCONV void  glFogi (GLenum pname, GLint param);
DEFINE_FUNC(93, glFogi, GLCALLCONV, void, (GLenum pname, GLint param))

// GLCALLCONV void  glFogiv (GLenum pname, CGLintP params);
DEFINE_FUNC(94, glFogiv, GLCALLCONV, void, (GLenum pname, CGLintP params))

// GLCALLCONV void  glFrontFace (GLenum mode);
DEFINE_FUNC(95, glFrontFace, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
DEFINE_FUNC(96, glFrustum, GLCALLCONV, void, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar))

// GLCALLCONV GLuint  glGenLists (GLsizei range);
DEFINE_FUNC(97, glGenLists, GLCALLCONV, GLuint, (GLsizei range))

// GLCALLCONV void  glGenTextures (GLsizei n, GLuintP textures);
DEFINE_FUNC(98, glGenTextures, GLCALLCONV, void, (GLsizei n, GLuintP textures))

// GLCALLCONV void GlmfBeginGlsBlock(DWORD dwArg1);
DEFINE_FUNC(99, GlmfBeginGlsBlock, GLCALLCONV, void, (DWORD dwArg1))

// GLCALLCONV void GlmfEndGlsBlock(DWORD dwArg1);
DEFINE_FUNC(100, GlmfEndGlsBlock, GLCALLCONV, void, (DWORD dwArg1))

// GLCALLCONV void GlmfCloseMetaFile(DWORD dwArg1);
DEFINE_FUNC(101, GlmfCloseMetaFile, GLCALLCONV, void, (DWORD dwArg1))

// GLCALLCONV void GlmfEndPlayback(DWORD dwArg1);
DEFINE_FUNC(102, GlmfEndPlayback, GLCALLCONV, void, (DWORD dwArg1))

// GLCALLCONV void GlmfInitPlayback(DWORD dwArg1, DWORD dwArg2, DWORD dwArg3);
DEFINE_FUNC(103, GlmfInitPlayback, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2, DWORD dwArg3))

// GLCALLCONV void GlmfPlayGlsRecord(DWORD dwArg1, DWORD dwArg2, DWORD dwArg3,DWORD dwArg4);
DEFINE_FUNC(104, GlmfPlayGlsRecord, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2, DWORD dwArg3,DWORD dwArg4))

// GLCALLCONV void glDebugEntry(DWORD dwArg1, DWORD dwArg2);
DEFINE_FUNC(105, glDebugEntry, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2))

// GLCALLCONV void  glGetBooleanv (GLenum pname, GLbooleanP params);
DEFINE_FUNC(106, glGetBooleanv, GLCALLCONV, void, (GLenum pname, GLbooleanP params))

// GLCALLCONV void  glGetClipPlane (GLenum plane, GLdoubleP equation);
DEFINE_FUNC(107, glGetClipPlane, GLCALLCONV, void, (GLenum plane, GLdoubleP equation))

// GLCALLCONV void  glGetDoublev (GLenum pname, GLdoubleP params);
DEFINE_FUNC(108, glGetDoublev, GLCALLCONV, void, (GLenum pname, GLdoubleP params))

// GLCALLCONV GLenum  glGetError ();
DEFINE_FUNC(109, glGetError, GLCALLCONV, GLenum, ())

// GLCALLCONV void  glGetFloatv (GLenum pname, GLfloatP params);
DEFINE_FUNC(110, glGetFloatv, GLCALLCONV, void, (GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetIntegerv (GLenum pname, GLintP params);
DEFINE_FUNC(111, glGetIntegerv, GLCALLCONV, void, (GLenum pname, GLintP params))

// GLCALLCONV void  glGetLightfv (GLenum light, GLenum pname, GLfloatP params);
DEFINE_FUNC(112, glGetLightfv, GLCALLCONV, void, (GLenum light, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetLightiv (GLenum light, GLenum pname, GLintP params);
DEFINE_FUNC(113, glGetLightiv, GLCALLCONV, void, (GLenum light, GLenum pname, GLintP params))

// GLCALLCONV void  glGetMapdv (GLenum target, GLenum query, GLdoubleP v);
DEFINE_FUNC(114, glGetMapdv, GLCALLCONV, void, (GLenum target, GLenum query, GLdoubleP v))

// GLCALLCONV void  glGetMapfv (GLenum target, GLenum query, GLfloatP v);
DEFINE_FUNC(115, glGetMapfv, GLCALLCONV, void, (GLenum target, GLenum query, GLfloatP v))

// GLCALLCONV void  glGetMapiv (GLenum target, GLenum query, GLintP v);
DEFINE_FUNC(116, glGetMapiv, GLCALLCONV, void, (GLenum target, GLenum query, GLintP v))

// GLCALLCONV void  glGetMaterialfv (GLenum face, GLenum pname, GLfloatP params);
DEFINE_FUNC(117, glGetMaterialfv, GLCALLCONV, void, (GLenum face, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetMaterialiv (GLenum face, GLenum pname, GLintP params);
DEFINE_FUNC(118, glGetMaterialiv, GLCALLCONV, void, (GLenum face, GLenum pname, GLintP params))

// GLCALLCONV void  glGetPixelMapfv (GLenum map, GLfloatP values);
DEFINE_FUNC(119, glGetPixelMapfv, GLCALLCONV, void, (GLenum map, GLfloatP values))

// GLCALLCONV void  glGetPixelMapuiv (GLenum map, GLuintP values);
DEFINE_FUNC(120, glGetPixelMapuiv, GLCALLCONV, void, (GLenum map, GLuintP values))

// GLCALLCONV void  glGetPixelMapusv (GLenum map, GLushortP values);
DEFINE_FUNC(121, glGetPixelMapusv, GLCALLCONV, void, (GLenum map, GLushortP values))

// GLCALLCONV void  glGetPointerv (GLenum pname, GLvoidPP params);
DEFINE_FUNC(122, glGetPointerv, GLCALLCONV, void, (GLenum pname, GLvoidPP params))

// GLCALLCONV void  glGetPolygonStipple (GLubyteP mask);
DEFINE_FUNC(123, glGetPolygonStipple, GLCALLCONV, void, (GLubyteP mask))

// GLCALLCONV CGLubyteP   glGetString (GLenum name);
DEFINE_FUNC(124, glGetString, GLCALLCONV, CGLubyteP, (GLenum name))

// GLCALLCONV void  glGetTexEnvfv (GLenum target, GLenum pname, GLfloatP params);
DEFINE_FUNC(125, glGetTexEnvfv, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetTexEnviv (GLenum target, GLenum pname, GLintP params);
DEFINE_FUNC(126, glGetTexEnviv, GLCALLCONV, void, (GLenum target, GLenum pname, GLintP params))

// GLCALLCONV void  glGetTexGendv (GLenum coord, GLenum pname, GLdoubleP params);
DEFINE_FUNC(127, glGetTexGendv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLdoubleP params))

// GLCALLCONV void  glGetTexGenfv (GLenum coord, GLenum pname, GLfloatP params);
DEFINE_FUNC(128, glGetTexGenfv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetTexGeniv (GLenum coord, GLenum pname, GLintP params);
DEFINE_FUNC(129, glGetTexGeniv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLintP params))

// GLCALLCONV void  glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoidP pixels);
DEFINE_FUNC(130, glGetTexImage, GLCALLCONV, void, (GLenum target, GLint level, GLenum format, GLenum type, GLvoidP pixels))

// GLCALLCONV void  glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloatP params);
DEFINE_FUNC(131, glGetTexLevelParameterfv, GLCALLCONV, void, (GLenum target, GLint level, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLintP params);
DEFINE_FUNC(132, glGetTexLevelParameteriv, GLCALLCONV, void, (GLenum target, GLint level, GLenum pname, GLintP params))

// GLCALLCONV void  glGetTexParameterfv (GLenum target, GLenum pname, GLfloatP params);
DEFINE_FUNC(133, glGetTexParameterfv, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloatP params))

// GLCALLCONV void  glGetTexParameteriv (GLenum target, GLenum pname, GLintP params);
DEFINE_FUNC(134, glGetTexParameteriv, GLCALLCONV, void, (GLenum target, GLenum pname, GLintP params))

// GLCALLCONV void  glHint (GLenum target, GLenum mode);
DEFINE_FUNC(135, glHint, GLCALLCONV, void, (GLenum target, GLenum mode))

// GLCALLCONV void  glIndexMask (GLuint mask);
DEFINE_FUNC(136, glIndexMask, GLCALLCONV, void, (GLuint mask))

// GLCALLCONV void  glIndexPointer (GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(137, glIndexPointer, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glIndexd (GLdouble c);
DEFINE_FUNC(138, glIndexd, GLCALLCONV, void, (GLdouble c))

// GLCALLCONV void  glIndexdv (CGLdoubleP c);
DEFINE_FUNC(139, glIndexdv, GLCALLCONV, void, (CGLdoubleP c))

// GLCALLCONV void  glIndexf (GLfloat c);
DEFINE_FUNC(140, glIndexf, GLCALLCONV, void, (GLfloat c))

// GLCALLCONV void  glIndexfv (CGLfloatP c);
DEFINE_FUNC(141, glIndexfv, GLCALLCONV, void, (CGLfloatP c))

// GLCALLCONV void  glIndexi (GLint c);
DEFINE_FUNC(142, glIndexi, GLCALLCONV, void, (GLint c))

// GLCALLCONV void  glIndexiv (CGLintP c);
DEFINE_FUNC(143, glIndexiv, GLCALLCONV, void, (CGLintP c))

// GLCALLCONV void  glIndexs (GLshort c);
DEFINE_FUNC(144, glIndexs, GLCALLCONV, void, (GLshort c))

// GLCALLCONV void  glIndexsv (CGLshortP c);
DEFINE_FUNC(145, glIndexsv, GLCALLCONV, void, (CGLshortP c))

// GLCALLCONV void  glIndexub (GLubyte c);
DEFINE_FUNC(146, glIndexub, GLCALLCONV, void, (GLubyte c))

// GLCALLCONV void  glIndexubv (CGLubyteP c);
DEFINE_FUNC(147, glIndexubv, GLCALLCONV, void, (CGLubyteP c))

// GLCALLCONV void  glInitNames ();
DEFINE_FUNC(148, glInitNames, GLCALLCONV, void, ())

// GLCALLCONV void  glInterleavedArrays (GLenum format, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(149, glInterleavedArrays, GLCALLCONV, void, (GLenum format, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV GLboolean  glIsEnabled (GLenum cap);
DEFINE_FUNC(150, glIsEnabled, GLCALLCONV, GLboolean, (GLenum cap))

// GLCALLCONV GLboolean  glIsList (GLuint list);
DEFINE_FUNC(151, glIsList, GLCALLCONV, GLboolean, (GLuint list))

// GLCALLCONV GLboolean  glIsTexture (GLuint texture);
DEFINE_FUNC(152, glIsTexture, GLCALLCONV, GLboolean, (GLuint texture))

// GLCALLCONV void  glLightModelf (GLenum pname, GLfloat param);
DEFINE_FUNC(153, glLightModelf, GLCALLCONV, void, (GLenum pname, GLfloat param))

// GLCALLCONV void  glLightModelfv (GLenum pname, CGLfloatP params);
DEFINE_FUNC(154, glLightModelfv, GLCALLCONV, void, (GLenum pname, CGLfloatP params))

// GLCALLCONV void  glLightModeli (GLenum pname, GLint param);
DEFINE_FUNC(155, glLightModeli, GLCALLCONV, void, (GLenum pname, GLint param))

// GLCALLCONV void  glLightModeliv (GLenum pname, CGLintP params);
DEFINE_FUNC(156, glLightModeliv, GLCALLCONV, void, (GLenum pname, CGLintP params))

// GLCALLCONV void  glLightf (GLenum light, GLenum pname, GLfloat param);
DEFINE_FUNC(157, glLightf, GLCALLCONV, void, (GLenum light, GLenum pname, GLfloat param))

// GLCALLCONV void  glLightfv (GLenum light, GLenum pname, CGLfloatP params);
DEFINE_FUNC(158, glLightfv, GLCALLCONV, void, (GLenum light, GLenum pname, CGLfloatP params))

// GLCALLCONV void  glLighti (GLenum light, GLenum pname, GLint param);
DEFINE_FUNC(159, glLighti, GLCALLCONV, void, (GLenum light, GLenum pname, GLint param))

// GLCALLCONV void  glLightiv (GLenum light, GLenum pname, CGLintP params);
DEFINE_FUNC(160, glLightiv, GLCALLCONV, void, (GLenum light, GLenum pname, CGLintP params))

// GLCALLCONV void  glLineStipple (GLint factor, GLushort pattern);
DEFINE_FUNC(161, glLineStipple, GLCALLCONV, void, (GLint factor, GLushort pattern))

// GLCALLCONV void  glLineWidth (GLfloat width);
DEFINE_FUNC(162, glLineWidth, GLCALLCONV, void, (GLfloat width))

// GLCALLCONV void  glListBase (GLuint base);
DEFINE_FUNC(163, glListBase, GLCALLCONV, void, (GLuint base))

// GLCALLCONV void  glLoadIdentity ();
DEFINE_FUNC(164, glLoadIdentity, GLCALLCONV, void, ())

// GLCALLCONV void  glLoadMatrixd (CGLdoubleP m);
DEFINE_FUNC(165, glLoadMatrixd, GLCALLCONV, void, (CGLdoubleP m))

// GLCALLCONV void  glLoadMatrixf (CGLfloatP m);
DEFINE_FUNC(166, glLoadMatrixf, GLCALLCONV, void, (CGLfloatP m))

// GLCALLCONV void  glLoadName (GLuint name);
DEFINE_FUNC(167, glLoadName, GLCALLCONV, void, (GLuint name))

// GLCALLCONV void  glLogicOp (GLenum opcode);
DEFINE_FUNC(168, glLogicOp, GLCALLCONV, void, (GLenum opcode))

// GLCALLCONV void  glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, CGLdoubleP points);
DEFINE_FUNC(169, glMap1d, GLCALLCONV, void, (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, CGLdoubleP points))

// GLCALLCONV void  glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, CGLfloatP points);
DEFINE_FUNC(170, glMap1f, GLCALLCONV, void, (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, CGLfloatP points))

// GLCALLCONV void  glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, CGLdoubleP points);
DEFINE_FUNC(171, glMap2d, GLCALLCONV, void, (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, CGLdoubleP points))

// GLCALLCONV void  glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, CGLfloatP points);
DEFINE_FUNC(172, glMap2f, GLCALLCONV, void, (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, CGLfloatP points))

// GLCALLCONV void  glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
DEFINE_FUNC(173, glMapGrid1d, GLCALLCONV, void, (GLint un, GLdouble u1, GLdouble u2))

// GLCALLCONV void  glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
DEFINE_FUNC(174, glMapGrid1f, GLCALLCONV, void, (GLint un, GLfloat u1, GLfloat u2))

// GLCALLCONV void  glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
DEFINE_FUNC(175, glMapGrid2d, GLCALLCONV, void, (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2))

// GLCALLCONV void  glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
DEFINE_FUNC(176, glMapGrid2f, GLCALLCONV, void, (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2))

// GLCALLCONV void  glMaterialf (GLenum face, GLenum pname, GLfloat param);
DEFINE_FUNC(177, glMaterialf, GLCALLCONV, void, (GLenum face, GLenum pname, GLfloat param))

// GLCALLCONV void  glMaterialfv (GLenum face, GLenum pname, CGLfloatP params);
DEFINE_FUNC(178, glMaterialfv, GLCALLCONV, void, (GLenum face, GLenum pname, CGLfloatP params))

// GLCALLCONV void  glMateriali (GLenum face, GLenum pname, GLint param);
DEFINE_FUNC(179, glMateriali, GLCALLCONV, void, (GLenum face, GLenum pname, GLint param))

// GLCALLCONV void  glMaterialiv (GLenum face, GLenum pname, CGLintP params);
DEFINE_FUNC(180, glMaterialiv, GLCALLCONV, void, (GLenum face, GLenum pname, CGLintP params))

// GLCALLCONV void  glMatrixMode (GLenum mode);
DEFINE_FUNC(181, glMatrixMode, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glMultMatrixd (CGLdoubleP m);
DEFINE_FUNC(182, glMultMatrixd, GLCALLCONV, void, (CGLdoubleP m))

// GLCALLCONV void  glMultMatrixf (CGLfloatP m);
DEFINE_FUNC(183, glMultMatrixf, GLCALLCONV, void, (CGLfloatP m))

// GLCALLCONV void  glNewList (GLuint list, GLenum mode);
DEFINE_FUNC(184, glNewList, GLCALLCONV, void, (GLuint list, GLenum mode))

// GLCALLCONV void  glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
DEFINE_FUNC(185, glNormal3b, GLCALLCONV, void, (GLbyte nx, GLbyte ny, GLbyte nz))

// GLCALLCONV void  glNormal3bv (CGLbyteP v);
DEFINE_FUNC(186, glNormal3bv, GLCALLCONV, void, (CGLbyteP v))

// GLCALLCONV void  glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
DEFINE_FUNC(187, glNormal3d, GLCALLCONV, void, (GLdouble nx, GLdouble ny, GLdouble nz))

// GLCALLCONV void  glNormal3dv (CGLdoubleP v);
DEFINE_FUNC(188, glNormal3dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
DEFINE_FUNC(189, glNormal3f, GLCALLCONV, void, (GLfloat nx, GLfloat ny, GLfloat nz))

// GLCALLCONV void  glNormal3fv (CGLfloatP v);
DEFINE_FUNC(190, glNormal3fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glNormal3i (GLint nx, GLint ny, GLint nz);
DEFINE_FUNC(191, glNormal3i, GLCALLCONV, void, (GLint nx, GLint ny, GLint nz))

// GLCALLCONV void  glNormal3iv (CGLintP v);
DEFINE_FUNC(192, glNormal3iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glNormal3s (GLshort nx, GLshort ny, GLshort nz);
DEFINE_FUNC(193, glNormal3s, GLCALLCONV, void, (GLshort nx, GLshort ny, GLshort nz))

// GLCALLCONV void  glNormal3sv (CGLshortP v);
DEFINE_FUNC(194, glNormal3sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glNormalPointer (GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(195, glNormalPointer, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
DEFINE_FUNC(196, glOrtho, GLCALLCONV, void, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar))

// GLCALLCONV void  glPassThrough (GLfloat token);
DEFINE_FUNC(197, glPassThrough, GLCALLCONV, void, (GLfloat token))

// GLCALLCONV void  glPixelMapfv (GLenum map, GLsizei mapsize, CGLfloatP values);
DEFINE_FUNC(198, glPixelMapfv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLfloatP values))

// GLCALLCONV void  glPixelMapuiv (GLenum map, GLsizei mapsize, CGLuintP values);
DEFINE_FUNC(199, glPixelMapuiv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLuintP values))

// GLCALLCONV void  glPixelMapusv (GLenum map, GLsizei mapsize, CGLushortP values);
DEFINE_FUNC(200, glPixelMapusv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLushortP values))

// GLCALLCONV void  glPixelStoref (GLenum pname, GLfloat param);
DEFINE_FUNC(201, glPixelStoref, GLCALLCONV, void, (GLenum pname, GLfloat param))

// GLCALLCONV void  glPixelStorei (GLenum pname, GLint param);
DEFINE_FUNC(202, glPixelStorei, GLCALLCONV, void, (GLenum pname, GLint param))

// GLCALLCONV void  glPixelTransferf (GLenum pname, GLfloat param);
DEFINE_FUNC(203, glPixelTransferf, GLCALLCONV, void, (GLenum pname, GLfloat param))

// GLCALLCONV void  glPixelTransferi (GLenum pname, GLint param);
DEFINE_FUNC(204, glPixelTransferi, GLCALLCONV, void, (GLenum pname, GLint param))

// GLCALLCONV void  glPixelZoom (GLfloat xfactor, GLfloat yfactor);
DEFINE_FUNC(205, glPixelZoom, GLCALLCONV, void, (GLfloat xfactor, GLfloat yfactor))

// GLCALLCONV void  glPointSize (GLfloat size);
DEFINE_FUNC(206, glPointSize, GLCALLCONV, void, (GLfloat size))

// GLCALLCONV void  glPolygonMode (GLenum face, GLenum mode);
DEFINE_FUNC(207, glPolygonMode, GLCALLCONV, void, (GLenum face, GLenum mode))

// GLCALLCONV void  glPolygonOffset (GLfloat factor, GLfloat units);
DEFINE_FUNC(208, glPolygonOffset, GLCALLCONV, void, (GLfloat factor, GLfloat units))

// GLCALLCONV void  glPolygonStipple (CGLubyteP mask);
DEFINE_FUNC(209, glPolygonStipple, GLCALLCONV, void, (CGLubyteP mask))

// GLCALLCONV void  glPopAttrib ();
DEFINE_FUNC(210, glPopAttrib, GLCALLCONV, void, ())

// GLCALLCONV void  glPopClientAttrib ();
DEFINE_FUNC(211, glPopClientAttrib, GLCALLCONV, void, ())

// GLCALLCONV void  glPopMatrix ();
DEFINE_FUNC(212, glPopMatrix, GLCALLCONV, void, ())

// GLCALLCONV void  glPopName ();
DEFINE_FUNC(213, glPopName, GLCALLCONV, void, ())

// GLCALLCONV void  glPrioritizeTextures (GLsizei n, CGLuintP textures, CGLclampfP priorities);
DEFINE_FUNC(214, glPrioritizeTextures, GLCALLCONV, void, (GLsizei n, CGLuintP textures, CGLclampfP priorities))

// GLCALLCONV void  glPushAttrib (GLbitfield mask);
DEFINE_FUNC(215, glPushAttrib, GLCALLCONV, void, (GLbitfield mask))

// GLCALLCONV void  glPushClientAttrib (GLbitfield mask);
DEFINE_FUNC(216, glPushClientAttrib, GLCALLCONV, void, (GLbitfield mask))

// GLCALLCONV void  glPushMatrix ();
DEFINE_FUNC(217, glPushMatrix, GLCALLCONV, void, ())

// GLCALLCONV void  glPushName (GLuint name);
DEFINE_FUNC(218, glPushName, GLCALLCONV, void, (GLuint name))

// GLCALLCONV void  glRasterPos2d (GLdouble x, GLdouble y);
DEFINE_FUNC(219, glRasterPos2d, GLCALLCONV, void, (GLdouble x, GLdouble y))

// GLCALLCONV void  glRasterPos2dv (CGLdoubleP v);
DEFINE_FUNC(220, glRasterPos2dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glRasterPos2f (GLfloat x, GLfloat y);
DEFINE_FUNC(221, glRasterPos2f, GLCALLCONV, void, (GLfloat x, GLfloat y))

// GLCALLCONV void  glRasterPos2fv (CGLfloatP v);
DEFINE_FUNC(222, glRasterPos2fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glRasterPos2i (GLint x, GLint y);
DEFINE_FUNC(223, glRasterPos2i, GLCALLCONV, void, (GLint x, GLint y))

// GLCALLCONV void  glRasterPos2iv (CGLintP v);
DEFINE_FUNC(224, glRasterPos2iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glRasterPos2s (GLshort x, GLshort y);
DEFINE_FUNC(225, glRasterPos2s, GLCALLCONV, void, (GLshort x, GLshort y))

// GLCALLCONV void  glRasterPos2sv (CGLshortP v);
DEFINE_FUNC(226, glRasterPos2sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(227, glRasterPos3d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))

// GLCALLCONV void  glRasterPos3dv (CGLdoubleP v);
DEFINE_FUNC(228, glRasterPos3dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(229, glRasterPos3f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))

// GLCALLCONV void  glRasterPos3fv (CGLfloatP v);
DEFINE_FUNC(230, glRasterPos3fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glRasterPos3i (GLint x, GLint y, GLint z);
DEFINE_FUNC(231, glRasterPos3i, GLCALLCONV, void, (GLint x, GLint y, GLint z))

// GLCALLCONV void  glRasterPos3iv (CGLintP v);
DEFINE_FUNC(232, glRasterPos3iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glRasterPos3s (GLshort x, GLshort y, GLshort z);
DEFINE_FUNC(233, glRasterPos3s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z))

// GLCALLCONV void  glRasterPos3sv (CGLshortP v);
DEFINE_FUNC(234, glRasterPos3sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
DEFINE_FUNC(235, glRasterPos4d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z, GLdouble w))

// GLCALLCONV void  glRasterPos4dv (CGLdoubleP v);
DEFINE_FUNC(236, glRasterPos4dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
DEFINE_FUNC(237, glRasterPos4f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z, GLfloat w))

// GLCALLCONV void  glRasterPos4fv (CGLfloatP v);
DEFINE_FUNC(238, glRasterPos4fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
DEFINE_FUNC(239, glRasterPos4i, GLCALLCONV, void, (GLint x, GLint y, GLint z, GLint w))

// GLCALLCONV void  glRasterPos4iv (CGLintP v);
DEFINE_FUNC(240, glRasterPos4iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
DEFINE_FUNC(241, glRasterPos4s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z, GLshort w))

// GLCALLCONV void  glRasterPos4sv (CGLshortP v);
DEFINE_FUNC(242, glRasterPos4sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glReadBuffer (GLenum mode);
DEFINE_FUNC(243, glReadBuffer, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoidP pixels);
DEFINE_FUNC(244, glReadPixels, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoidP pixels))

// GLCALLCONV void  glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
DEFINE_FUNC(245, glRectd, GLCALLCONV, void, (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2))

// GLCALLCONV void  glRectdv (CGLdoubleP v1, CGLdoubleP v2);
DEFINE_FUNC(246, glRectdv, GLCALLCONV, void, (CGLdoubleP v1, CGLdoubleP v2))

// GLCALLCONV void  glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
DEFINE_FUNC(247, glRectf, GLCALLCONV, void, (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2))

// GLCALLCONV void  glRectfv (CGLfloatP v1, CGLfloatP v2);
DEFINE_FUNC(248, glRectfv, GLCALLCONV, void, (CGLfloatP v1, CGLfloatP v2))

// GLCALLCONV void  glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
DEFINE_FUNC(249, glRecti, GLCALLCONV, void, (GLint x1, GLint y1, GLint x2, GLint y2))

// GLCALLCONV void  glRectiv (CGLintP v1, CGLintP v2);
DEFINE_FUNC(250, glRectiv, GLCALLCONV, void, (CGLintP v1, CGLintP v2))

// GLCALLCONV void  glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
DEFINE_FUNC(251, glRects, GLCALLCONV, void, (GLshort x1, GLshort y1, GLshort x2, GLshort y2))

// GLCALLCONV void  glRectsv (CGLshortP v1, CGLshortP v2);
DEFINE_FUNC(252, glRectsv, GLCALLCONV, void, (CGLshortP v1, CGLshortP v2))

// GLCALLCONV GLint  glRenderMode (GLenum mode);
DEFINE_FUNC(253, glRenderMode, GLCALLCONV, GLint, (GLenum mode))

// GLCALLCONV void  glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(254, glRotated, GLCALLCONV, void, (GLdouble angle, GLdouble x, GLdouble y, GLdouble z))

// GLCALLCONV void  glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(255, glRotatef, GLCALLCONV, void, (GLfloat angle, GLfloat x, GLfloat y, GLfloat z))

// GLCALLCONV void  glScaled (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(256, glScaled, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))

// GLCALLCONV void  glScalef (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(257, glScalef, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))

// GLCALLCONV void  glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(258, glScissor, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height))

// GLCALLCONV void  glSelectBuffer (GLsizei size, GLuintP buffer);
DEFINE_FUNC(259, glSelectBuffer, GLCALLCONV, void, (GLsizei size, GLuintP buffer))

// GLCALLCONV void  glShadeModel (GLenum mode);
DEFINE_FUNC(260, glShadeModel, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void  glStencilFunc (GLenum func, GLint ref, GLuint mask);
DEFINE_FUNC(261, glStencilFunc, GLCALLCONV, void, (GLenum func, GLint ref, GLuint mask))

// GLCALLCONV void  glStencilMask (GLuint mask);
DEFINE_FUNC(262, glStencilMask, GLCALLCONV, void, (GLuint mask))

// GLCALLCONV void  glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
DEFINE_FUNC(263, glStencilOp, GLCALLCONV, void, (GLenum fail, GLenum zfail, GLenum zpass))

// GLCALLCONV void  glTexCoord1d (GLdouble s);
DEFINE_FUNC(264, glTexCoord1d, GLCALLCONV, void, (GLdouble s))

// GLCALLCONV void  glTexCoord1dv (CGLdoubleP v);
DEFINE_FUNC(265, glTexCoord1dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glTexCoord1f (GLfloat s);
DEFINE_FUNC(266, glTexCoord1f, GLCALLCONV, void, (GLfloat s))

// GLCALLCONV void  glTexCoord1fv (CGLfloatP v);
DEFINE_FUNC(267, glTexCoord1fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glTexCoord1i (GLint s);
DEFINE_FUNC(268, glTexCoord1i, GLCALLCONV, void, (GLint s))

// GLCALLCONV void  glTexCoord1iv (CGLintP v);
DEFINE_FUNC(269, glTexCoord1iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glTexCoord1s (GLshort s);
DEFINE_FUNC(270, glTexCoord1s, GLCALLCONV, void, (GLshort s))

// GLCALLCONV void  glTexCoord1sv (CGLshortP v);
DEFINE_FUNC(271, glTexCoord1sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glTexCoord2d (GLdouble s, GLdouble t);
DEFINE_FUNC(272, glTexCoord2d, GLCALLCONV, void, (GLdouble s, GLdouble t))

// GLCALLCONV void  glTexCoord2dv (CGLdoubleP v);
DEFINE_FUNC(273, glTexCoord2dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glTexCoord2f (GLfloat s, GLfloat t);
DEFINE_FUNC(274, glTexCoord2f, GLCALLCONV, void, (GLfloat s, GLfloat t))

// GLCALLCONV void  glTexCoord2fv (CGLfloatP v);
DEFINE_FUNC(275, glTexCoord2fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glTexCoord2i (GLint s, GLint t);
DEFINE_FUNC(276, glTexCoord2i, GLCALLCONV, void, (GLint s, GLint t))

// GLCALLCONV void  glTexCoord2iv (CGLintP v);
DEFINE_FUNC(277, glTexCoord2iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glTexCoord2s (GLshort s, GLshort t);
DEFINE_FUNC(278, glTexCoord2s, GLCALLCONV, void, (GLshort s, GLshort t))

// GLCALLCONV void  glTexCoord2sv (CGLshortP v);
DEFINE_FUNC(279, glTexCoord2sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
DEFINE_FUNC(280, glTexCoord3d, GLCALLCONV, void, (GLdouble s, GLdouble t, GLdouble r))

// GLCALLCONV void  glTexCoord3dv (CGLdoubleP v);
DEFINE_FUNC(281, glTexCoord3dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
DEFINE_FUNC(282, glTexCoord3f, GLCALLCONV, void, (GLfloat s, GLfloat t, GLfloat r))

// GLCALLCONV void  glTexCoord3fv (CGLfloatP v);
DEFINE_FUNC(283, glTexCoord3fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glTexCoord3i (GLint s, GLint t, GLint r);
DEFINE_FUNC(284, glTexCoord3i, GLCALLCONV, void, (GLint s, GLint t, GLint r))

// GLCALLCONV void  glTexCoord3iv (CGLintP v);
DEFINE_FUNC(285, glTexCoord3iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glTexCoord3s (GLshort s, GLshort t, GLshort r);
DEFINE_FUNC(286, glTexCoord3s, GLCALLCONV, void, (GLshort s, GLshort t, GLshort r))

// GLCALLCONV void  glTexCoord3sv (CGLshortP v);
DEFINE_FUNC(287, glTexCoord3sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
DEFINE_FUNC(288, glTexCoord4d, GLCALLCONV, void, (GLdouble s, GLdouble t, GLdouble r, GLdouble q))

// GLCALLCONV void  glTexCoord4dv (CGLdoubleP v);
DEFINE_FUNC(289, glTexCoord4dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
DEFINE_FUNC(290, glTexCoord4f, GLCALLCONV, void, (GLfloat s, GLfloat t, GLfloat r, GLfloat q))

// GLCALLCONV void  glTexCoord4fv (CGLfloatP v);
DEFINE_FUNC(291, glTexCoord4fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
DEFINE_FUNC(292, glTexCoord4i, GLCALLCONV, void, (GLint s, GLint t, GLint r, GLint q))

// GLCALLCONV void  glTexCoord4iv (CGLintP v);
DEFINE_FUNC(293, glTexCoord4iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
DEFINE_FUNC(294, glTexCoord4s, GLCALLCONV, void, (GLshort s, GLshort t, GLshort r, GLshort q))

// GLCALLCONV void  glTexCoord4sv (CGLshortP v);
DEFINE_FUNC(295, glTexCoord4sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glTexCoordPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(296, glTexCoordPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glTexEnvf (GLenum target, GLenum pname, GLfloat param);
DEFINE_FUNC(297, glTexEnvf, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloat param))

// GLCALLCONV void  glTexEnvfv (GLenum target, GLenum pname, CGLfloatP params);
DEFINE_FUNC(298, glTexEnvfv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLfloatP params))

// GLCALLCONV void  glTexEnvi (GLenum target, GLenum pname, GLint param);
DEFINE_FUNC(299, glTexEnvi, GLCALLCONV, void, (GLenum target, GLenum pname, GLint param))

// GLCALLCONV void  glTexEnviv (GLenum target, GLenum pname, CGLintP params);
DEFINE_FUNC(300, glTexEnviv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLintP params))

// GLCALLCONV void  glTexGend (GLenum coord, GLenum pname, GLdouble param);
DEFINE_FUNC(301, glTexGend, GLCALLCONV, void, (GLenum coord, GLenum pname, GLdouble param))

// GLCALLCONV void  glTexGendv (GLenum coord, GLenum pname, CGLdoubleP params);
DEFINE_FUNC(302, glTexGendv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLdoubleP params))

// GLCALLCONV void  glTexGenf (GLenum coord, GLenum pname, GLfloat param);
DEFINE_FUNC(303, glTexGenf, GLCALLCONV, void, (GLenum coord, GLenum pname, GLfloat param))

// GLCALLCONV void  glTexGenfv (GLenum coord, GLenum pname, CGLfloatP params);
DEFINE_FUNC(304, glTexGenfv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLfloatP params))

// GLCALLCONV void  glTexGeni (GLenum coord, GLenum pname, GLint param);
DEFINE_FUNC(305, glTexGeni, GLCALLCONV, void, (GLenum coord, GLenum pname, GLint param))

// GLCALLCONV void  glTexGeniv (GLenum coord, GLenum pname, CGLintP params);
DEFINE_FUNC(306, glTexGeniv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLintP params))

// GLCALLCONV void  glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(307, glTexImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, CGLvoidP pixels))

// GLCALLCONV void  glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(308, glTexImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, CGLvoidP pixels))

// GLCALLCONV void  glTexParameterf (GLenum target, GLenum pname, GLfloat param);
DEFINE_FUNC(309, glTexParameterf, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloat param))

// GLCALLCONV void  glTexParameterfv (GLenum target, GLenum pname, CGLfloatP params);
DEFINE_FUNC(310, glTexParameterfv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLfloatP params))

// GLCALLCONV void  glTexParameteri (GLenum target, GLenum pname, GLint param);
DEFINE_FUNC(311, glTexParameteri, GLCALLCONV, void, (GLenum target, GLenum pname, GLint param))

// GLCALLCONV void  glTexParameteriv (GLenum target, GLenum pname, CGLintP params);
DEFINE_FUNC(312, glTexParameteriv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLintP params))

// GLCALLCONV void  glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(313, glTexSubImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, CGLvoidP pixels))

// GLCALLCONV void  glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(314, glTexSubImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels))

// GLCALLCONV void  glTranslated (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(315, glTranslated, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))

// GLCALLCONV void  glTranslatef (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(316, glTranslatef, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))

// GLCALLCONV void  glVertex2d (GLdouble x, GLdouble y);
DEFINE_FUNC(317, glVertex2d, GLCALLCONV, void, (GLdouble x, GLdouble y))

// GLCALLCONV void  glVertex2dv (CGLdoubleP v);
DEFINE_FUNC(318, glVertex2dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glVertex2f (GLfloat x, GLfloat y);
DEFINE_FUNC(319, glVertex2f, GLCALLCONV, void, (GLfloat x, GLfloat y))

// GLCALLCONV void  glVertex2fv (CGLfloatP v);
DEFINE_FUNC(320, glVertex2fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glVertex2i (GLint x, GLint y);
DEFINE_FUNC(321, glVertex2i, GLCALLCONV, void, (GLint x, GLint y))

// GLCALLCONV void  glVertex2iv (CGLintP v);
DEFINE_FUNC(322, glVertex2iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glVertex2s (GLshort x, GLshort y);
DEFINE_FUNC(323, glVertex2s, GLCALLCONV, void, (GLshort x, GLshort y))

// GLCALLCONV void  glVertex2sv (CGLshortP v);
DEFINE_FUNC(324, glVertex2sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glVertex3d (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(325, glVertex3d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))

// GLCALLCONV void  glVertex3dv (CGLdoubleP v);
DEFINE_FUNC(326, glVertex3dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glVertex3f (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(327, glVertex3f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))

// GLCALLCONV void  glVertex3fv (CGLfloatP v);
DEFINE_FUNC(328, glVertex3fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glVertex3i (GLint x, GLint y, GLint z);
DEFINE_FUNC(329, glVertex3i, GLCALLCONV, void, (GLint x, GLint y, GLint z))

// GLCALLCONV void  glVertex3iv (CGLintP v);
DEFINE_FUNC(330, glVertex3iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glVertex3s (GLshort x, GLshort y, GLshort z);
DEFINE_FUNC(331, glVertex3s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z))

// GLCALLCONV void  glVertex3sv (CGLshortP v);
DEFINE_FUNC(332, glVertex3sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
DEFINE_FUNC(333, glVertex4d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z, GLdouble w))

// GLCALLCONV void  glVertex4dv (CGLdoubleP v);
DEFINE_FUNC(334, glVertex4dv, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void  glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
DEFINE_FUNC(335, glVertex4f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z, GLfloat w))

// GLCALLCONV void  glVertex4fv (CGLfloatP v);
DEFINE_FUNC(336, glVertex4fv, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void  glVertex4i (GLint x, GLint y, GLint z, GLint w);
DEFINE_FUNC(337, glVertex4i, GLCALLCONV, void, (GLint x, GLint y, GLint z, GLint w))

// GLCALLCONV void  glVertex4iv (CGLintP v);
DEFINE_FUNC(338, glVertex4iv, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void  glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
DEFINE_FUNC(339, glVertex4s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z, GLshort w))

// GLCALLCONV void  glVertex4sv (CGLshortP v);
DEFINE_FUNC(340, glVertex4sv, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void  glVertexPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(341, glVertexPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void  glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(342, glViewport, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height))

// GLCALLCONV int   wglChoosePixelFormat(HDC a, CPIXELFORMATDESCRIPTORP b);
DEFINE_FUNC(343, wglChoosePixelFormat, GLCALLCONV, int, (HDC a, CPIXELFORMATDESCRIPTORP b))

// GLCALLCONV BOOL  wglCopyContext(HGLRC a, HGLRC b, UINT c);
DEFINE_FUNC(344, wglCopyContext, GLCALLCONV, BOOL, (HGLRC a, HGLRC b, UINT c))

// GLCALLCONV HGLRC wglCreateContext(HDC a);
DEFINE_FUNC(345, wglCreateContext, GLCALLCONV, HGLRC, (HDC a))

// GLCALLCONV HGLRC wglCreateLayerContext(HDC a, int b);
DEFINE_FUNC(346, wglCreateLayerContext, GLCALLCONV, HGLRC, (HDC a, int b))

// GLCALLCONV BOOL  wglDeleteContext(HGLRC a);
DEFINE_FUNC(347, wglDeleteContext, GLCALLCONV, BOOL, (HGLRC a))

// GLCALLCONV BOOL  wglDescribeLayerPlane(HDC a, int b, int c, UINT d, LPLAYERPLANEDESCRIPTOR e);
DEFINE_FUNC(348, wglDescribeLayerPlane, GLCALLCONV, BOOL, (HDC a, int b, int c, UINT d, LPLAYERPLANEDESCRIPTOR e))

// GLCALLCONV int   wglDescribePixelFormat(HDC a, int b, UINT c, LPPIXELFORMATDESCRIPTOR d);
DEFINE_FUNC(349, wglDescribePixelFormat, GLCALLCONV, int, (HDC a, int b, UINT c, LPPIXELFORMATDESCRIPTOR d))

// GLCALLCONV HGLRC wglGetCurrentContext();
DEFINE_FUNC(350, wglGetCurrentContext, GLCALLCONV, HGLRC, ())

// GLCALLCONV HDC   wglGetCurrentDC();
DEFINE_FUNC(351, wglGetCurrentDC, GLCALLCONV, HDC, ())

// GLCALLCONV PROC  wglGetDefaultProcAddress(LPCSTR a);
DEFINE_FUNC(352, wglGetDefaultProcAddress, GLCALLCONV, PROC, (LPCSTR a))

// GLCALLCONV int   wglGetLayerPaletteEntries(HDC a, int b, int c, int d, COLORREFP e);
DEFINE_FUNC(353, wglGetLayerPaletteEntries, GLCALLCONV, int, (HDC a, int b, int c, int d, COLORREFP e))

// GLCALLCONV int   wglGetPixelFormat(HDC a);
DEFINE_FUNC(354, wglGetPixelFormat, GLCALLCONV, int, (HDC a))

// GLCALLCONV PROC  wglGetProcAddress(LPCSTR a);
DEFINE_FUNC(355, wglGetProcAddress, GLCALLCONV, PROC, (LPCSTR a))

// GLCALLCONV BOOL  wglMakeCurrent(HDC a, HGLRC b);
DEFINE_FUNC(356, wglMakeCurrent, GLCALLCONV, BOOL, (HDC a, HGLRC b))

// GLCALLCONV BOOL  wglRealizeLayerPalette(HDC a, int b, BOOL c);
DEFINE_FUNC(357, wglRealizeLayerPalette, GLCALLCONV, BOOL, (HDC a, int b, BOOL c))

// GLCALLCONV int   wglSetLayerPaletteEntries(HDC a, int b, int c, int d, CCOLORREFP e);
DEFINE_FUNC(358, wglSetLayerPaletteEntries, GLCALLCONV, int, (HDC a, int b, int c, int d, CCOLORREFP e))

// GLCALLCONV BOOL  wglSetPixelFormat(HDC a, int b, CPIXELFORMATDESCRIPTORP c);
DEFINE_FUNC(359, wglSetPixelFormat, GLCALLCONV, BOOL, (HDC a, int b, CPIXELFORMATDESCRIPTORP c))

// GLCALLCONV BOOL  wglShareLists(HGLRC a, HGLRC b);
DEFINE_FUNC(360, wglShareLists, GLCALLCONV, BOOL, (HGLRC a, HGLRC b))

// GLCALLCONV BOOL  wglSwapBuffers(HDC a);
DEFINE_FUNC(361, wglSwapBuffers, GLCALLCONV, BOOL, (HDC a))

// GLCALLCONV BOOL  wglSwapLayerBuffers(HDC a, UINT b);
DEFINE_FUNC(362, wglSwapLayerBuffers, GLCALLCONV, BOOL, (HDC a, UINT b))

// GLCALLCONV BOOL  wglUseFontBitmapsA(HDC a, DWORD b, DWORD c, DWORD d);
DEFINE_FUNC(363, wglUseFontBitmapsA, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d))

// GLCALLCONV BOOL  wglUseFontBitmapsW(HDC a, DWORD b, DWORD c, DWORD d);
DEFINE_FUNC(364, wglUseFontBitmapsW, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d))

// GLCALLCONV BOOL  wglUseFontOutlinesA(HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h);
DEFINE_FUNC(365, wglUseFontOutlinesA, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h))

// GLCALLCONV BOOL  wglUseFontOutlinesW(HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h);
DEFINE_FUNC(366, wglUseFontOutlinesW, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h))

// GLCALLCONV void glActiveTextureARB(GLenum texture);
DEFINE_FUNC(367, glActiveTextureARB, GLCALLCONV, void, (GLenum texture))

// GLCALLCONV void glClientActiveTextureARB(GLenum texture);
DEFINE_FUNC(368, glClientActiveTextureARB, GLCALLCONV, void, (GLenum texture))

// GLCALLCONV void glMultiTexCoord1dARB(GLenum target, GLdouble s);
DEFINE_FUNC(369, glMultiTexCoord1dARB, GLCALLCONV, void, (GLenum target, GLdouble s))

// GLCALLCONV void glMultiTexCoord1dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(370, glMultiTexCoord1dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))

// GLCALLCONV void glMultiTexCoord1fARB(GLenum target, GLfloat s);
DEFINE_FUNC(371, glMultiTexCoord1fARB, GLCALLCONV, void, (GLenum target, GLfloat s))

// GLCALLCONV void glMultiTexCoord1fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(372, glMultiTexCoord1fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))

// GLCALLCONV void glMultiTexCoord1iARB(GLenum target, GLint s);
DEFINE_FUNC(373, glMultiTexCoord1iARB, GLCALLCONV, void, (GLenum target, GLint s))

// GLCALLCONV void glMultiTexCoord1ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(374, glMultiTexCoord1ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))

// GLCALLCONV void glMultiTexCoord1sARB(GLenum target, GLshort s);
DEFINE_FUNC(375, glMultiTexCoord1sARB, GLCALLCONV, void, (GLenum target, GLshort s))

// GLCALLCONV void glMultiTexCoord1svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(376, glMultiTexCoord1svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))

// GLCALLCONV void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
DEFINE_FUNC(377, glMultiTexCoord2dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t))

// GLCALLCONV void glMultiTexCoord2dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(378, glMultiTexCoord2dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))

// GLCALLCONV void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
DEFINE_FUNC(379, glMultiTexCoord2fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t))

// GLCALLCONV void glMultiTexCoord2fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(380, glMultiTexCoord2fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))

// GLCALLCONV void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
DEFINE_FUNC(381, glMultiTexCoord2iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t))

// GLCALLCONV void glMultiTexCoord2ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(382, glMultiTexCoord2ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))

// GLCALLCONV void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
DEFINE_FUNC(383, glMultiTexCoord2sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t))

// GLCALLCONV void glMultiTexCoord2svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(384, glMultiTexCoord2svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))

// GLCALLCONV void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
DEFINE_FUNC(385, glMultiTexCoord3dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t, GLdouble r))

// GLCALLCONV void glMultiTexCoord3dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(386, glMultiTexCoord3dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))

// GLCALLCONV void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
DEFINE_FUNC(387, glMultiTexCoord3fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t, GLfloat r))

// GLCALLCONV void glMultiTexCoord3fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(388, glMultiTexCoord3fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))

// GLCALLCONV void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
DEFINE_FUNC(389, glMultiTexCoord3iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t, GLint r))

// GLCALLCONV void glMultiTexCoord3ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(390, glMultiTexCoord3ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))

// GLCALLCONV void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
DEFINE_FUNC(391, glMultiTexCoord3sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t, GLshort r))

// GLCALLCONV void glMultiTexCoord3svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(392, glMultiTexCoord3svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))

// GLCALLCONV void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
DEFINE_FUNC(393, glMultiTexCoord4dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q))

// GLCALLCONV void glMultiTexCoord4dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(394, glMultiTexCoord4dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))

// GLCALLCONV void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
DEFINE_FUNC(395, glMultiTexCoord4fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q))

// GLCALLCONV void glMultiTexCoord4fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(396, glMultiTexCoord4fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))

// GLCALLCONV void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
DEFINE_FUNC(397, glMultiTexCoord4iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t, GLint r, GLint q))

// GLCALLCONV void glMultiTexCoord4ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(398, glMultiTexCoord4ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))

// GLCALLCONV void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
DEFINE_FUNC(399, glMultiTexCoord4sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q))

// GLCALLCONV void glMultiTexCoord4svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(400, glMultiTexCoord4svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))

// GLCALLCONV void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
DEFINE_FUNC(401, glBlendColorEXT, GLCALLCONV, void, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))

// GLCALLCONV void glBlendEquationEXT(GLenum mode);
DEFINE_FUNC(402, glBlendEquationEXT, GLCALLCONV, void, (GLenum mode))

// GLCALLCONV void glFogCoorddEXT(GLdouble coord);
DEFINE_FUNC(403, glFogCoorddEXT, GLCALLCONV, void, (GLdouble coord))

// GLCALLCONV void glFogCoorddvEXT(CGLdoubleP coord);
DEFINE_FUNC(404, glFogCoorddvEXT, GLCALLCONV, void, (CGLdoubleP coord))

// GLCALLCONV void glFogCoordfEXT(GLfloat coord);
DEFINE_FUNC(405, glFogCoordfEXT, GLCALLCONV, void, (GLfloat coord))

// GLCALLCONV void glFogCoordfvEXT(CGLfloatP coord);
DEFINE_FUNC(406, glFogCoordfvEXT, GLCALLCONV, void, (CGLfloatP coord))

// GLCALLCONV void glFogCoordPointerEXT(GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(407, glFogCoordPointerEXT, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))

// GLCALLCONV void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue);
DEFINE_FUNC(408, glSecondaryColor3bEXT, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue))

// GLCALLCONV void glSecondaryColor3bvEXT(CGLbyteP v);
DEFINE_FUNC(409, glSecondaryColor3bvEXT, GLCALLCONV, void, (CGLbyteP v))

// GLCALLCONV void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue);
DEFINE_FUNC(410, glSecondaryColor3dEXT, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue))

// GLCALLCONV void glSecondaryColor3dvEXT(CGLdoubleP v);
DEFINE_FUNC(411, glSecondaryColor3dvEXT, GLCALLCONV, void, (CGLdoubleP v))

// GLCALLCONV void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue);
DEFINE_FUNC(412, glSecondaryColor3fEXT, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue))

// GLCALLCONV void glSecondaryColor3fvEXT(CGLfloatP v);
DEFINE_FUNC(413, glSecondaryColor3fvEXT, GLCALLCONV, void, (CGLfloatP v))

// GLCALLCONV void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue);
DEFINE_FUNC(414, glSecondaryColor3iEXT, GLCALLCONV, void, (GLint red, GLint green, GLint blue))

// GLCALLCONV void glSecondaryColor3ivEXT(CGLintP v);
DEFINE_FUNC(415, glSecondaryColor3ivEXT, GLCALLCONV, void, (CGLintP v))

// GLCALLCONV void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue);
DEFINE_FUNC(416, glSecondaryColor3sEXT, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue))

// GLCALLCONV void glSecondaryColor3svEXT(CGLshortP v);
DEFINE_FUNC(417, glSecondaryColor3svEXT, GLCALLCONV, void, (CGLshortP v))

// GLCALLCONV void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue);
DEFINE_FUNC(418, glSecondaryColor3ubEXT, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue))

// GLCALLCONV void glSecondaryColor3ubvEXT(CGLubyteP v);
DEFINE_FUNC(419, glSecondaryColor3ubvEXT, GLCALLCONV, void, (CGLubyteP v))

// GLCALLCONV void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue);
DEFINE_FUNC(420, glSecondaryColor3uiEXT, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue))

// GLCALLCONV void glSecondaryColor3uivEXT(CGLuintP v);
DEFINE_FUNC(421, glSecondaryColor3uivEXT, GLCALLCONV, void, (CGLuintP v))

// GLCALLCONV void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue);
DEFINE_FUNC(422, glSecondaryColor3usEXT, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue))

// GLCALLCONV void glSecondaryColor3usvEXT(CGLushortP v);
DEFINE_FUNC(423, glSecondaryColor3usvEXT, GLCALLCONV, void, (CGLushortP v))

// GLCALLCONV void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLvoidP pointer);
DEFINE_FUNC(424, glSecondaryColorPointerEXT, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, GLvoidP pointer))

// GLCALLCONV void glGenFencesNV(GLsizei n, GLuintP fences);
DEFINE_FUNC(425, glGenFencesNV, GLCALLCONV, void, (GLsizei n, GLuintP fences))

// GLCALLCONV void glDeleteFencesNV(GLsizei n, CGLuintP fences);
DEFINE_FUNC(426, glDeleteFencesNV, GLCALLCONV, void, (GLsizei n, CGLuintP fences))

// GLCALLCONV void glSetFenceNV(GLuint fence, GLenum condition);
DEFINE_FUNC(427, glSetFenceNV, GLCALLCONV, void, (GLuint fence, GLenum condition))

// GLCALLCONV GLboolean glTestFenceNV(GLuint fence);
DEFINE_FUNC(428, glTestFenceNV, GLCALLCONV, GLboolean, (GLuint fence))

// GLCALLCONV void glFinishFenceNV(GLuint fence);
DEFINE_FUNC(429, glFinishFenceNV, GLCALLCONV, void, (GLuint fence))

// GLCALLCONV GLboolean glIsFenceNV(GLuint fence);
DEFINE_FUNC(430, glIsFenceNV, GLCALLCONV, GLboolean, (GLuint fence))

// GLCALLCONV void glGetFenceivNV(GLuint fence, GLenum pname, GLintP params);
DEFINE_FUNC(431, glGetFenceivNV, GLCALLCONV, void, (GLuint fence, GLenum pname, GLintP params))

// GLCALLCONV void glCombinerParameterfvNV(GLenum pname, CGLfloatP params);
DEFINE_FUNC(432, glCombinerParameterfvNV, GLCALLCONV, void, (GLenum pname, CGLfloatP params))

// GLCALLCONV void glCombinerParameterfNV(GLenum pname, GLfloat param);
DEFINE_FUNC(433, glCombinerParameterfNV, GLCALLCONV, void, (GLenum pname, GLfloat param))

// GLCALLCONV void glCombinerParameterivNV(GLenum pname, CGLintP params);
DEFINE_FUNC(434, glCombinerParameterivNV, GLCALLCONV, void, (GLenum pname, CGLintP params))

// GLCALLCONV void glCombinerParameteriNV(GLenum pname, GLint param);
DEFINE_FUNC(435, glCombinerParameteriNV, GLCALLCONV, void, (GLenum pname, GLint param))

// GLCALLCONV void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
DEFINE_FUNC(436, glCombinerInputNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage))

// GLCALLCONV void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
DEFINE_FUNC(437, glCombinerOutputNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum))

// GLCALLCONV void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
DEFINE_FUNC(438, glFinalCombinerInputNV, GLCALLCONV, void, (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage))

// GLCALLCONV void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloatP params);
DEFINE_FUNC(439, glGetCombinerInputParameterfvNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloatP params))

// GLCALLCONV void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLintP params);
DEFINE_FUNC(440, glGetCombinerInputParameterivNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLintP params))

// GLCALLCONV void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloatP params);
DEFINE_FUNC(441, glGetCombinerOutputParameterfvNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum pname, GLfloatP params))

// GLCALLCONV void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLintP params);
DEFINE_FUNC(442, glGetCombinerOutputParameterivNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum pname, GLintP params))

// GLCALLCONV void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloatP params);
DEFINE_FUNC(443, glGetFinalCombinerInputParameterfvNV, GLCALLCONV, void, (GLenum variable, GLenum pname, GLfloatP params))

// GLCALLCONV void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLintP params);
DEFINE_FUNC(444, glGetFinalCombinerInputParameterivNV, GLCALLCONV, void, (GLenum variable, GLenum pname, GLintP params))

// GLCALLCONV void glFlushVertexArrayRangeNV(void);
DEFINE_FUNC(445, glFlushVertexArrayRangeNV, GLCALLCONV, void, ())

// GLCALLCONV void glVertexArrayRangeNV(GLsizei size, CGLvoidP pointer);
DEFINE_FUNC(446, glVertexArrayRangeNV, GLCALLCONV, void, (GLsizei size, CGLvoidP pointer))

// GLCALLCONV GLvoidP wglAllocateMemoryNV(int size, float readfreq, float writefreq, float priority);
DEFINE_FUNC(447, wglAllocateMemoryNV, GLCALLCONV, GLvoidP, (int size, float readfreq, float writefreq, float priority))

// GLCALLCONV void wglFreeMemoryNV(GLvoidP pointer);
DEFINE_FUNC(448, wglFreeMemoryNV, GLCALLCONV, void, (GLvoidP pointer))

// GLCALLCONV int wglSwapIntervalEXT(int a);
DEFINE_FUNC(449, wglSwapIntervalEXT, GLCALLCONV, int, (int a))

// GLCALLCONV int wglGetSwapIntervalEXT();
DEFINE_FUNC(450, wglGetSwapIntervalEXT, GLCALLCONV, int, ())
