// DEFINES OpenGL32

// GLCALLCONV void  glAccum (GLenum op, GLfloat value);
DEFINE_FUNC(0, glAccum, GLCALLCONV, void, (GLenum op, GLfloat value))
IF_LOGGING(0)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << (DWORD)0;
LSSB(&op,GLenum); LSSB(&value,GLfloat); 
ENDLOG
((glAccumPtr)(realFunctPtr[0]))(op, value); }

// GLCALLCONV void  glAlphaFunc (GLenum func, GLclampf ref);
DEFINE_FUNC(1, glAlphaFunc, GLCALLCONV, void, (GLenum func, GLclampf ref))
IF_LOGGING(1)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLclampf) << ID_LOG << 1;
LSSB(&func,GLenum); LSSB(&ref,GLclampf); 
ENDLOG
((glAlphaFuncPtr)(realFunctPtr[1]))(func, ref); }

// GLCALLCONV GLboolean  glAreTexturesResident (GLsizei n, CGLuintP textures, GLbooleanP residences);
DEFINE_FUNC(2, glAreTexturesResident, GLCALLCONV, GLboolean, (GLsizei n, CGLuintP textures, GLbooleanP residences))
IF_LOGGING(2)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(GLbooleanP) << ID_LOG << 2;
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); LSSB(&residences,GLbooleanP); 
ENDLOG
return ((glAreTexturesResidentPtr)(realFunctPtr[2]))(n, textures, residences); }

// GLCALLCONV void  glArrayElement (GLint i);
DEFINE_FUNC(3, glArrayElement, GLCALLCONV, void, (GLint i))
IF_LOGGING(3)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) << ID_LOG << 3;
LSSB(&i,GLint); 
ENDLOG
((glArrayElementPtr)(realFunctPtr[3]))(i); }

// GLCALLCONV void  glBegin (GLenum mode);
DEFINE_FUNC(4, glBegin, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(4)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 4;
LSSB(&mode,GLenum); 
ENDLOG
((glBeginPtr)(realFunctPtr[4]))(mode); }

// GLCALLCONV void  glBindTexture (GLenum target, GLuint texture);
DEFINE_FUNC(5, glBindTexture, GLCALLCONV, void, (GLenum target, GLuint texture))
IF_LOGGING(5)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLuint) << ID_LOG << 5;
LSSB(&target,GLenum); LSSB(&texture,GLuint); 
ENDLOG
((glBindTexturePtr)(realFunctPtr[5]))(target, texture); }

// GLCALLCONV void  glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, CGLubyteP bitmap);
DEFINE_FUNC(6, glBitmap, GLCALLCONV, void, (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, CGLubyteP bitmap))
IF_LOGGING(6)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(CGLubyteP) << ID_LOG << 6;
LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&xorig,GLfloat); LSSB(&yorig,GLfloat); LSSB(&xmove,GLfloat); LSSB(&ymove,GLfloat); LSSB(&bitmap,CGLubyteP); 
ENDLOG
((glBitmapPtr)(realFunctPtr[6]))(width, height, xorig, yorig, xmove, ymove, bitmap); }

// GLCALLCONV void  glBlendFunc (GLenum sfactor, GLenum dfactor);
DEFINE_FUNC(7, glBlendFunc, GLCALLCONV, void, (GLenum sfactor, GLenum dfactor))
IF_LOGGING(7)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 7;
LSSB(&sfactor,GLenum); LSSB(&dfactor,GLenum); 
ENDLOG
((glBlendFuncPtr)(realFunctPtr[7]))(sfactor, dfactor); }

// GLCALLCONV void  glCallList (GLuint list);
DEFINE_FUNC(8, glCallList, GLCALLCONV, void, (GLuint list))
IF_LOGGING(8)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 8;
LSSB(&list,GLuint); 
ENDLOG
((glCallListPtr)(realFunctPtr[8]))(list); }

// GLCALLCONV void  glCallLists (GLsizei n, GLenum type, CGLvoidP lists);
DEFINE_FUNC(9, glCallLists, GLCALLCONV, void, (GLsizei n, GLenum type, CGLvoidP lists))
IF_LOGGING(9)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 9;
LSSB(&n,GLsizei); LSSB(&type,GLenum); LSSB(&lists,CGLvoidP); 
ENDLOG
((glCallListsPtr)(realFunctPtr[9]))(n, type, lists); }

// GLCALLCONV void  glClear (GLbitfield mask);
DEFINE_FUNC(10, glClear, GLCALLCONV, void, (GLbitfield mask))
IF_LOGGING(10)
LS << MAGIC << HEADERSIZE  + sizeof(GLbitfield) << ID_LOG << 10;
LSSB(&mask,GLbitfield); 
ENDLOG
((glClearPtr)(realFunctPtr[10]))(mask); }

// GLCALLCONV void  glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
DEFINE_FUNC(11, glClearAccum, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha))
IF_LOGGING(11)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 11;
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); LSSB(&alpha,GLfloat); 
ENDLOG
((glClearAccumPtr)(realFunctPtr[11]))(red, green, blue, alpha); }

// GLCALLCONV void  glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
DEFINE_FUNC(12, glClearColor, GLCALLCONV, void, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))
IF_LOGGING(12)
LS << MAGIC << HEADERSIZE  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) << ID_LOG << 12;
LSSB(&red,GLclampf); LSSB(&green,GLclampf); LSSB(&blue,GLclampf); LSSB(&alpha,GLclampf); 
ENDLOG
((glClearColorPtr)(realFunctPtr[12]))(red, green, blue, alpha); }

// GLCALLCONV void  glClearDepth (GLclampd depth);
DEFINE_FUNC(13, glClearDepth, GLCALLCONV, void, (GLclampd depth))
IF_LOGGING(13)
LS << MAGIC << HEADERSIZE  + sizeof(GLclampd) << ID_LOG << 13;
LSSB(&depth,GLclampd); 
ENDLOG
((glClearDepthPtr)(realFunctPtr[13]))(depth); }

// GLCALLCONV void  glClearIndex (GLfloat c);
DEFINE_FUNC(14, glClearIndex, GLCALLCONV, void, (GLfloat c))
IF_LOGGING(14)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 14;
LSSB(&c,GLfloat); 
ENDLOG
((glClearIndexPtr)(realFunctPtr[14]))(c); }

// GLCALLCONV void  glClearStencil (GLint s);
DEFINE_FUNC(15, glClearStencil, GLCALLCONV, void, (GLint s))
IF_LOGGING(15)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) << ID_LOG << 15;
LSSB(&s,GLint); 
ENDLOG
((glClearStencilPtr)(realFunctPtr[15]))(s); }

// GLCALLCONV void  glClipPlane (GLenum plane, CGLdoubleP equation);
DEFINE_FUNC(16, glClipPlane, GLCALLCONV, void, (GLenum plane, CGLdoubleP equation))
IF_LOGGING(16)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 16;
LSSB(&plane,GLenum); LSSB(&equation,CGLdoubleP); 
ENDLOG
((glClipPlanePtr)(realFunctPtr[16]))(plane, equation); }

// GLCALLCONV void  glColor3b (GLbyte red, GLbyte green, GLbyte blue);
DEFINE_FUNC(17, glColor3b, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue))
IF_LOGGING(17)
LS << MAGIC << HEADERSIZE  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) << ID_LOG << 17;
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); 
ENDLOG
((glColor3bPtr)(realFunctPtr[17]))(red, green, blue); }

// GLCALLCONV void  glColor3bv (CGLbyteP v);
DEFINE_FUNC(18, glColor3bv, GLCALLCONV, void, (CGLbyteP v))
IF_LOGGING(18)
LS << MAGIC << HEADERSIZE  + sizeof(CGLbyteP) << ID_LOG << 18;
LSSB(&v,CGLbyteP); 
ENDLOG
((glColor3bvPtr)(realFunctPtr[18]))(v); }

// GLCALLCONV void  glColor3d (GLdouble red, GLdouble green, GLdouble blue);
DEFINE_FUNC(19, glColor3d, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue))
IF_LOGGING(19)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 19;
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); 
ENDLOG
((glColor3dPtr)(realFunctPtr[19]))(red, green, blue); }

// GLCALLCONV void  glColor3dv (CGLdoubleP v);
DEFINE_FUNC(20, glColor3dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(20)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 20;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glColor3dvPtr)(realFunctPtr[20]))(v); }

// GLCALLCONV void  glColor3f (GLfloat red, GLfloat green, GLfloat blue);
DEFINE_FUNC(21, glColor3f, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue))
IF_LOGGING(21)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 21;
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); 
ENDLOG
((glColor3fPtr)(realFunctPtr[21]))(red, green, blue); }

// GLCALLCONV void  glColor3fv (CGLfloatP v);
DEFINE_FUNC(22, glColor3fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(22)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 22;
LSSB(&v,CGLfloatP); 
ENDLOG
((glColor3fvPtr)(realFunctPtr[22]))(v); }

// GLCALLCONV void  glColor3i (GLint red, GLint green, GLint blue);
DEFINE_FUNC(23, glColor3i, GLCALLCONV, void, (GLint red, GLint green, GLint blue))
IF_LOGGING(23)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 23;
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); 
ENDLOG
((glColor3iPtr)(realFunctPtr[23]))(red, green, blue); }

// GLCALLCONV void  glColor3iv (CGLintP v);
DEFINE_FUNC(24, glColor3iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(24)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 24;
LSSB(&v,CGLintP); 
ENDLOG
((glColor3ivPtr)(realFunctPtr[24]))(v); }

// GLCALLCONV void  glColor3s (GLshort red, GLshort green, GLshort blue);
DEFINE_FUNC(25, glColor3s, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue))
IF_LOGGING(25)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 25;
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); 
ENDLOG
((glColor3sPtr)(realFunctPtr[25]))(red, green, blue); }

// GLCALLCONV void  glColor3sv (CGLshortP v);
DEFINE_FUNC(26, glColor3sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(26)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 26;
LSSB(&v,CGLshortP); 
ENDLOG
((glColor3svPtr)(realFunctPtr[26]))(v); }

// GLCALLCONV void  glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
DEFINE_FUNC(27, glColor3ub, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue))
IF_LOGGING(27)
LS << MAGIC << HEADERSIZE  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) << ID_LOG << 27;
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); 
ENDLOG
((glColor3ubPtr)(realFunctPtr[27]))(red, green, blue); }

// GLCALLCONV void  glColor3ubv (CGLubyteP v);
DEFINE_FUNC(28, glColor3ubv, GLCALLCONV, void, (CGLubyteP v))
IF_LOGGING(28)
LS << MAGIC << HEADERSIZE  + sizeof(CGLubyteP) << ID_LOG << 28;
LSSB(&v,CGLubyteP); 
ENDLOG
((glColor3ubvPtr)(realFunctPtr[28]))(v); }

// GLCALLCONV void  glColor3ui (GLuint red, GLuint green, GLuint blue);
DEFINE_FUNC(29, glColor3ui, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue))
IF_LOGGING(29)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) << ID_LOG << 29;
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); 
ENDLOG
((glColor3uiPtr)(realFunctPtr[29]))(red, green, blue); }

// GLCALLCONV void  glColor3uiv (CGLuintP v);
DEFINE_FUNC(30, glColor3uiv, GLCALLCONV, void, (CGLuintP v))
IF_LOGGING(30)
LS << MAGIC << HEADERSIZE  + sizeof(CGLuintP) << ID_LOG << 30;
LSSB(&v,CGLuintP); 
ENDLOG
((glColor3uivPtr)(realFunctPtr[30]))(v); }

// GLCALLCONV void  glColor3us (GLushort red, GLushort green, GLushort blue);
DEFINE_FUNC(31, glColor3us, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue))
IF_LOGGING(31)
LS << MAGIC << HEADERSIZE  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) << ID_LOG << 31;
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); 
ENDLOG
((glColor3usPtr)(realFunctPtr[31]))(red, green, blue); }

// GLCALLCONV void  glColor3usv (CGLushortP v);
DEFINE_FUNC(32, glColor3usv, GLCALLCONV, void, (CGLushortP v))
IF_LOGGING(32)
LS << MAGIC << HEADERSIZE  + sizeof(CGLushortP) << ID_LOG << 32;
LSSB(&v,CGLushortP); 
ENDLOG
((glColor3usvPtr)(realFunctPtr[32]))(v); }

// GLCALLCONV void  glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
DEFINE_FUNC(33, glColor4b, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha))
IF_LOGGING(33)
LS << MAGIC << HEADERSIZE  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) << ID_LOG << 33;
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); LSSB(&alpha,GLbyte); 
ENDLOG
((glColor4bPtr)(realFunctPtr[33]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4bv (CGLbyteP v);
DEFINE_FUNC(34, glColor4bv, GLCALLCONV, void, (CGLbyteP v))
IF_LOGGING(34)
LS << MAGIC << HEADERSIZE  + sizeof(CGLbyteP) << ID_LOG << 34;
LSSB(&v,CGLbyteP); 
ENDLOG
((glColor4bvPtr)(realFunctPtr[34]))(v); }

// GLCALLCONV void  glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
DEFINE_FUNC(35, glColor4d, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha))
IF_LOGGING(35)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 35;
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); LSSB(&alpha,GLdouble); 
ENDLOG
((glColor4dPtr)(realFunctPtr[35]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4dv (CGLdoubleP v);
DEFINE_FUNC(36, glColor4dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(36)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 36;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glColor4dvPtr)(realFunctPtr[36]))(v); }

// GLCALLCONV void  glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
DEFINE_FUNC(37, glColor4f, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha))
IF_LOGGING(37)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 37;
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); LSSB(&alpha,GLfloat); 
ENDLOG
((glColor4fPtr)(realFunctPtr[37]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4fv (CGLfloatP v);
DEFINE_FUNC(38, glColor4fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(38)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 38;
LSSB(&v,CGLfloatP); 
ENDLOG
((glColor4fvPtr)(realFunctPtr[38]))(v); }

// GLCALLCONV void  glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
DEFINE_FUNC(39, glColor4i, GLCALLCONV, void, (GLint red, GLint green, GLint blue, GLint alpha))
IF_LOGGING(39)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 39;
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); LSSB(&alpha,GLint); 
ENDLOG
((glColor4iPtr)(realFunctPtr[39]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4iv (CGLintP v);
DEFINE_FUNC(40, glColor4iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(40)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 40;
LSSB(&v,CGLintP); 
ENDLOG
((glColor4ivPtr)(realFunctPtr[40]))(v); }

// GLCALLCONV void  glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
DEFINE_FUNC(41, glColor4s, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue, GLshort alpha))
IF_LOGGING(41)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 41;
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); LSSB(&alpha,GLshort); 
ENDLOG
((glColor4sPtr)(realFunctPtr[41]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4sv (CGLshortP v);
DEFINE_FUNC(42, glColor4sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(42)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 42;
LSSB(&v,CGLshortP); 
ENDLOG
((glColor4svPtr)(realFunctPtr[42]))(v); }

// GLCALLCONV void  glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
DEFINE_FUNC(43, glColor4ub, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha))
IF_LOGGING(43)
LS << MAGIC << HEADERSIZE  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) << ID_LOG << 43;
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); LSSB(&alpha,GLubyte); 
ENDLOG
((glColor4ubPtr)(realFunctPtr[43]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4ubv (CGLubyteP v);
DEFINE_FUNC(44, glColor4ubv, GLCALLCONV, void, (CGLubyteP v))
IF_LOGGING(44)
LS << MAGIC << HEADERSIZE  + sizeof(CGLubyteP) << ID_LOG << 44;
LSSB(&v,CGLubyteP); 
ENDLOG
((glColor4ubvPtr)(realFunctPtr[44]))(v); }

// GLCALLCONV void  glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
DEFINE_FUNC(45, glColor4ui, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue, GLuint alpha))
IF_LOGGING(45)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) << ID_LOG << 45;
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); LSSB(&alpha,GLuint); 
ENDLOG
((glColor4uiPtr)(realFunctPtr[45]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4uiv (CGLuintP v);
DEFINE_FUNC(46, glColor4uiv, GLCALLCONV, void, (CGLuintP v))
IF_LOGGING(46)
LS << MAGIC << HEADERSIZE  + sizeof(CGLuintP) << ID_LOG << 46;
LSSB(&v,CGLuintP); 
ENDLOG
((glColor4uivPtr)(realFunctPtr[46]))(v); }

// GLCALLCONV void  glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
DEFINE_FUNC(47, glColor4us, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue, GLushort alpha))
IF_LOGGING(47)
LS << MAGIC << HEADERSIZE  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) << ID_LOG << 47;
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); LSSB(&alpha,GLushort); 
ENDLOG
((glColor4usPtr)(realFunctPtr[47]))(red, green, blue, alpha); }

// GLCALLCONV void  glColor4usv (CGLushortP v);
DEFINE_FUNC(48, glColor4usv, GLCALLCONV, void, (CGLushortP v))
IF_LOGGING(48)
LS << MAGIC << HEADERSIZE  + sizeof(CGLushortP) << ID_LOG << 48;
LSSB(&v,CGLushortP); 
ENDLOG
((glColor4usvPtr)(realFunctPtr[48]))(v); }

// GLCALLCONV void  glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
DEFINE_FUNC(49, glColorMask, GLCALLCONV, void, (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha))
IF_LOGGING(49)
LS << MAGIC << HEADERSIZE  + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) << ID_LOG << 49;
LSSB(&red,GLboolean); LSSB(&green,GLboolean); LSSB(&blue,GLboolean); LSSB(&alpha,GLboolean); 
ENDLOG
((glColorMaskPtr)(realFunctPtr[49]))(red, green, blue, alpha); }

// GLCALLCONV void  glColorMaterial (GLenum face, GLenum mode);
DEFINE_FUNC(50, glColorMaterial, GLCALLCONV, void, (GLenum face, GLenum mode))
IF_LOGGING(50)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 50;
LSSB(&face,GLenum); LSSB(&mode,GLenum); 
ENDLOG
((glColorMaterialPtr)(realFunctPtr[50]))(face, mode); }

// GLCALLCONV void  glColorPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(51, glColorPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(51)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 51;
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glColorPointerPtr)(realFunctPtr[51]))(size, type, stride, pointer); }

// GLCALLCONV void  glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
DEFINE_FUNC(52, glCopyPixels, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type))
IF_LOGGING(52)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) << ID_LOG << 52;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&type,GLenum); 
ENDLOG
((glCopyPixelsPtr)(realFunctPtr[52]))(x, y, width, height, type); }

// GLCALLCONV void  glCopyTexImage1D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
DEFINE_FUNC(53, glCopyTexImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border))
IF_LOGGING(53)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) << ID_LOG << 53;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalFormat,GLenum); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&border,GLint); 
ENDLOG
((glCopyTexImage1DPtr)(realFunctPtr[53]))(target, level, internalFormat, x, y, width, border); }

// GLCALLCONV void  glCopyTexImage2D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
DEFINE_FUNC(54, glCopyTexImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border))
IF_LOGGING(54)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) << ID_LOG << 54;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalFormat,GLenum); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&border,GLint); 
ENDLOG
((glCopyTexImage2DPtr)(realFunctPtr[54]))(target, level, internalFormat, x, y, width, height, border); }

// GLCALLCONV void  glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
DEFINE_FUNC(55, glCopyTexSubImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width))
IF_LOGGING(55)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) << ID_LOG << 55;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); 
ENDLOG
((glCopyTexSubImage1DPtr)(realFunctPtr[55]))(target, level, xoffset, x, y, width); }

// GLCALLCONV void  glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(56, glCopyTexSubImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height))
IF_LOGGING(56)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) << ID_LOG << 56;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&yoffset,GLint); LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); 
ENDLOG
((glCopyTexSubImage2DPtr)(realFunctPtr[56]))(target, level, xoffset, yoffset, x, y, width, height); }

// GLCALLCONV void  glCullFace (GLenum mode);
DEFINE_FUNC(57, glCullFace, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(57)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 57;
LSSB(&mode,GLenum); 
ENDLOG
((glCullFacePtr)(realFunctPtr[57]))(mode); }

// GLCALLCONV void  glDeleteLists (GLuint list, GLsizei range);
DEFINE_FUNC(58, glDeleteLists, GLCALLCONV, void, (GLuint list, GLsizei range))
IF_LOGGING(58)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLsizei) << ID_LOG << 58;
LSSB(&list,GLuint); LSSB(&range,GLsizei); 
ENDLOG
((glDeleteListsPtr)(realFunctPtr[58]))(list, range); }

// GLCALLCONV void  glDeleteTextures (GLsizei n, CGLuintP textures);
DEFINE_FUNC(59, glDeleteTextures, GLCALLCONV, void, (GLsizei n, CGLuintP textures))
IF_LOGGING(59)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLuintP) << ID_LOG << 59;
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); 
ENDLOG
((glDeleteTexturesPtr)(realFunctPtr[59]))(n, textures); }

// GLCALLCONV void  glDepthFunc (GLenum func);
DEFINE_FUNC(60, glDepthFunc, GLCALLCONV, void, (GLenum func))
IF_LOGGING(60)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 60;
LSSB(&func,GLenum); 
ENDLOG
((glDepthFuncPtr)(realFunctPtr[60]))(func); }

// GLCALLCONV void  glDepthMask (GLboolean flag);
DEFINE_FUNC(61, glDepthMask, GLCALLCONV, void, (GLboolean flag))
IF_LOGGING(61)
LS << MAGIC << HEADERSIZE  + sizeof(GLboolean) << ID_LOG << 61;
LSSB(&flag,GLboolean); 
ENDLOG
((glDepthMaskPtr)(realFunctPtr[61]))(flag); }

// GLCALLCONV void  glDepthRange (GLclampd zNear, GLclampd zFar);
DEFINE_FUNC(62, glDepthRange, GLCALLCONV, void, (GLclampd zNear, GLclampd zFar))
IF_LOGGING(62)
LS << MAGIC << HEADERSIZE  + sizeof(GLclampd) + sizeof(GLclampd) << ID_LOG << 62;
LSSB(&zNear,GLclampd); LSSB(&zFar,GLclampd); 
ENDLOG
((glDepthRangePtr)(realFunctPtr[62]))(zNear, zFar); }

// GLCALLCONV void  glDisable (GLenum cap);
DEFINE_FUNC(63, glDisable, GLCALLCONV, void, (GLenum cap))
IF_LOGGING(63)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 63;
LSSB(&cap,GLenum); 
ENDLOG
((glDisablePtr)(realFunctPtr[63]))(cap); }

// GLCALLCONV void  glDisableClientState (GLenum array);
DEFINE_FUNC(64, glDisableClientState, GLCALLCONV, void, (GLenum array))
IF_LOGGING(64)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 64;
LSSB(&array,GLenum); 
ENDLOG
((glDisableClientStatePtr)(realFunctPtr[64]))(array); }

// GLCALLCONV void  glDrawArrays (GLenum mode, GLint first, GLsizei count);
DEFINE_FUNC(65, glDrawArrays, GLCALLCONV, void, (GLenum mode, GLint first, GLsizei count))
IF_LOGGING(65)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLsizei) << ID_LOG << 65;
LSSB(&mode,GLenum); LSSB(&first,GLint); LSSB(&count,GLsizei); 
ENDLOG
((glDrawArraysPtr)(realFunctPtr[65]))(mode, first, count); }

// GLCALLCONV void  glDrawBuffer (GLenum mode);
DEFINE_FUNC(66, glDrawBuffer, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(66)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 66;
LSSB(&mode,GLenum); 
ENDLOG
((glDrawBufferPtr)(realFunctPtr[66]))(mode); }

// GLCALLCONV void  glDrawElements (GLenum mode, GLsizei count, GLenum type, CGLvoidP indices);
DEFINE_FUNC(67, glDrawElements, GLCALLCONV, void, (GLenum mode, GLsizei count, GLenum type, CGLvoidP indices))
IF_LOGGING(67)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 67;
LSSB(&mode,GLenum); LSSB(&count,GLsizei); LSSB(&type,GLenum); LSSB(&indices,CGLvoidP); 
ENDLOG
((glDrawElementsPtr)(realFunctPtr[67]))(mode, count, type, indices); }

// GLCALLCONV void  glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(68, glDrawPixels, GLCALLCONV, void, (GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels))
IF_LOGGING(68)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 68;
LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
((glDrawPixelsPtr)(realFunctPtr[68]))(width, height, format, type, pixels); }

// GLCALLCONV void  glEdgeFlag (GLboolean flag);
DEFINE_FUNC(69, glEdgeFlag, GLCALLCONV, void, (GLboolean flag))
IF_LOGGING(69)
LS << MAGIC << HEADERSIZE  + sizeof(GLboolean) << ID_LOG << 69;
LSSB(&flag,GLboolean); 
ENDLOG
((glEdgeFlagPtr)(realFunctPtr[69]))(flag); }

// GLCALLCONV void  glEdgeFlagPointer (GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(70, glEdgeFlagPointer, GLCALLCONV, void, (GLsizei stride, CGLvoidP pointer))
IF_LOGGING(70)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 70;
LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glEdgeFlagPointerPtr)(realFunctPtr[70]))(stride, pointer); }

// GLCALLCONV void  glEdgeFlagv (CGLbooleanP flag);
DEFINE_FUNC(71, glEdgeFlagv, GLCALLCONV, void, (CGLbooleanP flag))
IF_LOGGING(71)
LS << MAGIC << HEADERSIZE  + sizeof(CGLbooleanP) << ID_LOG << 71;
LSSB(&flag,CGLbooleanP); 
ENDLOG
((glEdgeFlagvPtr)(realFunctPtr[71]))(flag); }

// GLCALLCONV void  glEnable (GLenum cap);
DEFINE_FUNC(72, glEnable, GLCALLCONV, void, (GLenum cap))
IF_LOGGING(72)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 72;
LSSB(&cap,GLenum); 
ENDLOG
((glEnablePtr)(realFunctPtr[72]))(cap); }

// GLCALLCONV void  glEnableClientState (GLenum array);
DEFINE_FUNC(73, glEnableClientState, GLCALLCONV, void, (GLenum array))
IF_LOGGING(73)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 73;
LSSB(&array,GLenum); 
ENDLOG
((glEnableClientStatePtr)(realFunctPtr[73]))(array); }

// GLCALLCONV void  glEnd ();
DEFINE_FUNC(74, glEnd, GLCALLCONV, void, ())
IF_LOGGING(74)
LS << MAGIC << HEADERSIZE  << ID_LOG << 74;
ENDLOG
((glEndPtr)(realFunctPtr[74]))(); }

// GLCALLCONV void  glEndList ();
DEFINE_FUNC(75, glEndList, GLCALLCONV, void, ())
IF_LOGGING(75)
LS << MAGIC << HEADERSIZE  << ID_LOG << 75;
ENDLOG
((glEndListPtr)(realFunctPtr[75]))(); }

// GLCALLCONV void  glEvalCoord1d (GLdouble u);
DEFINE_FUNC(76, glEvalCoord1d, GLCALLCONV, void, (GLdouble u))
IF_LOGGING(76)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) << ID_LOG << 76;
LSSB(&u,GLdouble); 
ENDLOG
((glEvalCoord1dPtr)(realFunctPtr[76]))(u); }

// GLCALLCONV void  glEvalCoord1dv (CGLdoubleP u);
DEFINE_FUNC(77, glEvalCoord1dv, GLCALLCONV, void, (CGLdoubleP u))
IF_LOGGING(77)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 77;
LSSB(&u,CGLdoubleP); 
ENDLOG
((glEvalCoord1dvPtr)(realFunctPtr[77]))(u); }

// GLCALLCONV void  glEvalCoord1f (GLfloat u);
DEFINE_FUNC(78, glEvalCoord1f, GLCALLCONV, void, (GLfloat u))
IF_LOGGING(78)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 78;
LSSB(&u,GLfloat); 
ENDLOG
((glEvalCoord1fPtr)(realFunctPtr[78]))(u); }

// GLCALLCONV void  glEvalCoord1fv (CGLfloatP u);
DEFINE_FUNC(79, glEvalCoord1fv, GLCALLCONV, void, (CGLfloatP u))
IF_LOGGING(79)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 79;
LSSB(&u,CGLfloatP); 
ENDLOG
((glEvalCoord1fvPtr)(realFunctPtr[79]))(u); }

// GLCALLCONV void  glEvalCoord2d (GLdouble u, GLdouble v);
DEFINE_FUNC(80, glEvalCoord2d, GLCALLCONV, void, (GLdouble u, GLdouble v))
IF_LOGGING(80)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 80;
LSSB(&u,GLdouble); LSSB(&v,GLdouble); 
ENDLOG
((glEvalCoord2dPtr)(realFunctPtr[80]))(u, v); }

// GLCALLCONV void  glEvalCoord2dv (CGLdoubleP u);
DEFINE_FUNC(81, glEvalCoord2dv, GLCALLCONV, void, (CGLdoubleP u))
IF_LOGGING(81)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 81;
LSSB(&u,CGLdoubleP); 
ENDLOG
((glEvalCoord2dvPtr)(realFunctPtr[81]))(u); }

// GLCALLCONV void  glEvalCoord2f (GLfloat u, GLfloat v);
DEFINE_FUNC(82, glEvalCoord2f, GLCALLCONV, void, (GLfloat u, GLfloat v))
IF_LOGGING(82)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 82;
LSSB(&u,GLfloat); LSSB(&v,GLfloat); 
ENDLOG
((glEvalCoord2fPtr)(realFunctPtr[82]))(u, v); }

// GLCALLCONV void  glEvalCoord2fv (CGLfloatP u);
DEFINE_FUNC(83, glEvalCoord2fv, GLCALLCONV, void, (CGLfloatP u))
IF_LOGGING(83)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 83;
LSSB(&u,CGLfloatP); 
ENDLOG
((glEvalCoord2fvPtr)(realFunctPtr[83]))(u); }

// GLCALLCONV void  glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
DEFINE_FUNC(84, glEvalMesh1, GLCALLCONV, void, (GLenum mode, GLint i1, GLint i2))
IF_LOGGING(84)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 84;
LSSB(&mode,GLenum); LSSB(&i1,GLint); LSSB(&i2,GLint); 
ENDLOG
((glEvalMesh1Ptr)(realFunctPtr[84]))(mode, i1, i2); }

// GLCALLCONV void  glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
DEFINE_FUNC(85, glEvalMesh2, GLCALLCONV, void, (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2))
IF_LOGGING(85)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 85;
LSSB(&mode,GLenum); LSSB(&i1,GLint); LSSB(&i2,GLint); LSSB(&j1,GLint); LSSB(&j2,GLint); 
ENDLOG
((glEvalMesh2Ptr)(realFunctPtr[85]))(mode, i1, i2, j1, j2); }

// GLCALLCONV void  glEvalPoint1 (GLint i);
DEFINE_FUNC(86, glEvalPoint1, GLCALLCONV, void, (GLint i))
IF_LOGGING(86)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) << ID_LOG << 86;
LSSB(&i,GLint); 
ENDLOG
((glEvalPoint1Ptr)(realFunctPtr[86]))(i); }

// GLCALLCONV void  glEvalPoint2 (GLint i, GLint j);
DEFINE_FUNC(87, glEvalPoint2, GLCALLCONV, void, (GLint i, GLint j))
IF_LOGGING(87)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) << ID_LOG << 87;
LSSB(&i,GLint); LSSB(&j,GLint); 
ENDLOG
((glEvalPoint2Ptr)(realFunctPtr[87]))(i, j); }

// GLCALLCONV void  glFeedbackBuffer (GLsizei size, GLenum type, GLfloatP buffer);
DEFINE_FUNC(88, glFeedbackBuffer, GLCALLCONV, void, (GLsizei size, GLenum type, GLfloatP buffer))
IF_LOGGING(88)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 88;
LSSB(&size,GLsizei); LSSB(&type,GLenum); LSSB(&buffer,GLfloatP); 
ENDLOG
((glFeedbackBufferPtr)(realFunctPtr[88]))(size, type, buffer); }

// GLCALLCONV void  glFinish ();
DEFINE_FUNC(89, glFinish, GLCALLCONV, void, ())
IF_LOGGING(89)
LS << MAGIC << HEADERSIZE  << ID_LOG << 89;
ENDLOG
((glFinishPtr)(realFunctPtr[89]))(); }

// GLCALLCONV void  glFlush ();
DEFINE_FUNC(90, glFlush, GLCALLCONV, void, ())
IF_LOGGING(90)
LS << MAGIC << HEADERSIZE  << ID_LOG << 90;
ENDLOG
((glFlushPtr)(realFunctPtr[90]))(); }

// GLCALLCONV void  glFogf (GLenum pname, GLfloat param);
DEFINE_FUNC(91, glFogf, GLCALLCONV, void, (GLenum pname, GLfloat param))
IF_LOGGING(91)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 91;
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glFogfPtr)(realFunctPtr[91]))(pname, param); }

// GLCALLCONV void  glFogfv (GLenum pname, CGLfloatP params);
DEFINE_FUNC(92, glFogfv, GLCALLCONV, void, (GLenum pname, CGLfloatP params))
IF_LOGGING(92)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 92;
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glFogfvPtr)(realFunctPtr[92]))(pname, params); }

// GLCALLCONV void  glFogi (GLenum pname, GLint param);
DEFINE_FUNC(93, glFogi, GLCALLCONV, void, (GLenum pname, GLint param))
IF_LOGGING(93)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 93;
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glFogiPtr)(realFunctPtr[93]))(pname, param); }

// GLCALLCONV void  glFogiv (GLenum pname, CGLintP params);
DEFINE_FUNC(94, glFogiv, GLCALLCONV, void, (GLenum pname, CGLintP params))
IF_LOGGING(94)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 94;
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glFogivPtr)(realFunctPtr[94]))(pname, params); }

// GLCALLCONV void  glFrontFace (GLenum mode);
DEFINE_FUNC(95, glFrontFace, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(95)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 95;
LSSB(&mode,GLenum); 
ENDLOG
((glFrontFacePtr)(realFunctPtr[95]))(mode); }

// GLCALLCONV void  glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
DEFINE_FUNC(96, glFrustum, GLCALLCONV, void, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar))
IF_LOGGING(96)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 96;
LSSB(&left,GLdouble); LSSB(&right,GLdouble); LSSB(&bottom,GLdouble); LSSB(&top,GLdouble); LSSB(&zNear,GLdouble); LSSB(&zFar,GLdouble); 
ENDLOG
((glFrustumPtr)(realFunctPtr[96]))(left, right, bottom, top, zNear, zFar); }

// GLCALLCONV GLuint  glGenLists (GLsizei range);
DEFINE_FUNC(97, glGenLists, GLCALLCONV, GLuint, (GLsizei range))
IF_LOGGING(97)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) << ID_LOG << 97;
LSSB(&range,GLsizei); 
ENDLOG
return ((glGenListsPtr)(realFunctPtr[97]))(range); }

// GLCALLCONV void  glGenTextures (GLsizei n, GLuintP textures);
DEFINE_FUNC(98, glGenTextures, GLCALLCONV, void, (GLsizei n, GLuintP textures))
IF_LOGGING(98)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLuintP) << ID_LOG << 98;
LSSB(&n,GLsizei); LSSB(&textures,GLuintP); 
ENDLOG
((glGenTexturesPtr)(realFunctPtr[98]))(n, textures); }

// GLCALLCONV void GlmfBeginGlsBlock(DWORD dwArg1);
DEFINE_FUNC(99, GlmfBeginGlsBlock, GLCALLCONV, void, (DWORD dwArg1))
IF_LOGGING(99)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) << ID_LOG << 99;
LSSB(&dwArg1,DWORD); 
ENDLOG
((GlmfBeginGlsBlockPtr)(realFunctPtr[99]))(dwArg1); }

// GLCALLCONV void GlmfEndGlsBlock(DWORD dwArg1);
DEFINE_FUNC(100, GlmfEndGlsBlock, GLCALLCONV, void, (DWORD dwArg1))
IF_LOGGING(100)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) << ID_LOG << 100;
LSSB(&dwArg1,DWORD); 
ENDLOG
((GlmfEndGlsBlockPtr)(realFunctPtr[100]))(dwArg1); }

// GLCALLCONV void GlmfCloseMetaFile(DWORD dwArg1);
DEFINE_FUNC(101, GlmfCloseMetaFile, GLCALLCONV, void, (DWORD dwArg1))
IF_LOGGING(101)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) << ID_LOG << 101;
LSSB(&dwArg1,DWORD); 
ENDLOG
((GlmfCloseMetaFilePtr)(realFunctPtr[101]))(dwArg1); }

// GLCALLCONV void GlmfEndPlayback(DWORD dwArg1);
DEFINE_FUNC(102, GlmfEndPlayback, GLCALLCONV, void, (DWORD dwArg1))
IF_LOGGING(102)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) << ID_LOG << 102;
LSSB(&dwArg1,DWORD); 
ENDLOG
((GlmfEndPlaybackPtr)(realFunctPtr[102]))(dwArg1); }

// GLCALLCONV void GlmfInitPlayback(DWORD dwArg1, DWORD dwArg2, DWORD dwArg3);
DEFINE_FUNC(103, GlmfInitPlayback, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2, DWORD dwArg3))
IF_LOGGING(103)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) << ID_LOG << 103;
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); LSSB(&dwArg3,DWORD); 
ENDLOG
((GlmfInitPlaybackPtr)(realFunctPtr[103]))(dwArg1, dwArg2, dwArg3); }

// GLCALLCONV void GlmfPlayGlsRecord(DWORD dwArg1, DWORD dwArg2, DWORD dwArg3,DWORD dwArg4);
DEFINE_FUNC(104, GlmfPlayGlsRecord, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2, DWORD dwArg3,DWORD dwArg4))
IF_LOGGING(104)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) << ID_LOG << 104;
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); LSSB(&dwArg3,DWORD); LSSB(&dwArg4,DWORD); 
ENDLOG
((GlmfPlayGlsRecordPtr)(realFunctPtr[104]))(dwArg1, dwArg2, dwArg3, dwArg4); }

// GLCALLCONV void glDebugEntry(DWORD dwArg1, DWORD dwArg2);
DEFINE_FUNC(105, glDebugEntry, GLCALLCONV, void, (DWORD dwArg1, DWORD dwArg2))
IF_LOGGING(105)
LS << MAGIC << HEADERSIZE  + sizeof(DWORD) + sizeof(DWORD) << ID_LOG << 105;
LSSB(&dwArg1,DWORD); LSSB(&dwArg2,DWORD); 
ENDLOG
((glDebugEntryPtr)(realFunctPtr[105]))(dwArg1, dwArg2); }

// GLCALLCONV void  glGetBooleanv (GLenum pname, GLbooleanP params);
DEFINE_FUNC(106, glGetBooleanv, GLCALLCONV, void, (GLenum pname, GLbooleanP params))
IF_LOGGING(106)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLbooleanP) << ID_LOG << 106;
LSSB(&pname,GLenum); LSSB(&params,GLbooleanP); 
ENDLOG
((glGetBooleanvPtr)(realFunctPtr[106]))(pname, params); }

// GLCALLCONV void  glGetClipPlane (GLenum plane, GLdoubleP equation);
DEFINE_FUNC(107, glGetClipPlane, GLCALLCONV, void, (GLenum plane, GLdoubleP equation))
IF_LOGGING(107)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdoubleP) << ID_LOG << 107;
LSSB(&plane,GLenum); LSSB(&equation,GLdoubleP); 
ENDLOG
((glGetClipPlanePtr)(realFunctPtr[107]))(plane, equation); }

// GLCALLCONV void  glGetDoublev (GLenum pname, GLdoubleP params);
DEFINE_FUNC(108, glGetDoublev, GLCALLCONV, void, (GLenum pname, GLdoubleP params))
IF_LOGGING(108)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdoubleP) << ID_LOG << 108;
LSSB(&pname,GLenum); LSSB(&params,GLdoubleP); 
ENDLOG
((glGetDoublevPtr)(realFunctPtr[108]))(pname, params); }

// GLCALLCONV GLenum  glGetError ();
DEFINE_FUNC(109, glGetError, GLCALLCONV, GLenum, ())
IF_LOGGING(109)
LS << MAGIC << HEADERSIZE  << ID_LOG << 109;
ENDLOG
return ((glGetErrorPtr)(realFunctPtr[109]))(); }

// GLCALLCONV void  glGetFloatv (GLenum pname, GLfloatP params);
DEFINE_FUNC(110, glGetFloatv, GLCALLCONV, void, (GLenum pname, GLfloatP params))
IF_LOGGING(110)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 110;
LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetFloatvPtr)(realFunctPtr[110]))(pname, params); }

// GLCALLCONV void  glGetIntegerv (GLenum pname, GLintP params);
DEFINE_FUNC(111, glGetIntegerv, GLCALLCONV, void, (GLenum pname, GLintP params))
IF_LOGGING(111)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 111;
LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetIntegervPtr)(realFunctPtr[111]))(pname, params); }

// GLCALLCONV void  glGetLightfv (GLenum light, GLenum pname, GLfloatP params);
DEFINE_FUNC(112, glGetLightfv, GLCALLCONV, void, (GLenum light, GLenum pname, GLfloatP params))
IF_LOGGING(112)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 112;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetLightfvPtr)(realFunctPtr[112]))(light, pname, params); }

// GLCALLCONV void  glGetLightiv (GLenum light, GLenum pname, GLintP params);
DEFINE_FUNC(113, glGetLightiv, GLCALLCONV, void, (GLenum light, GLenum pname, GLintP params))
IF_LOGGING(113)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 113;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetLightivPtr)(realFunctPtr[113]))(light, pname, params); }

// GLCALLCONV void  glGetMapdv (GLenum target, GLenum query, GLdoubleP v);
DEFINE_FUNC(114, glGetMapdv, GLCALLCONV, void, (GLenum target, GLenum query, GLdoubleP v))
IF_LOGGING(114)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) << ID_LOG << 114;
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLdoubleP); 
ENDLOG
((glGetMapdvPtr)(realFunctPtr[114]))(target, query, v); }

// GLCALLCONV void  glGetMapfv (GLenum target, GLenum query, GLfloatP v);
DEFINE_FUNC(115, glGetMapfv, GLCALLCONV, void, (GLenum target, GLenum query, GLfloatP v))
IF_LOGGING(115)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 115;
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLfloatP); 
ENDLOG
((glGetMapfvPtr)(realFunctPtr[115]))(target, query, v); }

// GLCALLCONV void  glGetMapiv (GLenum target, GLenum query, GLintP v);
DEFINE_FUNC(116, glGetMapiv, GLCALLCONV, void, (GLenum target, GLenum query, GLintP v))
IF_LOGGING(116)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 116;
LSSB(&target,GLenum); LSSB(&query,GLenum); LSSB(&v,GLintP); 
ENDLOG
((glGetMapivPtr)(realFunctPtr[116]))(target, query, v); }

// GLCALLCONV void  glGetMaterialfv (GLenum face, GLenum pname, GLfloatP params);
DEFINE_FUNC(117, glGetMaterialfv, GLCALLCONV, void, (GLenum face, GLenum pname, GLfloatP params))
IF_LOGGING(117)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 117;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetMaterialfvPtr)(realFunctPtr[117]))(face, pname, params); }

// GLCALLCONV void  glGetMaterialiv (GLenum face, GLenum pname, GLintP params);
DEFINE_FUNC(118, glGetMaterialiv, GLCALLCONV, void, (GLenum face, GLenum pname, GLintP params))
IF_LOGGING(118)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 118;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetMaterialivPtr)(realFunctPtr[118]))(face, pname, params); }

// GLCALLCONV void  glGetPixelMapfv (GLenum map, GLfloatP values);
DEFINE_FUNC(119, glGetPixelMapfv, GLCALLCONV, void, (GLenum map, GLfloatP values))
IF_LOGGING(119)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 119;
LSSB(&map,GLenum); LSSB(&values,GLfloatP); 
ENDLOG
((glGetPixelMapfvPtr)(realFunctPtr[119]))(map, values); }

// GLCALLCONV void  glGetPixelMapuiv (GLenum map, GLuintP values);
DEFINE_FUNC(120, glGetPixelMapuiv, GLCALLCONV, void, (GLenum map, GLuintP values))
IF_LOGGING(120)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLuintP) << ID_LOG << 120;
LSSB(&map,GLenum); LSSB(&values,GLuintP); 
ENDLOG
((glGetPixelMapuivPtr)(realFunctPtr[120]))(map, values); }

// GLCALLCONV void  glGetPixelMapusv (GLenum map, GLushortP values);
DEFINE_FUNC(121, glGetPixelMapusv, GLCALLCONV, void, (GLenum map, GLushortP values))
IF_LOGGING(121)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLushortP) << ID_LOG << 121;
LSSB(&map,GLenum); LSSB(&values,GLushortP); 
ENDLOG
((glGetPixelMapusvPtr)(realFunctPtr[121]))(map, values); }

// GLCALLCONV void  glGetPointerv (GLenum pname, GLvoidPP params);
DEFINE_FUNC(122, glGetPointerv, GLCALLCONV, void, (GLenum pname, GLvoidPP params))
IF_LOGGING(122)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLvoidPP) << ID_LOG << 122;
LSSB(&pname,GLenum); LSSB(&params,GLvoidPP); 
ENDLOG
((glGetPointervPtr)(realFunctPtr[122]))(pname, params); }

// GLCALLCONV void  glGetPolygonStipple (GLubyteP mask);
DEFINE_FUNC(123, glGetPolygonStipple, GLCALLCONV, void, (GLubyteP mask))
IF_LOGGING(123)
LS << MAGIC << HEADERSIZE  + sizeof(GLubyteP) << ID_LOG << 123;
LSSB(&mask,GLubyteP); 
ENDLOG
((glGetPolygonStipplePtr)(realFunctPtr[123]))(mask); }

// GLCALLCONV CGLubyteP   glGetString (GLenum name);
DEFINE_FUNC(124, glGetString, GLCALLCONV, CGLubyteP, (GLenum name))
IF_LOGGING(124)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 124;
LSSB(&name,GLenum); 
ENDLOG
return ((glGetStringPtr)(realFunctPtr[124]))(name); }

// GLCALLCONV void  glGetTexEnvfv (GLenum target, GLenum pname, GLfloatP params);
DEFINE_FUNC(125, glGetTexEnvfv, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloatP params))
IF_LOGGING(125)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 125;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetTexEnvfvPtr)(realFunctPtr[125]))(target, pname, params); }

// GLCALLCONV void  glGetTexEnviv (GLenum target, GLenum pname, GLintP params);
DEFINE_FUNC(126, glGetTexEnviv, GLCALLCONV, void, (GLenum target, GLenum pname, GLintP params))
IF_LOGGING(126)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 126;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetTexEnvivPtr)(realFunctPtr[126]))(target, pname, params); }

// GLCALLCONV void  glGetTexGendv (GLenum coord, GLenum pname, GLdoubleP params);
DEFINE_FUNC(127, glGetTexGendv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLdoubleP params))
IF_LOGGING(127)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) << ID_LOG << 127;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLdoubleP); 
ENDLOG
((glGetTexGendvPtr)(realFunctPtr[127]))(coord, pname, params); }

// GLCALLCONV void  glGetTexGenfv (GLenum coord, GLenum pname, GLfloatP params);
DEFINE_FUNC(128, glGetTexGenfv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLfloatP params))
IF_LOGGING(128)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 128;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetTexGenfvPtr)(realFunctPtr[128]))(coord, pname, params); }

// GLCALLCONV void  glGetTexGeniv (GLenum coord, GLenum pname, GLintP params);
DEFINE_FUNC(129, glGetTexGeniv, GLCALLCONV, void, (GLenum coord, GLenum pname, GLintP params))
IF_LOGGING(129)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 129;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetTexGenivPtr)(realFunctPtr[129]))(coord, pname, params); }

// GLCALLCONV void  glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoidP pixels);
DEFINE_FUNC(130, glGetTexImage, GLCALLCONV, void, (GLenum target, GLint level, GLenum format, GLenum type, GLvoidP pixels))
IF_LOGGING(130)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) << ID_LOG << 130;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,GLvoidP); 
ENDLOG
((glGetTexImagePtr)(realFunctPtr[130]))(target, level, format, type, pixels); }

// GLCALLCONV void  glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloatP params);
DEFINE_FUNC(131, glGetTexLevelParameterfv, GLCALLCONV, void, (GLenum target, GLint level, GLenum pname, GLfloatP params))
IF_LOGGING(131)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 131;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetTexLevelParameterfvPtr)(realFunctPtr[131]))(target, level, pname, params); }

// GLCALLCONV void  glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLintP params);
DEFINE_FUNC(132, glGetTexLevelParameteriv, GLCALLCONV, void, (GLenum target, GLint level, GLenum pname, GLintP params))
IF_LOGGING(132)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 132;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetTexLevelParameterivPtr)(realFunctPtr[132]))(target, level, pname, params); }

// GLCALLCONV void  glGetTexParameterfv (GLenum target, GLenum pname, GLfloatP params);
DEFINE_FUNC(133, glGetTexParameterfv, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloatP params))
IF_LOGGING(133)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 133;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetTexParameterfvPtr)(realFunctPtr[133]))(target, pname, params); }

// GLCALLCONV void  glGetTexParameteriv (GLenum target, GLenum pname, GLintP params);
DEFINE_FUNC(134, glGetTexParameteriv, GLCALLCONV, void, (GLenum target, GLenum pname, GLintP params))
IF_LOGGING(134)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 134;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetTexParameterivPtr)(realFunctPtr[134]))(target, pname, params); }

// GLCALLCONV void  glHint (GLenum target, GLenum mode);
DEFINE_FUNC(135, glHint, GLCALLCONV, void, (GLenum target, GLenum mode))
IF_LOGGING(135)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 135;
LSSB(&target,GLenum); LSSB(&mode,GLenum); 
ENDLOG
((glHintPtr)(realFunctPtr[135]))(target, mode); }

// GLCALLCONV void  glIndexMask (GLuint mask);
DEFINE_FUNC(136, glIndexMask, GLCALLCONV, void, (GLuint mask))
IF_LOGGING(136)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 136;
LSSB(&mask,GLuint); 
ENDLOG
((glIndexMaskPtr)(realFunctPtr[136]))(mask); }

// GLCALLCONV void  glIndexPointer (GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(137, glIndexPointer, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(137)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 137;
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glIndexPointerPtr)(realFunctPtr[137]))(type, stride, pointer); }

// GLCALLCONV void  glIndexd (GLdouble c);
DEFINE_FUNC(138, glIndexd, GLCALLCONV, void, (GLdouble c))
IF_LOGGING(138)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) << ID_LOG << 138;
LSSB(&c,GLdouble); 
ENDLOG
((glIndexdPtr)(realFunctPtr[138]))(c); }

// GLCALLCONV void  glIndexdv (CGLdoubleP c);
DEFINE_FUNC(139, glIndexdv, GLCALLCONV, void, (CGLdoubleP c))
IF_LOGGING(139)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 139;
LSSB(&c,CGLdoubleP); 
ENDLOG
((glIndexdvPtr)(realFunctPtr[139]))(c); }

// GLCALLCONV void  glIndexf (GLfloat c);
DEFINE_FUNC(140, glIndexf, GLCALLCONV, void, (GLfloat c))
IF_LOGGING(140)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 140;
LSSB(&c,GLfloat); 
ENDLOG
((glIndexfPtr)(realFunctPtr[140]))(c); }

// GLCALLCONV void  glIndexfv (CGLfloatP c);
DEFINE_FUNC(141, glIndexfv, GLCALLCONV, void, (CGLfloatP c))
IF_LOGGING(141)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 141;
LSSB(&c,CGLfloatP); 
ENDLOG
((glIndexfvPtr)(realFunctPtr[141]))(c); }

// GLCALLCONV void  glIndexi (GLint c);
DEFINE_FUNC(142, glIndexi, GLCALLCONV, void, (GLint c))
IF_LOGGING(142)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) << ID_LOG << 142;
LSSB(&c,GLint); 
ENDLOG
((glIndexiPtr)(realFunctPtr[142]))(c); }

// GLCALLCONV void  glIndexiv (CGLintP c);
DEFINE_FUNC(143, glIndexiv, GLCALLCONV, void, (CGLintP c))
IF_LOGGING(143)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 143;
LSSB(&c,CGLintP); 
ENDLOG
((glIndexivPtr)(realFunctPtr[143]))(c); }

// GLCALLCONV void  glIndexs (GLshort c);
DEFINE_FUNC(144, glIndexs, GLCALLCONV, void, (GLshort c))
IF_LOGGING(144)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) << ID_LOG << 144;
LSSB(&c,GLshort); 
ENDLOG
((glIndexsPtr)(realFunctPtr[144]))(c); }

// GLCALLCONV void  glIndexsv (CGLshortP c);
DEFINE_FUNC(145, glIndexsv, GLCALLCONV, void, (CGLshortP c))
IF_LOGGING(145)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 145;
LSSB(&c,CGLshortP); 
ENDLOG
((glIndexsvPtr)(realFunctPtr[145]))(c); }

// GLCALLCONV void  glIndexub (GLubyte c);
DEFINE_FUNC(146, glIndexub, GLCALLCONV, void, (GLubyte c))
IF_LOGGING(146)
LS << MAGIC << HEADERSIZE  + sizeof(GLubyte) << ID_LOG << 146;
LSSB(&c,GLubyte); 
ENDLOG
((glIndexubPtr)(realFunctPtr[146]))(c); }

// GLCALLCONV void  glIndexubv (CGLubyteP c);
DEFINE_FUNC(147, glIndexubv, GLCALLCONV, void, (CGLubyteP c))
IF_LOGGING(147)
LS << MAGIC << HEADERSIZE  + sizeof(CGLubyteP) << ID_LOG << 147;
LSSB(&c,CGLubyteP); 
ENDLOG
((glIndexubvPtr)(realFunctPtr[147]))(c); }

// GLCALLCONV void  glInitNames ();
DEFINE_FUNC(148, glInitNames, GLCALLCONV, void, ())
IF_LOGGING(148)
LS << MAGIC << HEADERSIZE  << ID_LOG << 148;
ENDLOG
((glInitNamesPtr)(realFunctPtr[148]))(); }

// GLCALLCONV void  glInterleavedArrays (GLenum format, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(149, glInterleavedArrays, GLCALLCONV, void, (GLenum format, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(149)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 149;
LSSB(&format,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glInterleavedArraysPtr)(realFunctPtr[149]))(format, stride, pointer); }

// GLCALLCONV GLboolean  glIsEnabled (GLenum cap);
DEFINE_FUNC(150, glIsEnabled, GLCALLCONV, GLboolean, (GLenum cap))
IF_LOGGING(150)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 150;
LSSB(&cap,GLenum); 
ENDLOG
return ((glIsEnabledPtr)(realFunctPtr[150]))(cap); }

// GLCALLCONV GLboolean  glIsList (GLuint list);
DEFINE_FUNC(151, glIsList, GLCALLCONV, GLboolean, (GLuint list))
IF_LOGGING(151)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 151;
LSSB(&list,GLuint); 
ENDLOG
return ((glIsListPtr)(realFunctPtr[151]))(list); }

// GLCALLCONV GLboolean  glIsTexture (GLuint texture);
DEFINE_FUNC(152, glIsTexture, GLCALLCONV, GLboolean, (GLuint texture))
IF_LOGGING(152)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 152;
LSSB(&texture,GLuint); 
ENDLOG
return ((glIsTexturePtr)(realFunctPtr[152]))(texture); }

// GLCALLCONV void  glLightModelf (GLenum pname, GLfloat param);
DEFINE_FUNC(153, glLightModelf, GLCALLCONV, void, (GLenum pname, GLfloat param))
IF_LOGGING(153)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 153;
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glLightModelfPtr)(realFunctPtr[153]))(pname, param); }

// GLCALLCONV void  glLightModelfv (GLenum pname, CGLfloatP params);
DEFINE_FUNC(154, glLightModelfv, GLCALLCONV, void, (GLenum pname, CGLfloatP params))
IF_LOGGING(154)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 154;
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glLightModelfvPtr)(realFunctPtr[154]))(pname, params); }

// GLCALLCONV void  glLightModeli (GLenum pname, GLint param);
DEFINE_FUNC(155, glLightModeli, GLCALLCONV, void, (GLenum pname, GLint param))
IF_LOGGING(155)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 155;
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glLightModeliPtr)(realFunctPtr[155]))(pname, param); }

// GLCALLCONV void  glLightModeliv (GLenum pname, CGLintP params);
DEFINE_FUNC(156, glLightModeliv, GLCALLCONV, void, (GLenum pname, CGLintP params))
IF_LOGGING(156)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 156;
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glLightModelivPtr)(realFunctPtr[156]))(pname, params); }

// GLCALLCONV void  glLightf (GLenum light, GLenum pname, GLfloat param);
DEFINE_FUNC(157, glLightf, GLCALLCONV, void, (GLenum light, GLenum pname, GLfloat param))
IF_LOGGING(157)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 157;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glLightfPtr)(realFunctPtr[157]))(light, pname, param); }

// GLCALLCONV void  glLightfv (GLenum light, GLenum pname, CGLfloatP params);
DEFINE_FUNC(158, glLightfv, GLCALLCONV, void, (GLenum light, GLenum pname, CGLfloatP params))
IF_LOGGING(158)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 158;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glLightfvPtr)(realFunctPtr[158]))(light, pname, params); }

// GLCALLCONV void  glLighti (GLenum light, GLenum pname, GLint param);
DEFINE_FUNC(159, glLighti, GLCALLCONV, void, (GLenum light, GLenum pname, GLint param))
IF_LOGGING(159)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 159;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glLightiPtr)(realFunctPtr[159]))(light, pname, param); }

// GLCALLCONV void  glLightiv (GLenum light, GLenum pname, CGLintP params);
DEFINE_FUNC(160, glLightiv, GLCALLCONV, void, (GLenum light, GLenum pname, CGLintP params))
IF_LOGGING(160)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 160;
LSSB(&light,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glLightivPtr)(realFunctPtr[160]))(light, pname, params); }

// GLCALLCONV void  glLineStipple (GLint factor, GLushort pattern);
DEFINE_FUNC(161, glLineStipple, GLCALLCONV, void, (GLint factor, GLushort pattern))
IF_LOGGING(161)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLushort) << ID_LOG << 161;
LSSB(&factor,GLint); LSSB(&pattern,GLushort); 
ENDLOG
((glLineStipplePtr)(realFunctPtr[161]))(factor, pattern); }

// GLCALLCONV void  glLineWidth (GLfloat width);
DEFINE_FUNC(162, glLineWidth, GLCALLCONV, void, (GLfloat width))
IF_LOGGING(162)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 162;
LSSB(&width,GLfloat); 
ENDLOG
((glLineWidthPtr)(realFunctPtr[162]))(width); }

// GLCALLCONV void  glListBase (GLuint base);
DEFINE_FUNC(163, glListBase, GLCALLCONV, void, (GLuint base))
IF_LOGGING(163)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 163;
LSSB(&base,GLuint); 
ENDLOG
((glListBasePtr)(realFunctPtr[163]))(base); }

// GLCALLCONV void  glLoadIdentity ();
DEFINE_FUNC(164, glLoadIdentity, GLCALLCONV, void, ())
IF_LOGGING(164)
LS << MAGIC << HEADERSIZE  << ID_LOG << 164;
ENDLOG
((glLoadIdentityPtr)(realFunctPtr[164]))(); }

// GLCALLCONV void  glLoadMatrixd (CGLdoubleP m);
DEFINE_FUNC(165, glLoadMatrixd, GLCALLCONV, void, (CGLdoubleP m))
IF_LOGGING(165)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 165;
LSSB(&m,CGLdoubleP); 
ENDLOG
((glLoadMatrixdPtr)(realFunctPtr[165]))(m); }

// GLCALLCONV void  glLoadMatrixf (CGLfloatP m);
DEFINE_FUNC(166, glLoadMatrixf, GLCALLCONV, void, (CGLfloatP m))
IF_LOGGING(166)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 166;
LSSB(&m,CGLfloatP); 
ENDLOG
((glLoadMatrixfPtr)(realFunctPtr[166]))(m); }

// GLCALLCONV void  glLoadName (GLuint name);
DEFINE_FUNC(167, glLoadName, GLCALLCONV, void, (GLuint name))
IF_LOGGING(167)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 167;
LSSB(&name,GLuint); 
ENDLOG
((glLoadNamePtr)(realFunctPtr[167]))(name); }

// GLCALLCONV void  glLogicOp (GLenum opcode);
DEFINE_FUNC(168, glLogicOp, GLCALLCONV, void, (GLenum opcode))
IF_LOGGING(168)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 168;
LSSB(&opcode,GLenum); 
ENDLOG
((glLogicOpPtr)(realFunctPtr[168]))(opcode); }

// GLCALLCONV void  glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, CGLdoubleP points);
DEFINE_FUNC(169, glMap1d, GLCALLCONV, void, (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, CGLdoubleP points))
IF_LOGGING(169)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLdoubleP) << ID_LOG << 169;
LSSB(&target,GLenum); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&stride,GLint); LSSB(&order,GLint); LSSB(&points,CGLdoubleP); 
ENDLOG
((glMap1dPtr)(realFunctPtr[169]))(target, u1, u2, stride, order, points); }

// GLCALLCONV void  glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, CGLfloatP points);
DEFINE_FUNC(170, glMap1f, GLCALLCONV, void, (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, CGLfloatP points))
IF_LOGGING(170)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLfloatP) << ID_LOG << 170;
LSSB(&target,GLenum); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&stride,GLint); LSSB(&order,GLint); LSSB(&points,CGLfloatP); 
ENDLOG
((glMap1fPtr)(realFunctPtr[170]))(target, u1, u2, stride, order, points); }

// GLCALLCONV void  glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, CGLdoubleP points);
DEFINE_FUNC(171, glMap2d, GLCALLCONV, void, (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, CGLdoubleP points))
IF_LOGGING(171)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLdoubleP) << ID_LOG << 171;
LSSB(&target,GLenum); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&ustride,GLint); LSSB(&uorder,GLint); LSSB(&v1,GLdouble); LSSB(&v2,GLdouble); LSSB(&vstride,GLint); LSSB(&vorder,GLint); LSSB(&points,CGLdoubleP); 
ENDLOG
((glMap2dPtr)(realFunctPtr[171]))(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }

// GLCALLCONV void  glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, CGLfloatP points);
DEFINE_FUNC(172, glMap2f, GLCALLCONV, void, (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, CGLfloatP points))
IF_LOGGING(172)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(CGLfloatP) << ID_LOG << 172;
LSSB(&target,GLenum); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&ustride,GLint); LSSB(&uorder,GLint); LSSB(&v1,GLfloat); LSSB(&v2,GLfloat); LSSB(&vstride,GLint); LSSB(&vorder,GLint); LSSB(&points,CGLfloatP); 
ENDLOG
((glMap2fPtr)(realFunctPtr[172]))(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }

// GLCALLCONV void  glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
DEFINE_FUNC(173, glMapGrid1d, GLCALLCONV, void, (GLint un, GLdouble u1, GLdouble u2))
IF_LOGGING(173)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 173;
LSSB(&un,GLint); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); 
ENDLOG
((glMapGrid1dPtr)(realFunctPtr[173]))(un, u1, u2); }

// GLCALLCONV void  glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
DEFINE_FUNC(174, glMapGrid1f, GLCALLCONV, void, (GLint un, GLfloat u1, GLfloat u2))
IF_LOGGING(174)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 174;
LSSB(&un,GLint); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); 
ENDLOG
((glMapGrid1fPtr)(realFunctPtr[174]))(un, u1, u2); }

// GLCALLCONV void  glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
DEFINE_FUNC(175, glMapGrid2d, GLCALLCONV, void, (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2))
IF_LOGGING(175)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 175;
LSSB(&un,GLint); LSSB(&u1,GLdouble); LSSB(&u2,GLdouble); LSSB(&vn,GLint); LSSB(&v1,GLdouble); LSSB(&v2,GLdouble); 
ENDLOG
((glMapGrid2dPtr)(realFunctPtr[175]))(un, u1, u2, vn, v1, v2); }

// GLCALLCONV void  glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
DEFINE_FUNC(176, glMapGrid2f, GLCALLCONV, void, (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2))
IF_LOGGING(176)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 176;
LSSB(&un,GLint); LSSB(&u1,GLfloat); LSSB(&u2,GLfloat); LSSB(&vn,GLint); LSSB(&v1,GLfloat); LSSB(&v2,GLfloat); 
ENDLOG
((glMapGrid2fPtr)(realFunctPtr[176]))(un, u1, u2, vn, v1, v2); }

// GLCALLCONV void  glMaterialf (GLenum face, GLenum pname, GLfloat param);
DEFINE_FUNC(177, glMaterialf, GLCALLCONV, void, (GLenum face, GLenum pname, GLfloat param))
IF_LOGGING(177)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 177;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glMaterialfPtr)(realFunctPtr[177]))(face, pname, param); }

// GLCALLCONV void  glMaterialfv (GLenum face, GLenum pname, CGLfloatP params);
DEFINE_FUNC(178, glMaterialfv, GLCALLCONV, void, (GLenum face, GLenum pname, CGLfloatP params))
IF_LOGGING(178)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 178;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glMaterialfvPtr)(realFunctPtr[178]))(face, pname, params); }

// GLCALLCONV void  glMateriali (GLenum face, GLenum pname, GLint param);
DEFINE_FUNC(179, glMateriali, GLCALLCONV, void, (GLenum face, GLenum pname, GLint param))
IF_LOGGING(179)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 179;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glMaterialiPtr)(realFunctPtr[179]))(face, pname, param); }

// GLCALLCONV void  glMaterialiv (GLenum face, GLenum pname, CGLintP params);
DEFINE_FUNC(180, glMaterialiv, GLCALLCONV, void, (GLenum face, GLenum pname, CGLintP params))
IF_LOGGING(180)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 180;
LSSB(&face,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glMaterialivPtr)(realFunctPtr[180]))(face, pname, params); }

// GLCALLCONV void  glMatrixMode (GLenum mode);
DEFINE_FUNC(181, glMatrixMode, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(181)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 181;
LSSB(&mode,GLenum); 
ENDLOG
((glMatrixModePtr)(realFunctPtr[181]))(mode); }

// GLCALLCONV void  glMultMatrixd (CGLdoubleP m);
DEFINE_FUNC(182, glMultMatrixd, GLCALLCONV, void, (CGLdoubleP m))
IF_LOGGING(182)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 182;
LSSB(&m,CGLdoubleP); 
ENDLOG
((glMultMatrixdPtr)(realFunctPtr[182]))(m); }

// GLCALLCONV void  glMultMatrixf (CGLfloatP m);
DEFINE_FUNC(183, glMultMatrixf, GLCALLCONV, void, (CGLfloatP m))
IF_LOGGING(183)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 183;
LSSB(&m,CGLfloatP); 
ENDLOG
((glMultMatrixfPtr)(realFunctPtr[183]))(m); }

// GLCALLCONV void  glNewList (GLuint list, GLenum mode);
DEFINE_FUNC(184, glNewList, GLCALLCONV, void, (GLuint list, GLenum mode))
IF_LOGGING(184)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLenum) << ID_LOG << 184;
LSSB(&list,GLuint); LSSB(&mode,GLenum); 
ENDLOG
((glNewListPtr)(realFunctPtr[184]))(list, mode); }

// GLCALLCONV void  glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
DEFINE_FUNC(185, glNormal3b, GLCALLCONV, void, (GLbyte nx, GLbyte ny, GLbyte nz))
IF_LOGGING(185)
LS << MAGIC << HEADERSIZE  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) << ID_LOG << 185;
LSSB(&nx,GLbyte); LSSB(&ny,GLbyte); LSSB(&nz,GLbyte); 
ENDLOG
((glNormal3bPtr)(realFunctPtr[185]))(nx, ny, nz); }

// GLCALLCONV void  glNormal3bv (CGLbyteP v);
DEFINE_FUNC(186, glNormal3bv, GLCALLCONV, void, (CGLbyteP v))
IF_LOGGING(186)
LS << MAGIC << HEADERSIZE  + sizeof(CGLbyteP) << ID_LOG << 186;
LSSB(&v,CGLbyteP); 
ENDLOG
((glNormal3bvPtr)(realFunctPtr[186]))(v); }

// GLCALLCONV void  glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
DEFINE_FUNC(187, glNormal3d, GLCALLCONV, void, (GLdouble nx, GLdouble ny, GLdouble nz))
IF_LOGGING(187)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 187;
LSSB(&nx,GLdouble); LSSB(&ny,GLdouble); LSSB(&nz,GLdouble); 
ENDLOG
((glNormal3dPtr)(realFunctPtr[187]))(nx, ny, nz); }

// GLCALLCONV void  glNormal3dv (CGLdoubleP v);
DEFINE_FUNC(188, glNormal3dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(188)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 188;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glNormal3dvPtr)(realFunctPtr[188]))(v); }

// GLCALLCONV void  glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
DEFINE_FUNC(189, glNormal3f, GLCALLCONV, void, (GLfloat nx, GLfloat ny, GLfloat nz))
IF_LOGGING(189)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 189;
LSSB(&nx,GLfloat); LSSB(&ny,GLfloat); LSSB(&nz,GLfloat); 
ENDLOG
((glNormal3fPtr)(realFunctPtr[189]))(nx, ny, nz); }

// GLCALLCONV void  glNormal3fv (CGLfloatP v);
DEFINE_FUNC(190, glNormal3fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(190)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 190;
LSSB(&v,CGLfloatP); 
ENDLOG
((glNormal3fvPtr)(realFunctPtr[190]))(v); }

// GLCALLCONV void  glNormal3i (GLint nx, GLint ny, GLint nz);
DEFINE_FUNC(191, glNormal3i, GLCALLCONV, void, (GLint nx, GLint ny, GLint nz))
IF_LOGGING(191)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 191;
LSSB(&nx,GLint); LSSB(&ny,GLint); LSSB(&nz,GLint); 
ENDLOG
((glNormal3iPtr)(realFunctPtr[191]))(nx, ny, nz); }

// GLCALLCONV void  glNormal3iv (CGLintP v);
DEFINE_FUNC(192, glNormal3iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(192)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 192;
LSSB(&v,CGLintP); 
ENDLOG
((glNormal3ivPtr)(realFunctPtr[192]))(v); }

// GLCALLCONV void  glNormal3s (GLshort nx, GLshort ny, GLshort nz);
DEFINE_FUNC(193, glNormal3s, GLCALLCONV, void, (GLshort nx, GLshort ny, GLshort nz))
IF_LOGGING(193)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 193;
LSSB(&nx,GLshort); LSSB(&ny,GLshort); LSSB(&nz,GLshort); 
ENDLOG
((glNormal3sPtr)(realFunctPtr[193]))(nx, ny, nz); }

// GLCALLCONV void  glNormal3sv (CGLshortP v);
DEFINE_FUNC(194, glNormal3sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(194)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 194;
LSSB(&v,CGLshortP); 
ENDLOG
((glNormal3svPtr)(realFunctPtr[194]))(v); }

// GLCALLCONV void  glNormalPointer (GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(195, glNormalPointer, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(195)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 195;
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glNormalPointerPtr)(realFunctPtr[195]))(type, stride, pointer); }

// GLCALLCONV void  glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
DEFINE_FUNC(196, glOrtho, GLCALLCONV, void, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar))
IF_LOGGING(196)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 196;
LSSB(&left,GLdouble); LSSB(&right,GLdouble); LSSB(&bottom,GLdouble); LSSB(&top,GLdouble); LSSB(&zNear,GLdouble); LSSB(&zFar,GLdouble); 
ENDLOG
((glOrthoPtr)(realFunctPtr[196]))(left, right, bottom, top, zNear, zFar); }

// GLCALLCONV void  glPassThrough (GLfloat token);
DEFINE_FUNC(197, glPassThrough, GLCALLCONV, void, (GLfloat token))
IF_LOGGING(197)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 197;
LSSB(&token,GLfloat); 
ENDLOG
((glPassThroughPtr)(realFunctPtr[197]))(token); }

// GLCALLCONV void  glPixelMapfv (GLenum map, GLsizei mapsize, CGLfloatP values);
DEFINE_FUNC(198, glPixelMapfv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLfloatP values))
IF_LOGGING(198)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLfloatP) << ID_LOG << 198;
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLfloatP); 
ENDLOG
((glPixelMapfvPtr)(realFunctPtr[198]))(map, mapsize, values); }

// GLCALLCONV void  glPixelMapuiv (GLenum map, GLsizei mapsize, CGLuintP values);
DEFINE_FUNC(199, glPixelMapuiv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLuintP values))
IF_LOGGING(199)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLuintP) << ID_LOG << 199;
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLuintP); 
ENDLOG
((glPixelMapuivPtr)(realFunctPtr[199]))(map, mapsize, values); }

// GLCALLCONV void  glPixelMapusv (GLenum map, GLsizei mapsize, CGLushortP values);
DEFINE_FUNC(200, glPixelMapusv, GLCALLCONV, void, (GLenum map, GLsizei mapsize, CGLushortP values))
IF_LOGGING(200)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLushortP) << ID_LOG << 200;
LSSB(&map,GLenum); LSSB(&mapsize,GLsizei); LSSB(&values,CGLushortP); 
ENDLOG
((glPixelMapusvPtr)(realFunctPtr[200]))(map, mapsize, values); }

// GLCALLCONV void  glPixelStoref (GLenum pname, GLfloat param);
DEFINE_FUNC(201, glPixelStoref, GLCALLCONV, void, (GLenum pname, GLfloat param))
IF_LOGGING(201)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 201;
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glPixelStorefPtr)(realFunctPtr[201]))(pname, param); }

// GLCALLCONV void  glPixelStorei (GLenum pname, GLint param);
DEFINE_FUNC(202, glPixelStorei, GLCALLCONV, void, (GLenum pname, GLint param))
IF_LOGGING(202)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 202;
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glPixelStoreiPtr)(realFunctPtr[202]))(pname, param); }

// GLCALLCONV void  glPixelTransferf (GLenum pname, GLfloat param);
DEFINE_FUNC(203, glPixelTransferf, GLCALLCONV, void, (GLenum pname, GLfloat param))
IF_LOGGING(203)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 203;
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glPixelTransferfPtr)(realFunctPtr[203]))(pname, param); }

// GLCALLCONV void  glPixelTransferi (GLenum pname, GLint param);
DEFINE_FUNC(204, glPixelTransferi, GLCALLCONV, void, (GLenum pname, GLint param))
IF_LOGGING(204)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 204;
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glPixelTransferiPtr)(realFunctPtr[204]))(pname, param); }

// GLCALLCONV void  glPixelZoom (GLfloat xfactor, GLfloat yfactor);
DEFINE_FUNC(205, glPixelZoom, GLCALLCONV, void, (GLfloat xfactor, GLfloat yfactor))
IF_LOGGING(205)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 205;
LSSB(&xfactor,GLfloat); LSSB(&yfactor,GLfloat); 
ENDLOG
((glPixelZoomPtr)(realFunctPtr[205]))(xfactor, yfactor); }

// GLCALLCONV void  glPointSize (GLfloat size);
DEFINE_FUNC(206, glPointSize, GLCALLCONV, void, (GLfloat size))
IF_LOGGING(206)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 206;
LSSB(&size,GLfloat); 
ENDLOG
((glPointSizePtr)(realFunctPtr[206]))(size); }

// GLCALLCONV void  glPolygonMode (GLenum face, GLenum mode);
DEFINE_FUNC(207, glPolygonMode, GLCALLCONV, void, (GLenum face, GLenum mode))
IF_LOGGING(207)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 207;
LSSB(&face,GLenum); LSSB(&mode,GLenum); 
ENDLOG
if (!suppressGlPolygonMode)
((glPolygonModePtr)(realFunctPtr[207]))(face, mode); }

// GLCALLCONV void  glPolygonOffset (GLfloat factor, GLfloat units);
DEFINE_FUNC(208, glPolygonOffset, GLCALLCONV, void, (GLfloat factor, GLfloat units))
IF_LOGGING(208)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 208;
LSSB(&factor,GLfloat); LSSB(&units,GLfloat); 
ENDLOG
((glPolygonOffsetPtr)(realFunctPtr[208]))(factor, units); }

// GLCALLCONV void  glPolygonStipple (CGLubyteP mask);
DEFINE_FUNC(209, glPolygonStipple, GLCALLCONV, void, (CGLubyteP mask))
IF_LOGGING(209)
LS << MAGIC << HEADERSIZE  + sizeof(CGLubyteP) << ID_LOG << 209;
LSSB(&mask,CGLubyteP); 
ENDLOG
((glPolygonStipplePtr)(realFunctPtr[209]))(mask); }

// GLCALLCONV void  glPopAttrib ();
DEFINE_FUNC(210, glPopAttrib, GLCALLCONV, void, ())
IF_LOGGING(210)
LS << MAGIC << HEADERSIZE  << ID_LOG << 210;
ENDLOG
((glPopAttribPtr)(realFunctPtr[210]))(); }

// GLCALLCONV void  glPopClientAttrib ();
DEFINE_FUNC(211, glPopClientAttrib, GLCALLCONV, void, ())
IF_LOGGING(211)
LS << MAGIC << HEADERSIZE  << ID_LOG << 211;
ENDLOG
((glPopClientAttribPtr)(realFunctPtr[211]))(); }

// GLCALLCONV void  glPopMatrix ();
DEFINE_FUNC(212, glPopMatrix, GLCALLCONV, void, ())
IF_LOGGING(212)
LS << MAGIC << HEADERSIZE  << ID_LOG << 212;
ENDLOG
((glPopMatrixPtr)(realFunctPtr[212]))(); }

// GLCALLCONV void  glPopName ();
DEFINE_FUNC(213, glPopName, GLCALLCONV, void, ())
IF_LOGGING(213)
LS << MAGIC << HEADERSIZE  << ID_LOG << 213;
ENDLOG
((glPopNamePtr)(realFunctPtr[213]))(); }

// GLCALLCONV void  glPrioritizeTextures (GLsizei n, CGLuintP textures, CGLclampfP priorities);
DEFINE_FUNC(214, glPrioritizeTextures, GLCALLCONV, void, (GLsizei n, CGLuintP textures, CGLclampfP priorities))
IF_LOGGING(214)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(CGLclampfP) << ID_LOG << 214;
LSSB(&n,GLsizei); LSSB(&textures,CGLuintP); LSSB(&priorities,CGLclampfP); 
ENDLOG
((glPrioritizeTexturesPtr)(realFunctPtr[214]))(n, textures, priorities); }

// GLCALLCONV void  glPushAttrib (GLbitfield mask);
DEFINE_FUNC(215, glPushAttrib, GLCALLCONV, void, (GLbitfield mask))
IF_LOGGING(215)
LS << MAGIC << HEADERSIZE  + sizeof(GLbitfield) << ID_LOG << 215;
LSSB(&mask,GLbitfield); 
ENDLOG
((glPushAttribPtr)(realFunctPtr[215]))(mask); }

// GLCALLCONV void  glPushClientAttrib (GLbitfield mask);
DEFINE_FUNC(216, glPushClientAttrib, GLCALLCONV, void, (GLbitfield mask))
IF_LOGGING(216)
LS << MAGIC << HEADERSIZE  + sizeof(GLbitfield) << ID_LOG << 216;
LSSB(&mask,GLbitfield); 
ENDLOG
((glPushClientAttribPtr)(realFunctPtr[216]))(mask); }

// GLCALLCONV void  glPushMatrix ();
DEFINE_FUNC(217, glPushMatrix, GLCALLCONV, void, ())
IF_LOGGING(217)
LS << MAGIC << HEADERSIZE  << ID_LOG << 217;
ENDLOG
((glPushMatrixPtr)(realFunctPtr[217]))(); }

// GLCALLCONV void  glPushName (GLuint name);
DEFINE_FUNC(218, glPushName, GLCALLCONV, void, (GLuint name))
IF_LOGGING(218)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 218;
LSSB(&name,GLuint); 
ENDLOG
((glPushNamePtr)(realFunctPtr[218]))(name); }

// GLCALLCONV void  glRasterPos2d (GLdouble x, GLdouble y);
DEFINE_FUNC(219, glRasterPos2d, GLCALLCONV, void, (GLdouble x, GLdouble y))
IF_LOGGING(219)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 219;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); 
ENDLOG
((glRasterPos2dPtr)(realFunctPtr[219]))(x, y); }

// GLCALLCONV void  glRasterPos2dv (CGLdoubleP v);
DEFINE_FUNC(220, glRasterPos2dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(220)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 220;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glRasterPos2dvPtr)(realFunctPtr[220]))(v); }

// GLCALLCONV void  glRasterPos2f (GLfloat x, GLfloat y);
DEFINE_FUNC(221, glRasterPos2f, GLCALLCONV, void, (GLfloat x, GLfloat y))
IF_LOGGING(221)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 221;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); 
ENDLOG
((glRasterPos2fPtr)(realFunctPtr[221]))(x, y); }

// GLCALLCONV void  glRasterPos2fv (CGLfloatP v);
DEFINE_FUNC(222, glRasterPos2fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(222)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 222;
LSSB(&v,CGLfloatP); 
ENDLOG
((glRasterPos2fvPtr)(realFunctPtr[222]))(v); }

// GLCALLCONV void  glRasterPos2i (GLint x, GLint y);
DEFINE_FUNC(223, glRasterPos2i, GLCALLCONV, void, (GLint x, GLint y))
IF_LOGGING(223)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) << ID_LOG << 223;
LSSB(&x,GLint); LSSB(&y,GLint); 
ENDLOG
((glRasterPos2iPtr)(realFunctPtr[223]))(x, y); }

// GLCALLCONV void  glRasterPos2iv (CGLintP v);
DEFINE_FUNC(224, glRasterPos2iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(224)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 224;
LSSB(&v,CGLintP); 
ENDLOG
((glRasterPos2ivPtr)(realFunctPtr[224]))(v); }

// GLCALLCONV void  glRasterPos2s (GLshort x, GLshort y);
DEFINE_FUNC(225, glRasterPos2s, GLCALLCONV, void, (GLshort x, GLshort y))
IF_LOGGING(225)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 225;
LSSB(&x,GLshort); LSSB(&y,GLshort); 
ENDLOG
((glRasterPos2sPtr)(realFunctPtr[225]))(x, y); }

// GLCALLCONV void  glRasterPos2sv (CGLshortP v);
DEFINE_FUNC(226, glRasterPos2sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(226)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 226;
LSSB(&v,CGLshortP); 
ENDLOG
((glRasterPos2svPtr)(realFunctPtr[226]))(v); }

// GLCALLCONV void  glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(227, glRasterPos3d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))
IF_LOGGING(227)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 227;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
((glRasterPos3dPtr)(realFunctPtr[227]))(x, y, z); }

// GLCALLCONV void  glRasterPos3dv (CGLdoubleP v);
DEFINE_FUNC(228, glRasterPos3dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(228)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 228;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glRasterPos3dvPtr)(realFunctPtr[228]))(v); }

// GLCALLCONV void  glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(229, glRasterPos3f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))
IF_LOGGING(229)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 229;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
((glRasterPos3fPtr)(realFunctPtr[229]))(x, y, z); }

// GLCALLCONV void  glRasterPos3fv (CGLfloatP v);
DEFINE_FUNC(230, glRasterPos3fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(230)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 230;
LSSB(&v,CGLfloatP); 
ENDLOG
((glRasterPos3fvPtr)(realFunctPtr[230]))(v); }

// GLCALLCONV void  glRasterPos3i (GLint x, GLint y, GLint z);
DEFINE_FUNC(231, glRasterPos3i, GLCALLCONV, void, (GLint x, GLint y, GLint z))
IF_LOGGING(231)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 231;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); 
ENDLOG
((glRasterPos3iPtr)(realFunctPtr[231]))(x, y, z); }

// GLCALLCONV void  glRasterPos3iv (CGLintP v);
DEFINE_FUNC(232, glRasterPos3iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(232)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 232;
LSSB(&v,CGLintP); 
ENDLOG
((glRasterPos3ivPtr)(realFunctPtr[232]))(v); }

// GLCALLCONV void  glRasterPos3s (GLshort x, GLshort y, GLshort z);
DEFINE_FUNC(233, glRasterPos3s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z))
IF_LOGGING(233)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 233;
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); 
ENDLOG
((glRasterPos3sPtr)(realFunctPtr[233]))(x, y, z); }

// GLCALLCONV void  glRasterPos3sv (CGLshortP v);
DEFINE_FUNC(234, glRasterPos3sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(234)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 234;
LSSB(&v,CGLshortP); 
ENDLOG
((glRasterPos3svPtr)(realFunctPtr[234]))(v); }

// GLCALLCONV void  glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
DEFINE_FUNC(235, glRasterPos4d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z, GLdouble w))
IF_LOGGING(235)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 235;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); LSSB(&w,GLdouble); 
ENDLOG
((glRasterPos4dPtr)(realFunctPtr[235]))(x, y, z, w); }

// GLCALLCONV void  glRasterPos4dv (CGLdoubleP v);
DEFINE_FUNC(236, glRasterPos4dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(236)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 236;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glRasterPos4dvPtr)(realFunctPtr[236]))(v); }

// GLCALLCONV void  glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
DEFINE_FUNC(237, glRasterPos4f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z, GLfloat w))
IF_LOGGING(237)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 237;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); LSSB(&w,GLfloat); 
ENDLOG
((glRasterPos4fPtr)(realFunctPtr[237]))(x, y, z, w); }

// GLCALLCONV void  glRasterPos4fv (CGLfloatP v);
DEFINE_FUNC(238, glRasterPos4fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(238)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 238;
LSSB(&v,CGLfloatP); 
ENDLOG
((glRasterPos4fvPtr)(realFunctPtr[238]))(v); }

// GLCALLCONV void  glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
DEFINE_FUNC(239, glRasterPos4i, GLCALLCONV, void, (GLint x, GLint y, GLint z, GLint w))
IF_LOGGING(239)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 239;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); LSSB(&w,GLint); 
ENDLOG
((glRasterPos4iPtr)(realFunctPtr[239]))(x, y, z, w); }

// GLCALLCONV void  glRasterPos4iv (CGLintP v);
DEFINE_FUNC(240, glRasterPos4iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(240)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 240;
LSSB(&v,CGLintP); 
ENDLOG
((glRasterPos4ivPtr)(realFunctPtr[240]))(v); }

// GLCALLCONV void  glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
DEFINE_FUNC(241, glRasterPos4s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z, GLshort w))
IF_LOGGING(241)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 241;
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); LSSB(&w,GLshort); 
ENDLOG
((glRasterPos4sPtr)(realFunctPtr[241]))(x, y, z, w); }

// GLCALLCONV void  glRasterPos4sv (CGLshortP v);
DEFINE_FUNC(242, glRasterPos4sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(242)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 242;
LSSB(&v,CGLshortP); 
ENDLOG
((glRasterPos4svPtr)(realFunctPtr[242]))(v); }

// GLCALLCONV void  glReadBuffer (GLenum mode);
DEFINE_FUNC(243, glReadBuffer, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(243)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 243;
LSSB(&mode,GLenum); 
ENDLOG
((glReadBufferPtr)(realFunctPtr[243]))(mode); }

// GLCALLCONV void  glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoidP pixels);
DEFINE_FUNC(244, glReadPixels, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoidP pixels))
IF_LOGGING(244)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) << ID_LOG << 244;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,GLvoidP); 
ENDLOG
((glReadPixelsPtr)(realFunctPtr[244]))(x, y, width, height, format, type, pixels); }

// GLCALLCONV void  glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
DEFINE_FUNC(245, glRectd, GLCALLCONV, void, (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2))
IF_LOGGING(245)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 245;
LSSB(&x1,GLdouble); LSSB(&y1,GLdouble); LSSB(&x2,GLdouble); LSSB(&y2,GLdouble); 
ENDLOG
((glRectdPtr)(realFunctPtr[245]))(x1, y1, x2, y2); }

// GLCALLCONV void  glRectdv (CGLdoubleP v1, CGLdoubleP v2);
DEFINE_FUNC(246, glRectdv, GLCALLCONV, void, (CGLdoubleP v1, CGLdoubleP v2))
IF_LOGGING(246)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) + sizeof(CGLdoubleP) << ID_LOG << 246;
LSSB(&v1,CGLdoubleP); LSSB(&v2,CGLdoubleP); 
ENDLOG
((glRectdvPtr)(realFunctPtr[246]))(v1, v2); }

// GLCALLCONV void  glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
DEFINE_FUNC(247, glRectf, GLCALLCONV, void, (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2))
IF_LOGGING(247)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 247;
LSSB(&x1,GLfloat); LSSB(&y1,GLfloat); LSSB(&x2,GLfloat); LSSB(&y2,GLfloat); 
ENDLOG
((glRectfPtr)(realFunctPtr[247]))(x1, y1, x2, y2); }

// GLCALLCONV void  glRectfv (CGLfloatP v1, CGLfloatP v2);
DEFINE_FUNC(248, glRectfv, GLCALLCONV, void, (CGLfloatP v1, CGLfloatP v2))
IF_LOGGING(248)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) + sizeof(CGLfloatP) << ID_LOG << 248;
LSSB(&v1,CGLfloatP); LSSB(&v2,CGLfloatP); 
ENDLOG
((glRectfvPtr)(realFunctPtr[248]))(v1, v2); }

// GLCALLCONV void  glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
DEFINE_FUNC(249, glRecti, GLCALLCONV, void, (GLint x1, GLint y1, GLint x2, GLint y2))
IF_LOGGING(249)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 249;
LSSB(&x1,GLint); LSSB(&y1,GLint); LSSB(&x2,GLint); LSSB(&y2,GLint); 
ENDLOG
((glRectiPtr)(realFunctPtr[249]))(x1, y1, x2, y2); }

// GLCALLCONV void  glRectiv (CGLintP v1, CGLintP v2);
DEFINE_FUNC(250, glRectiv, GLCALLCONV, void, (CGLintP v1, CGLintP v2))
IF_LOGGING(250)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) + sizeof(CGLintP) << ID_LOG << 250;
LSSB(&v1,CGLintP); LSSB(&v2,CGLintP); 
ENDLOG
((glRectivPtr)(realFunctPtr[250]))(v1, v2); }

// GLCALLCONV void  glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
DEFINE_FUNC(251, glRects, GLCALLCONV, void, (GLshort x1, GLshort y1, GLshort x2, GLshort y2))
IF_LOGGING(251)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 251;
LSSB(&x1,GLshort); LSSB(&y1,GLshort); LSSB(&x2,GLshort); LSSB(&y2,GLshort); 
ENDLOG
((glRectsPtr)(realFunctPtr[251]))(x1, y1, x2, y2); }

// GLCALLCONV void  glRectsv (CGLshortP v1, CGLshortP v2);
DEFINE_FUNC(252, glRectsv, GLCALLCONV, void, (CGLshortP v1, CGLshortP v2))
IF_LOGGING(252)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) + sizeof(CGLshortP) << ID_LOG << 252;
LSSB(&v1,CGLshortP); LSSB(&v2,CGLshortP); 
ENDLOG
((glRectsvPtr)(realFunctPtr[252]))(v1, v2); }

// GLCALLCONV GLint  glRenderMode (GLenum mode);
DEFINE_FUNC(253, glRenderMode, GLCALLCONV, GLint, (GLenum mode))
IF_LOGGING(253)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 253;
LSSB(&mode,GLenum); 
ENDLOG
return ((glRenderModePtr)(realFunctPtr[253]))(mode); }

// GLCALLCONV void  glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(254, glRotated, GLCALLCONV, void, (GLdouble angle, GLdouble x, GLdouble y, GLdouble z))
IF_LOGGING(254)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 254;
LSSB(&angle,GLdouble); LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
((glRotatedPtr)(realFunctPtr[254]))(angle, x, y, z); }

// GLCALLCONV void  glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(255, glRotatef, GLCALLCONV, void, (GLfloat angle, GLfloat x, GLfloat y, GLfloat z))
IF_LOGGING(255)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 255;
LSSB(&angle,GLfloat); LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
((glRotatefPtr)(realFunctPtr[255]))(angle, x, y, z); }

// GLCALLCONV void  glScaled (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(256, glScaled, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))
IF_LOGGING(256)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 256;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
((glScaledPtr)(realFunctPtr[256]))(x, y, z); }

// GLCALLCONV void  glScalef (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(257, glScalef, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))
IF_LOGGING(257)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 257;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
((glScalefPtr)(realFunctPtr[257]))(x, y, z); }

// GLCALLCONV void  glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(258, glScissor, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height))
IF_LOGGING(258)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) << ID_LOG << 258;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); 
ENDLOG
((glScissorPtr)(realFunctPtr[258]))(x, y, width, height); }

// GLCALLCONV void  glSelectBuffer (GLsizei size, GLuintP buffer);
DEFINE_FUNC(259, glSelectBuffer, GLCALLCONV, void, (GLsizei size, GLuintP buffer))
IF_LOGGING(259)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLuintP) << ID_LOG << 259;
LSSB(&size,GLsizei); LSSB(&buffer,GLuintP); 
ENDLOG
((glSelectBufferPtr)(realFunctPtr[259]))(size, buffer); }

// GLCALLCONV void  glShadeModel (GLenum mode);
DEFINE_FUNC(260, glShadeModel, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(260)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 260;
LSSB(&mode,GLenum); 
ENDLOG
((glShadeModelPtr)(realFunctPtr[260]))(mode); }

// GLCALLCONV void  glStencilFunc (GLenum func, GLint ref, GLuint mask);
DEFINE_FUNC(261, glStencilFunc, GLCALLCONV, void, (GLenum func, GLint ref, GLuint mask))
IF_LOGGING(261)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLuint) << ID_LOG << 261;
LSSB(&func,GLenum); LSSB(&ref,GLint); LSSB(&mask,GLuint); 
ENDLOG
((glStencilFuncPtr)(realFunctPtr[261]))(func, ref, mask); }

// GLCALLCONV void  glStencilMask (GLuint mask);
DEFINE_FUNC(262, glStencilMask, GLCALLCONV, void, (GLuint mask))
IF_LOGGING(262)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 262;
LSSB(&mask,GLuint); 
ENDLOG
((glStencilMaskPtr)(realFunctPtr[262]))(mask); }

// GLCALLCONV void  glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
DEFINE_FUNC(263, glStencilOp, GLCALLCONV, void, (GLenum fail, GLenum zfail, GLenum zpass))
IF_LOGGING(263)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 263;
LSSB(&fail,GLenum); LSSB(&zfail,GLenum); LSSB(&zpass,GLenum); 
ENDLOG
((glStencilOpPtr)(realFunctPtr[263]))(fail, zfail, zpass); }

// GLCALLCONV void  glTexCoord1d (GLdouble s);
DEFINE_FUNC(264, glTexCoord1d, GLCALLCONV, void, (GLdouble s))
IF_LOGGING(264)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) << ID_LOG << 264;
LSSB(&s,GLdouble); 
ENDLOG
((glTexCoord1dPtr)(realFunctPtr[264]))(s); }

// GLCALLCONV void  glTexCoord1dv (CGLdoubleP v);
DEFINE_FUNC(265, glTexCoord1dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(265)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 265;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glTexCoord1dvPtr)(realFunctPtr[265]))(v); }

// GLCALLCONV void  glTexCoord1f (GLfloat s);
DEFINE_FUNC(266, glTexCoord1f, GLCALLCONV, void, (GLfloat s))
IF_LOGGING(266)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 266;
LSSB(&s,GLfloat); 
ENDLOG
((glTexCoord1fPtr)(realFunctPtr[266]))(s); }

// GLCALLCONV void  glTexCoord1fv (CGLfloatP v);
DEFINE_FUNC(267, glTexCoord1fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(267)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 267;
LSSB(&v,CGLfloatP); 
ENDLOG
((glTexCoord1fvPtr)(realFunctPtr[267]))(v); }

// GLCALLCONV void  glTexCoord1i (GLint s);
DEFINE_FUNC(268, glTexCoord1i, GLCALLCONV, void, (GLint s))
IF_LOGGING(268)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) << ID_LOG << 268;
LSSB(&s,GLint); 
ENDLOG
((glTexCoord1iPtr)(realFunctPtr[268]))(s); }

// GLCALLCONV void  glTexCoord1iv (CGLintP v);
DEFINE_FUNC(269, glTexCoord1iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(269)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 269;
LSSB(&v,CGLintP); 
ENDLOG
((glTexCoord1ivPtr)(realFunctPtr[269]))(v); }

// GLCALLCONV void  glTexCoord1s (GLshort s);
DEFINE_FUNC(270, glTexCoord1s, GLCALLCONV, void, (GLshort s))
IF_LOGGING(270)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) << ID_LOG << 270;
LSSB(&s,GLshort); 
ENDLOG
((glTexCoord1sPtr)(realFunctPtr[270]))(s); }

// GLCALLCONV void  glTexCoord1sv (CGLshortP v);
DEFINE_FUNC(271, glTexCoord1sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(271)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 271;
LSSB(&v,CGLshortP); 
ENDLOG
((glTexCoord1svPtr)(realFunctPtr[271]))(v); }

// GLCALLCONV void  glTexCoord2d (GLdouble s, GLdouble t);
DEFINE_FUNC(272, glTexCoord2d, GLCALLCONV, void, (GLdouble s, GLdouble t))
IF_LOGGING(272)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 272;
LSSB(&s,GLdouble); LSSB(&t,GLdouble); 
ENDLOG
((glTexCoord2dPtr)(realFunctPtr[272]))(s, t); }

// GLCALLCONV void  glTexCoord2dv (CGLdoubleP v);
DEFINE_FUNC(273, glTexCoord2dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(273)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 273;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glTexCoord2dvPtr)(realFunctPtr[273]))(v); }

// GLCALLCONV void  glTexCoord2f (GLfloat s, GLfloat t);
DEFINE_FUNC(274, glTexCoord2f, GLCALLCONV, void, (GLfloat s, GLfloat t))
IF_LOGGING(274)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 274;
LSSB(&s,GLfloat); LSSB(&t,GLfloat); 
ENDLOG
((glTexCoord2fPtr)(realFunctPtr[274]))(s, t); }

// GLCALLCONV void  glTexCoord2fv (CGLfloatP v);
DEFINE_FUNC(275, glTexCoord2fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(275)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 275;
LSSB(&v,CGLfloatP); 
ENDLOG
((glTexCoord2fvPtr)(realFunctPtr[275]))(v); }

// GLCALLCONV void  glTexCoord2i (GLint s, GLint t);
DEFINE_FUNC(276, glTexCoord2i, GLCALLCONV, void, (GLint s, GLint t))
IF_LOGGING(276)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) << ID_LOG << 276;
LSSB(&s,GLint); LSSB(&t,GLint); 
ENDLOG
((glTexCoord2iPtr)(realFunctPtr[276]))(s, t); }

// GLCALLCONV void  glTexCoord2iv (CGLintP v);
DEFINE_FUNC(277, glTexCoord2iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(277)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 277;
LSSB(&v,CGLintP); 
ENDLOG
((glTexCoord2ivPtr)(realFunctPtr[277]))(v); }

// GLCALLCONV void  glTexCoord2s (GLshort s, GLshort t);
DEFINE_FUNC(278, glTexCoord2s, GLCALLCONV, void, (GLshort s, GLshort t))
IF_LOGGING(278)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 278;
LSSB(&s,GLshort); LSSB(&t,GLshort); 
ENDLOG
((glTexCoord2sPtr)(realFunctPtr[278]))(s, t); }

// GLCALLCONV void  glTexCoord2sv (CGLshortP v);
DEFINE_FUNC(279, glTexCoord2sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(279)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 279;
LSSB(&v,CGLshortP); 
ENDLOG
((glTexCoord2svPtr)(realFunctPtr[279]))(v); }

// GLCALLCONV void  glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
DEFINE_FUNC(280, glTexCoord3d, GLCALLCONV, void, (GLdouble s, GLdouble t, GLdouble r))
IF_LOGGING(280)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 280;
LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); 
ENDLOG
((glTexCoord3dPtr)(realFunctPtr[280]))(s, t, r); }

// GLCALLCONV void  glTexCoord3dv (CGLdoubleP v);
DEFINE_FUNC(281, glTexCoord3dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(281)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 281;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glTexCoord3dvPtr)(realFunctPtr[281]))(v); }

// GLCALLCONV void  glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
DEFINE_FUNC(282, glTexCoord3f, GLCALLCONV, void, (GLfloat s, GLfloat t, GLfloat r))
IF_LOGGING(282)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 282;
LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); 
ENDLOG
((glTexCoord3fPtr)(realFunctPtr[282]))(s, t, r); }

// GLCALLCONV void  glTexCoord3fv (CGLfloatP v);
DEFINE_FUNC(283, glTexCoord3fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(283)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 283;
LSSB(&v,CGLfloatP); 
ENDLOG
((glTexCoord3fvPtr)(realFunctPtr[283]))(v); }

// GLCALLCONV void  glTexCoord3i (GLint s, GLint t, GLint r);
DEFINE_FUNC(284, glTexCoord3i, GLCALLCONV, void, (GLint s, GLint t, GLint r))
IF_LOGGING(284)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 284;
LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); 
ENDLOG
((glTexCoord3iPtr)(realFunctPtr[284]))(s, t, r); }

// GLCALLCONV void  glTexCoord3iv (CGLintP v);
DEFINE_FUNC(285, glTexCoord3iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(285)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 285;
LSSB(&v,CGLintP); 
ENDLOG
((glTexCoord3ivPtr)(realFunctPtr[285]))(v); }

// GLCALLCONV void  glTexCoord3s (GLshort s, GLshort t, GLshort r);
DEFINE_FUNC(286, glTexCoord3s, GLCALLCONV, void, (GLshort s, GLshort t, GLshort r))
IF_LOGGING(286)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 286;
LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); 
ENDLOG
((glTexCoord3sPtr)(realFunctPtr[286]))(s, t, r); }

// GLCALLCONV void  glTexCoord3sv (CGLshortP v);
DEFINE_FUNC(287, glTexCoord3sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(287)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 287;
LSSB(&v,CGLshortP); 
ENDLOG
((glTexCoord3svPtr)(realFunctPtr[287]))(v); }

// GLCALLCONV void  glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
DEFINE_FUNC(288, glTexCoord4d, GLCALLCONV, void, (GLdouble s, GLdouble t, GLdouble r, GLdouble q))
IF_LOGGING(288)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 288;
LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); LSSB(&q,GLdouble); 
ENDLOG
((glTexCoord4dPtr)(realFunctPtr[288]))(s, t, r, q); }

// GLCALLCONV void  glTexCoord4dv (CGLdoubleP v);
DEFINE_FUNC(289, glTexCoord4dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(289)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 289;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glTexCoord4dvPtr)(realFunctPtr[289]))(v); }

// GLCALLCONV void  glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
DEFINE_FUNC(290, glTexCoord4f, GLCALLCONV, void, (GLfloat s, GLfloat t, GLfloat r, GLfloat q))
IF_LOGGING(290)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 290;
LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); LSSB(&q,GLfloat); 
ENDLOG
((glTexCoord4fPtr)(realFunctPtr[290]))(s, t, r, q); }

// GLCALLCONV void  glTexCoord4fv (CGLfloatP v);
DEFINE_FUNC(291, glTexCoord4fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(291)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 291;
LSSB(&v,CGLfloatP); 
ENDLOG
((glTexCoord4fvPtr)(realFunctPtr[291]))(v); }

// GLCALLCONV void  glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
DEFINE_FUNC(292, glTexCoord4i, GLCALLCONV, void, (GLint s, GLint t, GLint r, GLint q))
IF_LOGGING(292)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 292;
LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); LSSB(&q,GLint); 
ENDLOG
((glTexCoord4iPtr)(realFunctPtr[292]))(s, t, r, q); }

// GLCALLCONV void  glTexCoord4iv (CGLintP v);
DEFINE_FUNC(293, glTexCoord4iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(293)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 293;
LSSB(&v,CGLintP); 
ENDLOG
((glTexCoord4ivPtr)(realFunctPtr[293]))(v); }

// GLCALLCONV void  glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
DEFINE_FUNC(294, glTexCoord4s, GLCALLCONV, void, (GLshort s, GLshort t, GLshort r, GLshort q))
IF_LOGGING(294)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 294;
LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); LSSB(&q,GLshort); 
ENDLOG
((glTexCoord4sPtr)(realFunctPtr[294]))(s, t, r, q); }

// GLCALLCONV void  glTexCoord4sv (CGLshortP v);
DEFINE_FUNC(295, glTexCoord4sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(295)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 295;
LSSB(&v,CGLshortP); 
ENDLOG
((glTexCoord4svPtr)(realFunctPtr[295]))(v); }

// GLCALLCONV void  glTexCoordPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(296, glTexCoordPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(296)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 296;
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glTexCoordPointerPtr)(realFunctPtr[296]))(size, type, stride, pointer); }

// GLCALLCONV void  glTexEnvf (GLenum target, GLenum pname, GLfloat param);
DEFINE_FUNC(297, glTexEnvf, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloat param))
IF_LOGGING(297)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 297;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glTexEnvfPtr)(realFunctPtr[297]))(target, pname, param); }

// GLCALLCONV void  glTexEnvfv (GLenum target, GLenum pname, CGLfloatP params);
DEFINE_FUNC(298, glTexEnvfv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLfloatP params))
IF_LOGGING(298)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 298;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glTexEnvfvPtr)(realFunctPtr[298]))(target, pname, params); }

// GLCALLCONV void  glTexEnvi (GLenum target, GLenum pname, GLint param);
DEFINE_FUNC(299, glTexEnvi, GLCALLCONV, void, (GLenum target, GLenum pname, GLint param))
IF_LOGGING(299)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 299;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glTexEnviPtr)(realFunctPtr[299]))(target, pname, param); }

// GLCALLCONV void  glTexEnviv (GLenum target, GLenum pname, CGLintP params);
DEFINE_FUNC(300, glTexEnviv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLintP params))
IF_LOGGING(300)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 300;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glTexEnvivPtr)(realFunctPtr[300]))(target, pname, params); }

// GLCALLCONV void  glTexGend (GLenum coord, GLenum pname, GLdouble param);
DEFINE_FUNC(301, glTexGend, GLCALLCONV, void, (GLenum coord, GLenum pname, GLdouble param))
IF_LOGGING(301)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdouble) << ID_LOG << 301;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLdouble); 
ENDLOG
((glTexGendPtr)(realFunctPtr[301]))(coord, pname, param); }

// GLCALLCONV void  glTexGendv (GLenum coord, GLenum pname, CGLdoubleP params);
DEFINE_FUNC(302, glTexGendv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLdoubleP params))
IF_LOGGING(302)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 302;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLdoubleP); 
ENDLOG
((glTexGendvPtr)(realFunctPtr[302]))(coord, pname, params); }

// GLCALLCONV void  glTexGenf (GLenum coord, GLenum pname, GLfloat param);
DEFINE_FUNC(303, glTexGenf, GLCALLCONV, void, (GLenum coord, GLenum pname, GLfloat param))
IF_LOGGING(303)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 303;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glTexGenfPtr)(realFunctPtr[303]))(coord, pname, param); }

// GLCALLCONV void  glTexGenfv (GLenum coord, GLenum pname, CGLfloatP params);
DEFINE_FUNC(304, glTexGenfv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLfloatP params))
IF_LOGGING(304)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 304;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glTexGenfvPtr)(realFunctPtr[304]))(coord, pname, params); }

// GLCALLCONV void  glTexGeni (GLenum coord, GLenum pname, GLint param);
DEFINE_FUNC(305, glTexGeni, GLCALLCONV, void, (GLenum coord, GLenum pname, GLint param))
IF_LOGGING(305)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 305;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glTexGeniPtr)(realFunctPtr[305]))(coord, pname, param); }

// GLCALLCONV void  glTexGeniv (GLenum coord, GLenum pname, CGLintP params);
DEFINE_FUNC(306, glTexGeniv, GLCALLCONV, void, (GLenum coord, GLenum pname, CGLintP params))
IF_LOGGING(306)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 306;
LSSB(&coord,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glTexGenivPtr)(realFunctPtr[306]))(coord, pname, params); }

// GLCALLCONV void  glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(307, glTexImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, CGLvoidP pixels))
IF_LOGGING(307)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 307;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalformat,GLint); LSSB(&width,GLsizei); LSSB(&border,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
((glTexImage1DPtr)(realFunctPtr[307]))(target, level, internalformat, width, border, format, type, pixels); }

// GLCALLCONV void  glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(308, glTexImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, CGLvoidP pixels))
IF_LOGGING(308)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 308;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&internalformat,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&border,GLint); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
/*if (saveNew2DTextures)
	if (level == 0 || saveTexMips)
		saveOGL2DTexture(target,level,false,0,0,internalformat,width,height,border,format,type,pixels);*/
((glTexImage2DPtr)(realFunctPtr[308]))(target, level, internalformat, width, height, border, format, type, pixels); }

// GLCALLCONV void  glTexParameterf (GLenum target, GLenum pname, GLfloat param);
DEFINE_FUNC(309, glTexParameterf, GLCALLCONV, void, (GLenum target, GLenum pname, GLfloat param))
IF_LOGGING(309)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 309;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glTexParameterfPtr)(realFunctPtr[309]))(target, pname, param); }

// GLCALLCONV void  glTexParameterfv (GLenum target, GLenum pname, CGLfloatP params);
DEFINE_FUNC(310, glTexParameterfv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLfloatP params))
IF_LOGGING(310)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 310;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glTexParameterfvPtr)(realFunctPtr[310]))(target, pname, params); }

// GLCALLCONV void  glTexParameteri (GLenum target, GLenum pname, GLint param);
DEFINE_FUNC(311, glTexParameteri, GLCALLCONV, void, (GLenum target, GLenum pname, GLint param))
IF_LOGGING(311)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 311;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glTexParameteriPtr)(realFunctPtr[311]))(target, pname, param); }

// GLCALLCONV void  glTexParameteriv (GLenum target, GLenum pname, CGLintP params);
DEFINE_FUNC(312, glTexParameteriv, GLCALLCONV, void, (GLenum target, GLenum pname, CGLintP params))
IF_LOGGING(312)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 312;
LSSB(&target,GLenum); LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glTexParameterivPtr)(realFunctPtr[312]))(target, pname, params); }

// GLCALLCONV void  glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(313, glTexSubImage1D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, CGLvoidP pixels))
IF_LOGGING(313)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 313;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&width,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
((glTexSubImage1DPtr)(realFunctPtr[313]))(target, level, xoffset, width, format, type, pixels); }

// GLCALLCONV void  glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels);
DEFINE_FUNC(314, glTexSubImage2D, GLCALLCONV, void, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, CGLvoidP pixels))
IF_LOGGING(314)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(CGLvoidP) << ID_LOG << 314;
LSSB(&target,GLenum); LSSB(&level,GLint); LSSB(&xoffset,GLint); LSSB(&yoffset,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); LSSB(&format,GLenum); LSSB(&type,GLenum); LSSB(&pixels,CGLvoidP); 
ENDLOG
/*if (save2DTextureChanges)
	if (level == 0 || saveTexMips)
		saveOGL2DTexture(target,level,true,xoffset, yoffset,0,width,height,0,format,type,pixels);*/
((glTexSubImage2DPtr)(realFunctPtr[314]))(target, level, xoffset, yoffset, width, height, format, type, pixels); }

// GLCALLCONV void  glTranslated (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(315, glTranslated, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))
IF_LOGGING(315)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 315;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
((glTranslatedPtr)(realFunctPtr[315]))(x, y, z); }

// GLCALLCONV void  glTranslatef (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(316, glTranslatef, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))
IF_LOGGING(316)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 316;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
((glTranslatefPtr)(realFunctPtr[316]))(x, y, z); }

// GLCALLCONV void  glVertex2d (GLdouble x, GLdouble y);
DEFINE_FUNC(317, glVertex2d, GLCALLCONV, void, (GLdouble x, GLdouble y))
IF_LOGGING(317)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 317;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); 
ENDLOG
((glVertex2dPtr)(realFunctPtr[317]))(x, y); }

// GLCALLCONV void  glVertex2dv (CGLdoubleP v);
DEFINE_FUNC(318, glVertex2dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(318)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 318;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glVertex2dvPtr)(realFunctPtr[318]))(v); }

// GLCALLCONV void  glVertex2f (GLfloat x, GLfloat y);
DEFINE_FUNC(319, glVertex2f, GLCALLCONV, void, (GLfloat x, GLfloat y))
IF_LOGGING(319)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 319;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); 
ENDLOG
((glVertex2fPtr)(realFunctPtr[319]))(x, y); }

// GLCALLCONV void  glVertex2fv (CGLfloatP v);
DEFINE_FUNC(320, glVertex2fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(320)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 320;
LSSB(&v,CGLfloatP); 
ENDLOG
((glVertex2fvPtr)(realFunctPtr[320]))(v); }

// GLCALLCONV void  glVertex2i (GLint x, GLint y);
DEFINE_FUNC(321, glVertex2i, GLCALLCONV, void, (GLint x, GLint y))
IF_LOGGING(321)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) << ID_LOG << 321;
LSSB(&x,GLint); LSSB(&y,GLint); 
ENDLOG
((glVertex2iPtr)(realFunctPtr[321]))(x, y); }

// GLCALLCONV void  glVertex2iv (CGLintP v);
DEFINE_FUNC(322, glVertex2iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(322)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 322;
LSSB(&v,CGLintP); 
ENDLOG
((glVertex2ivPtr)(realFunctPtr[322]))(v); }

// GLCALLCONV void  glVertex2s (GLshort x, GLshort y);
DEFINE_FUNC(323, glVertex2s, GLCALLCONV, void, (GLshort x, GLshort y))
IF_LOGGING(323)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 323;
LSSB(&x,GLshort); LSSB(&y,GLshort); 
ENDLOG
((glVertex2sPtr)(realFunctPtr[323]))(x, y); }

// GLCALLCONV void  glVertex2sv (CGLshortP v);
DEFINE_FUNC(324, glVertex2sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(324)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 324;
LSSB(&v,CGLshortP); 
ENDLOG
((glVertex2svPtr)(realFunctPtr[324]))(v); }

// GLCALLCONV void  glVertex3d (GLdouble x, GLdouble y, GLdouble z);
DEFINE_FUNC(325, glVertex3d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z))
IF_LOGGING(325)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 325;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); 
ENDLOG
((glVertex3dPtr)(realFunctPtr[325]))(x, y, z); }

// GLCALLCONV void  glVertex3dv (CGLdoubleP v);
DEFINE_FUNC(326, glVertex3dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(326)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 326;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glVertex3dvPtr)(realFunctPtr[326]))(v); }

// GLCALLCONV void  glVertex3f (GLfloat x, GLfloat y, GLfloat z);
DEFINE_FUNC(327, glVertex3f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z))
IF_LOGGING(327)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 327;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); 
ENDLOG
((glVertex3fPtr)(realFunctPtr[327]))(x, y, z); }

// GLCALLCONV void  glVertex3fv (CGLfloatP v);
DEFINE_FUNC(328, glVertex3fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(328)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 328;
LSSB(&v,CGLfloatP); 
ENDLOG
((glVertex3fvPtr)(realFunctPtr[328]))(v); }

// GLCALLCONV void  glVertex3i (GLint x, GLint y, GLint z);
DEFINE_FUNC(329, glVertex3i, GLCALLCONV, void, (GLint x, GLint y, GLint z))
IF_LOGGING(329)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 329;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); 
ENDLOG
((glVertex3iPtr)(realFunctPtr[329]))(x, y, z); }

// GLCALLCONV void  glVertex3iv (CGLintP v);
DEFINE_FUNC(330, glVertex3iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(330)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 330;
LSSB(&v,CGLintP); 
ENDLOG
((glVertex3ivPtr)(realFunctPtr[330]))(v); }

// GLCALLCONV void  glVertex3s (GLshort x, GLshort y, GLshort z);
DEFINE_FUNC(331, glVertex3s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z))
IF_LOGGING(331)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 331;
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); 
ENDLOG
((glVertex3sPtr)(realFunctPtr[331]))(x, y, z); }

// GLCALLCONV void  glVertex3sv (CGLshortP v);
DEFINE_FUNC(332, glVertex3sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(332)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 332;
LSSB(&v,CGLshortP); 
ENDLOG
((glVertex3svPtr)(realFunctPtr[332]))(v); }

// GLCALLCONV void  glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
DEFINE_FUNC(333, glVertex4d, GLCALLCONV, void, (GLdouble x, GLdouble y, GLdouble z, GLdouble w))
IF_LOGGING(333)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 333;
LSSB(&x,GLdouble); LSSB(&y,GLdouble); LSSB(&z,GLdouble); LSSB(&w,GLdouble); 
ENDLOG
((glVertex4dPtr)(realFunctPtr[333]))(x, y, z, w); }

// GLCALLCONV void  glVertex4dv (CGLdoubleP v);
DEFINE_FUNC(334, glVertex4dv, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(334)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 334;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glVertex4dvPtr)(realFunctPtr[334]))(v); }

// GLCALLCONV void  glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
DEFINE_FUNC(335, glVertex4f, GLCALLCONV, void, (GLfloat x, GLfloat y, GLfloat z, GLfloat w))
IF_LOGGING(335)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 335;
LSSB(&x,GLfloat); LSSB(&y,GLfloat); LSSB(&z,GLfloat); LSSB(&w,GLfloat); 
ENDLOG
((glVertex4fPtr)(realFunctPtr[335]))(x, y, z, w); }

// GLCALLCONV void  glVertex4fv (CGLfloatP v);
DEFINE_FUNC(336, glVertex4fv, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(336)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 336;
LSSB(&v,CGLfloatP); 
ENDLOG
((glVertex4fvPtr)(realFunctPtr[336]))(v); }

// GLCALLCONV void  glVertex4i (GLint x, GLint y, GLint z, GLint w);
DEFINE_FUNC(337, glVertex4i, GLCALLCONV, void, (GLint x, GLint y, GLint z, GLint w))
IF_LOGGING(337)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 337;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&z,GLint); LSSB(&w,GLint); 
ENDLOG
((glVertex4iPtr)(realFunctPtr[337]))(x, y, z, w); }

// GLCALLCONV void  glVertex4iv (CGLintP v);
DEFINE_FUNC(338, glVertex4iv, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(338)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 338;
LSSB(&v,CGLintP); 
ENDLOG
((glVertex4ivPtr)(realFunctPtr[338]))(v); }

// GLCALLCONV void  glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
DEFINE_FUNC(339, glVertex4s, GLCALLCONV, void, (GLshort x, GLshort y, GLshort z, GLshort w))
IF_LOGGING(339)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 339;
LSSB(&x,GLshort); LSSB(&y,GLshort); LSSB(&z,GLshort); LSSB(&w,GLshort); 
ENDLOG
((glVertex4sPtr)(realFunctPtr[339]))(x, y, z, w); }

// GLCALLCONV void  glVertex4sv (CGLshortP v);
DEFINE_FUNC(340, glVertex4sv, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(340)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 340;
LSSB(&v,CGLshortP); 
ENDLOG
((glVertex4svPtr)(realFunctPtr[340]))(v); }

// GLCALLCONV void  glVertexPointer (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(341, glVertexPointer, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(341)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 341;
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glVertexPointerPtr)(realFunctPtr[341]))(size, type, stride, pointer); }

// GLCALLCONV void  glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
DEFINE_FUNC(342, glViewport, GLCALLCONV, void, (GLint x, GLint y, GLsizei width, GLsizei height))
IF_LOGGING(342)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) << ID_LOG << 342;
LSSB(&x,GLint); LSSB(&y,GLint); LSSB(&width,GLsizei); LSSB(&height,GLsizei); 
ENDLOG
((glViewportPtr)(realFunctPtr[342]))(x, y, width, height); }

// GLCALLCONV int   wglChoosePixelFormat(HDC a, CPIXELFORMATDESCRIPTORP b);
DEFINE_FUNC(343, wglChoosePixelFormat, GLCALLCONV, int, (HDC a, CPIXELFORMATDESCRIPTORP b))
IF_LOGGING(343)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(CPIXELFORMATDESCRIPTORP) << ID_LOG << 343;
LSSB(&a,HDC); LSSB(&b,CPIXELFORMATDESCRIPTORP); 
ENDLOG
if (forceSingleBuffer)
{
	PIXELFORMATDESCRIPTOR * x = (PIXELFORMATDESCRIPTOR *) b;
	x->dwFlags = (~PFD_DOUBLEBUFFER) & x->dwFlags;	//force single buffer
}
return ((wglChoosePixelFormatPtr)(realFunctPtr[343]))(a, b); }

// GLCALLCONV BOOL  wglCopyContext(HGLRC a, HGLRC b, UINT c);
DEFINE_FUNC(344, wglCopyContext, GLCALLCONV, BOOL, (HGLRC a, HGLRC b, UINT c))
IF_LOGGING(344)
LS << MAGIC << HEADERSIZE  + sizeof(HGLRC) + sizeof(HGLRC) + sizeof(UINT) << ID_LOG << 344;
LSSB(&a,HGLRC); LSSB(&b,HGLRC); LSSB(&c,UINT); 
ENDLOG
return ((wglCopyContextPtr)(realFunctPtr[344]))(a, b, c); }

// GLCALLCONV HGLRC wglCreateContext(HDC a);
DEFINE_FUNC(345, wglCreateContext, GLCALLCONV, HGLRC, (HDC a))
IF_LOGGING(345)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) << ID_LOG << 345;
LSSB(&a,HDC); 
ENDLOG
return ((wglCreateContextPtr)(realFunctPtr[345]))(a); }

// GLCALLCONV HGLRC wglCreateLayerContext(HDC a, int b);
DEFINE_FUNC(346, wglCreateLayerContext, GLCALLCONV, HGLRC, (HDC a, int b))
IF_LOGGING(346)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) << ID_LOG << 346;
LSSB(&a,HDC); LSSB(&b,int); 
ENDLOG
return ((wglCreateLayerContextPtr)(realFunctPtr[346]))(a, b); }

// GLCALLCONV BOOL  wglDeleteContext(HGLRC a);
DEFINE_FUNC(347, wglDeleteContext, GLCALLCONV, BOOL, (HGLRC a))
IF_LOGGING(347)
LS << MAGIC << HEADERSIZE  + sizeof(HGLRC) << ID_LOG << 347;
LSSB(&a,HGLRC); 
ENDLOG
return ((wglDeleteContextPtr)(realFunctPtr[347]))(a); }

// GLCALLCONV BOOL  wglDescribeLayerPlane(HDC a, int b, int c, UINT d, LPLAYERPLANEDESCRIPTOR e);
DEFINE_FUNC(348, wglDescribeLayerPlane, GLCALLCONV, BOOL, (HDC a, int b, int c, UINT d, LPLAYERPLANEDESCRIPTOR e))
IF_LOGGING(348)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(UINT) + sizeof(LPLAYERPLANEDESCRIPTOR) << ID_LOG << 348;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,UINT); LSSB(&e,LPLAYERPLANEDESCRIPTOR); 
ENDLOG
return ((wglDescribeLayerPlanePtr)(realFunctPtr[348]))(a, b, c, d, e); }

// GLCALLCONV int   wglDescribePixelFormat(HDC a, int b, UINT c, LPPIXELFORMATDESCRIPTOR d);
DEFINE_FUNC(349, wglDescribePixelFormat, GLCALLCONV, int, (HDC a, int b, UINT c, LPPIXELFORMATDESCRIPTOR d))
IF_LOGGING(349)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(UINT) + sizeof(LPPIXELFORMATDESCRIPTOR) << ID_LOG << 349;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,UINT); LSSB(&d,LPPIXELFORMATDESCRIPTOR); 
ENDLOG
return ((wglDescribePixelFormatPtr)(realFunctPtr[349]))(a, b, c, d); }

// GLCALLCONV HGLRC wglGetCurrentContext();
DEFINE_FUNC(350, wglGetCurrentContext, GLCALLCONV, HGLRC, ())
IF_LOGGING(350)
LS << MAGIC << HEADERSIZE  << ID_LOG << 350;
ENDLOG
return ((wglGetCurrentContextPtr)(realFunctPtr[350]))(); }

// GLCALLCONV HDC   wglGetCurrentDC();
DEFINE_FUNC(351, wglGetCurrentDC, GLCALLCONV, HDC, ())
IF_LOGGING(351)
LS << MAGIC << HEADERSIZE  << ID_LOG << 351;
ENDLOG
return ((wglGetCurrentDCPtr)(realFunctPtr[351]))(); }

// GLCALLCONV PROC  wglGetDefaultProcAddress(LPCSTR a);
DEFINE_FUNC(352, wglGetDefaultProcAddress, GLCALLCONV, PROC, (LPCSTR a))
IF_LOGGING(352)
LS << MAGIC << HEADERSIZE  + sizeof(LPCSTR) << ID_LOG << 352;
LSSB(&a,LPCSTR); 
ENDLOG
PROC realPtr =  ((wglGetDefaultProcAddressPtr)(realFunctPtr[352]))(a); 
if (realPtr)
	for (unsigned i = 0; i< NUMFUNCS; i++)	//go through all functs, not just exts, as we don't differentiate.
		if (!strcmp(functNames[i], a))
		{
			realFunctPtr[i] = realPtr; 
			return (PROC)fakeFunctPtr[i];
		}
return realPtr; }

// GLCALLCONV int   wglGetLayerPaletteEntries(HDC a, int b, int c, int d, COLORREFP e);
DEFINE_FUNC(353, wglGetLayerPaletteEntries, GLCALLCONV, int, (HDC a, int b, int c, int d, COLORREFP e))
IF_LOGGING(353)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(COLORREFP) << ID_LOG << 353;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,int); LSSB(&e,COLORREFP); 
ENDLOG
return ((wglGetLayerPaletteEntriesPtr)(realFunctPtr[353]))(a, b, c, d, e); }

// GLCALLCONV int   wglGetPixelFormat(HDC a);
DEFINE_FUNC(354, wglGetPixelFormat, GLCALLCONV, int, (HDC a))
IF_LOGGING(354)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) << ID_LOG << 354;
LSSB(&a,HDC); 
ENDLOG
return ((wglGetPixelFormatPtr)(realFunctPtr[354]))(a); }

// GLCALLCONV PROC  wglGetProcAddress(LPCSTR a);
DEFINE_FUNC(355, wglGetProcAddress, GLCALLCONV, PROC, (LPCSTR a))
IF_LOGGING(355)
LS << MAGIC << HEADERSIZE  + sizeof(LPCSTR) << ID_LOG << 355;
LSSB(&a,LPCSTR); 
ENDLOG
PROC realPtr =  ((wglGetProcAddressPtr)(realFunctPtr[355]))(a); 
if (realPtr)
	for (unsigned i = 0; i< NUMFUNCS; i++)	//go through all functs, not just exts, as we don't differentiate.
		if (!strcmp(functNames[i], a))
		{
			realFunctPtr[i] = realPtr; 
			return (PROC)fakeFunctPtr[i];
		}
return realPtr; }

// GLCALLCONV BOOL  wglMakeCurrent(HDC a, HGLRC b);
DEFINE_FUNC(356, wglMakeCurrent, GLCALLCONV, BOOL, (HDC a, HGLRC b))
IF_LOGGING(356)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(HGLRC) << ID_LOG << 356;
LSSB(&a,HDC); LSSB(&b,HGLRC); 
ENDLOG
BOOL r = ((wglMakeCurrentPtr)(realFunctPtr[356]))(a, b); 
if (suppressGlPolygonMode && b)
	((glPolygonModePtr)(realFunctPtr[207]))(GL_FRONT_AND_BACK, GL_LINE);//set wireframe mode
return r; }

// GLCALLCONV BOOL  wglRealizeLayerPalette(HDC a, int b, BOOL c);
DEFINE_FUNC(357, wglRealizeLayerPalette, GLCALLCONV, BOOL, (HDC a, int b, BOOL c))
IF_LOGGING(357)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(BOOL) << ID_LOG << 357;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,BOOL); 
ENDLOG
return ((wglRealizeLayerPalettePtr)(realFunctPtr[357]))(a, b, c); }

// GLCALLCONV int   wglSetLayerPaletteEntries(HDC a, int b, int c, int d, CCOLORREFP e);
DEFINE_FUNC(358, wglSetLayerPaletteEntries, GLCALLCONV, int, (HDC a, int b, int c, int d, CCOLORREFP e))
IF_LOGGING(358)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(CCOLORREFP) << ID_LOG << 358;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,int); LSSB(&d,int); LSSB(&e,CCOLORREFP); 
ENDLOG
return ((wglSetLayerPaletteEntriesPtr)(realFunctPtr[358]))(a, b, c, d, e); }

// GLCALLCONV BOOL  wglSetPixelFormat(HDC a, int b, CPIXELFORMATDESCRIPTORP c);
DEFINE_FUNC(359, wglSetPixelFormat, GLCALLCONV, BOOL, (HDC a, int b, CPIXELFORMATDESCRIPTORP c))
IF_LOGGING(359)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(int) + sizeof(CPIXELFORMATDESCRIPTORP) << ID_LOG << 359;
LSSB(&a,HDC); LSSB(&b,int); LSSB(&c,CPIXELFORMATDESCRIPTORP); 
ENDLOG
if (forceSingleBuffer)
{
	PIXELFORMATDESCRIPTOR * x = (PIXELFORMATDESCRIPTOR *) c;
	x->dwFlags = (~PFD_DOUBLEBUFFER) & x->dwFlags;	//force single buffer
}
return ((wglSetPixelFormatPtr)(realFunctPtr[359]))(a, b, c); }

// GLCALLCONV BOOL  wglShareLists(HGLRC a, HGLRC b);
DEFINE_FUNC(360, wglShareLists, GLCALLCONV, BOOL, (HGLRC a, HGLRC b))
IF_LOGGING(360)
LS << MAGIC << HEADERSIZE  + sizeof(HGLRC) + sizeof(HGLRC) << ID_LOG << 360;
LSSB(&a,HGLRC); LSSB(&b,HGLRC); 
ENDLOG
return ((wglShareListsPtr)(realFunctPtr[360]))(a, b); }

// GLCALLCONV BOOL  wglSwapBuffers(HDC a);
DEFINE_FUNC(361, wglSwapBuffers, GLCALLCONV, BOOL, (HDC a))
IF_LOGGING(361)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) << ID_LOG << 361;
LSSB(&a,HDC); 
ENDLOG
BOOL rv = ((wglSwapBuffersPtr)(realFunctPtr[361]))(a); 
if (suppressGlPolygonMode)		//when forcing wireframe mode, make sure to clear explicitly after swapping.
								//this is kind of a hack for quake and other apps which don't do clears.  Maybe make this an explicit option.
	glClear(GL_COLOR_BUFFER_BIT);
return rv; }

// GLCALLCONV BOOL  wglSwapLayerBuffers(HDC a, UINT b);
DEFINE_FUNC(362, wglSwapLayerBuffers, GLCALLCONV, BOOL, (HDC a, UINT b))
IF_LOGGING(362)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(UINT) << ID_LOG << 362;
LSSB(&a,HDC); LSSB(&b,UINT); 
ENDLOG
return ((wglSwapLayerBuffersPtr)(realFunctPtr[362]))(a, b); }

// GLCALLCONV BOOL  wglUseFontBitmapsA(HDC a, DWORD b, DWORD c, DWORD d);
DEFINE_FUNC(363, wglUseFontBitmapsA, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d))
IF_LOGGING(363)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) << ID_LOG << 363;
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); 
ENDLOG
return ((wglUseFontBitmapsAPtr)(realFunctPtr[363]))(a, b, c, d); }

// GLCALLCONV BOOL  wglUseFontBitmapsW(HDC a, DWORD b, DWORD c, DWORD d);
DEFINE_FUNC(364, wglUseFontBitmapsW, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d))
IF_LOGGING(364)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) << ID_LOG << 364;
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); 
ENDLOG
return ((wglUseFontBitmapsWPtr)(realFunctPtr[364]))(a, b, c, d); }

// GLCALLCONV BOOL  wglUseFontOutlinesA(HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h);
DEFINE_FUNC(365, wglUseFontOutlinesA, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h))
IF_LOGGING(365)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) << ID_LOG << 365;
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); LSSB(&e,FLOAT); LSSB(&f,FLOAT); LSSB(&g,int); LSSB(&h,LPGLYPHMETRICSFLOAT); 
ENDLOG
return ((wglUseFontOutlinesAPtr)(realFunctPtr[365]))(a, b, c, d, e, f, g, h); }

// GLCALLCONV BOOL  wglUseFontOutlinesW(HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h);
DEFINE_FUNC(366, wglUseFontOutlinesW, GLCALLCONV, BOOL, (HDC a, DWORD b, DWORD c, DWORD d, FLOAT e, FLOAT f, int g, LPGLYPHMETRICSFLOAT h))
IF_LOGGING(366)
LS << MAGIC << HEADERSIZE  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) << ID_LOG << 366;
LSSB(&a,HDC); LSSB(&b,DWORD); LSSB(&c,DWORD); LSSB(&d,DWORD); LSSB(&e,FLOAT); LSSB(&f,FLOAT); LSSB(&g,int); LSSB(&h,LPGLYPHMETRICSFLOAT); 
ENDLOG
return ((wglUseFontOutlinesWPtr)(realFunctPtr[366]))(a, b, c, d, e, f, g, h); }

// GLCALLCONV void glActiveTextureARB(GLenum texture);
DEFINE_FUNC(367, glActiveTextureARB, GLCALLCONV, void, (GLenum texture))
IF_LOGGING(367)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 367;
LSSB(&texture,GLenum); 
ENDLOG
((glActiveTextureARBPtr)(realFunctPtr[367]))(texture); }

// GLCALLCONV void glClientActiveTextureARB(GLenum texture);
DEFINE_FUNC(368, glClientActiveTextureARB, GLCALLCONV, void, (GLenum texture))
IF_LOGGING(368)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 368;
LSSB(&texture,GLenum); 
ENDLOG
((glClientActiveTextureARBPtr)(realFunctPtr[368]))(texture); }

// GLCALLCONV void glMultiTexCoord1dARB(GLenum target, GLdouble s);  
DEFINE_FUNC(369, glMultiTexCoord1dARB, GLCALLCONV, void, (GLenum target, GLdouble s))
IF_LOGGING(369)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) << ID_LOG << 369;
LSSB(&target,GLenum); LSSB(&s,GLdouble); 
ENDLOG
((glMultiTexCoord1dARBPtr)(realFunctPtr[369]))(target, s); }

// GLCALLCONV void glMultiTexCoord1dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(370, glMultiTexCoord1dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))
IF_LOGGING(370)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 370;
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
((glMultiTexCoord1dvARBPtr)(realFunctPtr[370]))(target, v); }

// GLCALLCONV void glMultiTexCoord1fARB(GLenum target, GLfloat s);
DEFINE_FUNC(371, glMultiTexCoord1fARB, GLCALLCONV, void, (GLenum target, GLfloat s))
IF_LOGGING(371)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 371;
LSSB(&target,GLenum); LSSB(&s,GLfloat); 
ENDLOG
((glMultiTexCoord1fARBPtr)(realFunctPtr[371]))(target, s); }

// GLCALLCONV void glMultiTexCoord1fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(372, glMultiTexCoord1fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))
IF_LOGGING(372)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 372;
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
((glMultiTexCoord1fvARBPtr)(realFunctPtr[372]))(target, v); }

// GLCALLCONV void glMultiTexCoord1iARB(GLenum target, GLint s);
DEFINE_FUNC(373, glMultiTexCoord1iARB, GLCALLCONV, void, (GLenum target, GLint s))
IF_LOGGING(373)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 373;
LSSB(&target,GLenum); LSSB(&s,GLint); 
ENDLOG
((glMultiTexCoord1iARBPtr)(realFunctPtr[373]))(target, s); }

// GLCALLCONV void glMultiTexCoord1ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(374, glMultiTexCoord1ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))
IF_LOGGING(374)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 374;
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
((glMultiTexCoord1ivARBPtr)(realFunctPtr[374]))(target, v); }

// GLCALLCONV void glMultiTexCoord1sARB(GLenum target, GLshort s);
DEFINE_FUNC(375, glMultiTexCoord1sARB, GLCALLCONV, void, (GLenum target, GLshort s))
IF_LOGGING(375)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLshort) << ID_LOG << 375;
LSSB(&target,GLenum); LSSB(&s,GLshort); 
ENDLOG
((glMultiTexCoord1sARBPtr)(realFunctPtr[375]))(target, s); }

// GLCALLCONV void glMultiTexCoord1svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(376, glMultiTexCoord1svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))
IF_LOGGING(376)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLshortP) << ID_LOG << 376;
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
((glMultiTexCoord1svARBPtr)(realFunctPtr[376]))(target, v); }

// GLCALLCONV void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
DEFINE_FUNC(377, glMultiTexCoord2dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t))
IF_LOGGING(377)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 377;
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); 
ENDLOG
((glMultiTexCoord2dARBPtr)(realFunctPtr[377]))(target, s, t); }

// GLCALLCONV void glMultiTexCoord2dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(378, glMultiTexCoord2dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))
IF_LOGGING(378)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 378;
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
((glMultiTexCoord2dvARBPtr)(realFunctPtr[378]))(target, v); }

// GLCALLCONV void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
DEFINE_FUNC(379, glMultiTexCoord2fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t))
IF_LOGGING(379)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 379;
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); 
ENDLOG
((glMultiTexCoord2fARBPtr)(realFunctPtr[379]))(target, s, t); }

// GLCALLCONV void glMultiTexCoord2fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(380, glMultiTexCoord2fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))
IF_LOGGING(380)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 380;
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
((glMultiTexCoord2fvARBPtr)(realFunctPtr[380]))(target, v); }

// GLCALLCONV void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
DEFINE_FUNC(381, glMultiTexCoord2iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t))
IF_LOGGING(381)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 381;
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); 
ENDLOG
((glMultiTexCoord2iARBPtr)(realFunctPtr[381]))(target, s, t); }

// GLCALLCONV void glMultiTexCoord2ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(382, glMultiTexCoord2ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))
IF_LOGGING(382)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 382;
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
((glMultiTexCoord2ivARBPtr)(realFunctPtr[382]))(target, v); }

// GLCALLCONV void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
DEFINE_FUNC(383, glMultiTexCoord2sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t))
IF_LOGGING(383)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 383;
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); 
ENDLOG
((glMultiTexCoord2sARBPtr)(realFunctPtr[383]))(target, s, t); }

// GLCALLCONV void glMultiTexCoord2svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(384, glMultiTexCoord2svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))
IF_LOGGING(384)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLshortP) << ID_LOG << 384;
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
((glMultiTexCoord2svARBPtr)(realFunctPtr[384]))(target, v); }

// GLCALLCONV void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
DEFINE_FUNC(385, glMultiTexCoord3dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t, GLdouble r))
IF_LOGGING(385)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 385;
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); 
ENDLOG
((glMultiTexCoord3dARBPtr)(realFunctPtr[385]))(target, s, t, r); }

// GLCALLCONV void glMultiTexCoord3dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(386, glMultiTexCoord3dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))
IF_LOGGING(386)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 386;
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
((glMultiTexCoord3dvARBPtr)(realFunctPtr[386]))(target, v); }

// GLCALLCONV void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
DEFINE_FUNC(387, glMultiTexCoord3fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t, GLfloat r))
IF_LOGGING(387)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 387;
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); 
ENDLOG
((glMultiTexCoord3fARBPtr)(realFunctPtr[387]))(target, s, t, r); }

// GLCALLCONV void glMultiTexCoord3fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(388, glMultiTexCoord3fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))
IF_LOGGING(388)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 388;
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
((glMultiTexCoord3fvARBPtr)(realFunctPtr[388]))(target, v); }

// GLCALLCONV void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
DEFINE_FUNC(389, glMultiTexCoord3iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t, GLint r))
IF_LOGGING(389)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 389;
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); 
ENDLOG
((glMultiTexCoord3iARBPtr)(realFunctPtr[389]))(target, s, t, r); }

// GLCALLCONV void glMultiTexCoord3ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(390, glMultiTexCoord3ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))
IF_LOGGING(390)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 390;
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
((glMultiTexCoord3ivARBPtr)(realFunctPtr[390]))(target, v); }

// GLCALLCONV void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
DEFINE_FUNC(391, glMultiTexCoord3sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t, GLshort r))
IF_LOGGING(391)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 391;
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); 
ENDLOG
((glMultiTexCoord3sARBPtr)(realFunctPtr[391]))(target, s, t, r); }

// GLCALLCONV void glMultiTexCoord3svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(392, glMultiTexCoord3svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))
IF_LOGGING(392)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLshortP) << ID_LOG << 392;
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
((glMultiTexCoord3svARBPtr)(realFunctPtr[392]))(target, v); }

// GLCALLCONV void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
DEFINE_FUNC(393, glMultiTexCoord4dARB, GLCALLCONV, void, (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q))
IF_LOGGING(393)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 393;
LSSB(&target,GLenum); LSSB(&s,GLdouble); LSSB(&t,GLdouble); LSSB(&r,GLdouble); LSSB(&q,GLdouble); 
ENDLOG
((glMultiTexCoord4dARBPtr)(realFunctPtr[393]))(target, s, t, r, q); }

// GLCALLCONV void glMultiTexCoord4dvARB(GLenum target, CGLdoubleP v);
DEFINE_FUNC(394, glMultiTexCoord4dvARB, GLCALLCONV, void, (GLenum target, CGLdoubleP v))
IF_LOGGING(394)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLdoubleP) << ID_LOG << 394;
LSSB(&target,GLenum); LSSB(&v,CGLdoubleP); 
ENDLOG
((glMultiTexCoord4dvARBPtr)(realFunctPtr[394]))(target, v); }

// GLCALLCONV void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
DEFINE_FUNC(395, glMultiTexCoord4fARB, GLCALLCONV, void, (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q))
IF_LOGGING(395)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 395;
LSSB(&target,GLenum); LSSB(&s,GLfloat); LSSB(&t,GLfloat); LSSB(&r,GLfloat); LSSB(&q,GLfloat); 
ENDLOG
((glMultiTexCoord4fARBPtr)(realFunctPtr[395]))(target, s, t, r, q); }

// GLCALLCONV void glMultiTexCoord4fvARB(GLenum target, CGLfloatP v);
DEFINE_FUNC(396, glMultiTexCoord4fvARB, GLCALLCONV, void, (GLenum target, CGLfloatP v))
IF_LOGGING(396)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 396;
LSSB(&target,GLenum); LSSB(&v,CGLfloatP); 
ENDLOG
((glMultiTexCoord4fvARBPtr)(realFunctPtr[396]))(target, v); }

// GLCALLCONV void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
DEFINE_FUNC(397, glMultiTexCoord4iARB, GLCALLCONV, void, (GLenum target, GLint s, GLint t, GLint r, GLint q))
IF_LOGGING(397)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 397;
LSSB(&target,GLenum); LSSB(&s,GLint); LSSB(&t,GLint); LSSB(&r,GLint); LSSB(&q,GLint); 
ENDLOG
((glMultiTexCoord4iARBPtr)(realFunctPtr[397]))(target, s, t, r, q); }

// GLCALLCONV void glMultiTexCoord4ivARB(GLenum target, CGLintP v);
DEFINE_FUNC(398, glMultiTexCoord4ivARB, GLCALLCONV, void, (GLenum target, CGLintP v))
IF_LOGGING(398)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 398;
LSSB(&target,GLenum); LSSB(&v,CGLintP); 
ENDLOG
((glMultiTexCoord4ivARBPtr)(realFunctPtr[398]))(target, v); }

// GLCALLCONV void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
DEFINE_FUNC(399, glMultiTexCoord4sARB, GLCALLCONV, void, (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q))
IF_LOGGING(399)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 399;
LSSB(&target,GLenum); LSSB(&s,GLshort); LSSB(&t,GLshort); LSSB(&r,GLshort); LSSB(&q,GLshort); 
ENDLOG
((glMultiTexCoord4sARBPtr)(realFunctPtr[399]))(target, s, t, r, q); }

// GLCALLCONV void glMultiTexCoord4svARB(GLenum target, CGLshortP v);
DEFINE_FUNC(400, glMultiTexCoord4svARB, GLCALLCONV, void, (GLenum target, CGLshortP v))
IF_LOGGING(400)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLshortP) << ID_LOG << 400;
LSSB(&target,GLenum); LSSB(&v,CGLshortP); 
ENDLOG
((glMultiTexCoord4svARBPtr)(realFunctPtr[400]))(target, v); }

// GLCALLCONV void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
DEFINE_FUNC(401, glBlendColorEXT, GLCALLCONV, void, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha))
IF_LOGGING(401)
LS << MAGIC << HEADERSIZE  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) << ID_LOG << 401;
LSSB(&red,GLclampf); LSSB(&green,GLclampf); LSSB(&blue,GLclampf); LSSB(&alpha,GLclampf); 
ENDLOG
((glBlendColorEXTPtr)(realFunctPtr[401]))(red, green, blue, alpha); }

// GLCALLCONV void glBlendEquationEXT(GLenum mode);
DEFINE_FUNC(402, glBlendEquationEXT, GLCALLCONV, void, (GLenum mode))
IF_LOGGING(402)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) << ID_LOG << 402;
LSSB(&mode,GLenum); 
ENDLOG
((glBlendEquationEXTPtr)(realFunctPtr[402]))(mode); }

// GLCALLCONV void glFogCoorddEXT(GLdouble coord);
DEFINE_FUNC(403, glFogCoorddEXT, GLCALLCONV, void, (GLdouble coord))
IF_LOGGING(403)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) << ID_LOG << 403;
LSSB(&coord,GLdouble); 
ENDLOG
((glFogCoorddEXTPtr)(realFunctPtr[403]))(coord); }

// GLCALLCONV void glFogCoorddvEXT(CGLdoubleP coord);
DEFINE_FUNC(404, glFogCoorddvEXT, GLCALLCONV, void, (CGLdoubleP coord))
IF_LOGGING(404)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 404;
LSSB(&coord,CGLdoubleP); 
ENDLOG
((glFogCoorddvEXTPtr)(realFunctPtr[404]))(coord); }

// GLCALLCONV void glFogCoordfEXT(GLfloat coord);
DEFINE_FUNC(405, glFogCoordfEXT, GLCALLCONV, void, (GLfloat coord))
IF_LOGGING(405)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) << ID_LOG << 405;
LSSB(&coord,GLfloat); 
ENDLOG
((glFogCoordfEXTPtr)(realFunctPtr[405]))(coord); }

// GLCALLCONV void glFogCoordfvEXT(CGLfloatP coord);
DEFINE_FUNC(406, glFogCoordfvEXT, GLCALLCONV, void, (CGLfloatP coord))
IF_LOGGING(406)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 406;
LSSB(&coord,CGLfloatP); 
ENDLOG
((glFogCoordfvEXTPtr)(realFunctPtr[406]))(coord); }

// GLCALLCONV void glFogCoordPointerEXT(GLenum type, GLsizei stride, CGLvoidP pointer);
DEFINE_FUNC(407, glFogCoordPointerEXT, GLCALLCONV, void, (GLenum type, GLsizei stride, CGLvoidP pointer))
IF_LOGGING(407)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 407;
LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glFogCoordPointerEXTPtr)(realFunctPtr[407]))(type, stride, pointer); }

// GLCALLCONV void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue);
DEFINE_FUNC(408, glSecondaryColor3bEXT, GLCALLCONV, void, (GLbyte red, GLbyte green, GLbyte blue))
IF_LOGGING(408)
LS << MAGIC << HEADERSIZE  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) << ID_LOG << 408;
LSSB(&red,GLbyte); LSSB(&green,GLbyte); LSSB(&blue,GLbyte); 
ENDLOG
((glSecondaryColor3bEXTPtr)(realFunctPtr[408]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3bvEXT(CGLbyteP v);
DEFINE_FUNC(409, glSecondaryColor3bvEXT, GLCALLCONV, void, (CGLbyteP v))
IF_LOGGING(409)
LS << MAGIC << HEADERSIZE  + sizeof(CGLbyteP) << ID_LOG << 409;
LSSB(&v,CGLbyteP); 
ENDLOG
((glSecondaryColor3bvEXTPtr)(realFunctPtr[409]))(v); }

// GLCALLCONV void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue);
DEFINE_FUNC(410, glSecondaryColor3dEXT, GLCALLCONV, void, (GLdouble red, GLdouble green, GLdouble blue))
IF_LOGGING(410)
LS << MAGIC << HEADERSIZE  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) << ID_LOG << 410;
LSSB(&red,GLdouble); LSSB(&green,GLdouble); LSSB(&blue,GLdouble); 
ENDLOG
((glSecondaryColor3dEXTPtr)(realFunctPtr[410]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3dvEXT(CGLdoubleP v);
DEFINE_FUNC(411, glSecondaryColor3dvEXT, GLCALLCONV, void, (CGLdoubleP v))
IF_LOGGING(411)
LS << MAGIC << HEADERSIZE  + sizeof(CGLdoubleP) << ID_LOG << 411;
LSSB(&v,CGLdoubleP); 
ENDLOG
((glSecondaryColor3dvEXTPtr)(realFunctPtr[411]))(v); }

// GLCALLCONV void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue);
DEFINE_FUNC(412, glSecondaryColor3fEXT, GLCALLCONV, void, (GLfloat red, GLfloat green, GLfloat blue))
IF_LOGGING(412)
LS << MAGIC << HEADERSIZE  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) << ID_LOG << 412;
LSSB(&red,GLfloat); LSSB(&green,GLfloat); LSSB(&blue,GLfloat); 
ENDLOG
((glSecondaryColor3fEXTPtr)(realFunctPtr[412]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3fvEXT(CGLfloatP v);
DEFINE_FUNC(413, glSecondaryColor3fvEXT, GLCALLCONV, void, (CGLfloatP v))
IF_LOGGING(413)
LS << MAGIC << HEADERSIZE  + sizeof(CGLfloatP) << ID_LOG << 413;
LSSB(&v,CGLfloatP); 
ENDLOG
((glSecondaryColor3fvEXTPtr)(realFunctPtr[413]))(v); }

// GLCALLCONV void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue);
DEFINE_FUNC(414, glSecondaryColor3iEXT, GLCALLCONV, void, (GLint red, GLint green, GLint blue))
IF_LOGGING(414)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) << ID_LOG << 414;
LSSB(&red,GLint); LSSB(&green,GLint); LSSB(&blue,GLint); 
ENDLOG
((glSecondaryColor3iEXTPtr)(realFunctPtr[414]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3ivEXT(CGLintP v);
DEFINE_FUNC(415, glSecondaryColor3ivEXT, GLCALLCONV, void, (CGLintP v))
IF_LOGGING(415)
LS << MAGIC << HEADERSIZE  + sizeof(CGLintP) << ID_LOG << 415;
LSSB(&v,CGLintP); 
ENDLOG
((glSecondaryColor3ivEXTPtr)(realFunctPtr[415]))(v); }

// GLCALLCONV void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue);
DEFINE_FUNC(416, glSecondaryColor3sEXT, GLCALLCONV, void, (GLshort red, GLshort green, GLshort blue))
IF_LOGGING(416)
LS << MAGIC << HEADERSIZE  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) << ID_LOG << 416;
LSSB(&red,GLshort); LSSB(&green,GLshort); LSSB(&blue,GLshort); 
ENDLOG
((glSecondaryColor3sEXTPtr)(realFunctPtr[416]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3svEXT(CGLshortP v);
DEFINE_FUNC(417, glSecondaryColor3svEXT, GLCALLCONV, void, (CGLshortP v))
IF_LOGGING(417)
LS << MAGIC << HEADERSIZE  + sizeof(CGLshortP) << ID_LOG << 417;
LSSB(&v,CGLshortP); 
ENDLOG
((glSecondaryColor3svEXTPtr)(realFunctPtr[417]))(v); }

// GLCALLCONV void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue);
DEFINE_FUNC(418, glSecondaryColor3ubEXT, GLCALLCONV, void, (GLubyte red, GLubyte green, GLubyte blue))
IF_LOGGING(418)
LS << MAGIC << HEADERSIZE  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) << ID_LOG << 418;
LSSB(&red,GLubyte); LSSB(&green,GLubyte); LSSB(&blue,GLubyte); 
ENDLOG
((glSecondaryColor3ubEXTPtr)(realFunctPtr[418]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3ubvEXT(CGLubyteP v);
DEFINE_FUNC(419, glSecondaryColor3ubvEXT, GLCALLCONV, void, (CGLubyteP v))
IF_LOGGING(419)
LS << MAGIC << HEADERSIZE  + sizeof(CGLubyteP) << ID_LOG << 419;
LSSB(&v,CGLubyteP); 
ENDLOG
((glSecondaryColor3ubvEXTPtr)(realFunctPtr[419]))(v); }

// GLCALLCONV void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue);
DEFINE_FUNC(420, glSecondaryColor3uiEXT, GLCALLCONV, void, (GLuint red, GLuint green, GLuint blue))
IF_LOGGING(420)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) << ID_LOG << 420;
LSSB(&red,GLuint); LSSB(&green,GLuint); LSSB(&blue,GLuint); 
ENDLOG
((glSecondaryColor3uiEXTPtr)(realFunctPtr[420]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3uivEXT(CGLuintP v);
DEFINE_FUNC(421, glSecondaryColor3uivEXT, GLCALLCONV, void, (CGLuintP v))
IF_LOGGING(421)
LS << MAGIC << HEADERSIZE  + sizeof(CGLuintP) << ID_LOG << 421;
LSSB(&v,CGLuintP); 
ENDLOG
((glSecondaryColor3uivEXTPtr)(realFunctPtr[421]))(v); }

// GLCALLCONV void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue);
DEFINE_FUNC(422, glSecondaryColor3usEXT, GLCALLCONV, void, (GLushort red, GLushort green, GLushort blue))
IF_LOGGING(422)
LS << MAGIC << HEADERSIZE  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) << ID_LOG << 422;
LSSB(&red,GLushort); LSSB(&green,GLushort); LSSB(&blue,GLushort); 
ENDLOG
((glSecondaryColor3usEXTPtr)(realFunctPtr[422]))(red, green, blue); }

// GLCALLCONV void glSecondaryColor3usvEXT(CGLushortP v);
DEFINE_FUNC(423, glSecondaryColor3usvEXT, GLCALLCONV, void, (CGLushortP v))
IF_LOGGING(423)
LS << MAGIC << HEADERSIZE  + sizeof(CGLushortP) << ID_LOG << 423;
LSSB(&v,CGLushortP); 
ENDLOG
((glSecondaryColor3usvEXTPtr)(realFunctPtr[423]))(v); }

// GLCALLCONV void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLvoidP pointer);
DEFINE_FUNC(424, glSecondaryColorPointerEXT, GLCALLCONV, void, (GLint size, GLenum type, GLsizei stride, GLvoidP pointer))
IF_LOGGING(424)
LS << MAGIC << HEADERSIZE  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLvoidP) << ID_LOG << 424;
LSSB(&size,GLint); LSSB(&type,GLenum); LSSB(&stride,GLsizei); LSSB(&pointer,GLvoidP); 
ENDLOG
((glSecondaryColorPointerEXTPtr)(realFunctPtr[424]))(size, type, stride, pointer); }

// GLCALLCONV void glGenFencesNV(GLsizei n, GLuintP fences);
DEFINE_FUNC(425, glGenFencesNV, GLCALLCONV, void, (GLsizei n, GLuintP fences))
IF_LOGGING(425)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(GLuintP) << ID_LOG << 425;
LSSB(&n,GLsizei); LSSB(&fences,GLuintP); 
ENDLOG
((glGenFencesNVPtr)(realFunctPtr[425]))(n, fences); }

// GLCALLCONV void glDeleteFencesNV(GLsizei n, CGLuintP fences);
DEFINE_FUNC(426, glDeleteFencesNV, GLCALLCONV, void, (GLsizei n, CGLuintP fences))
IF_LOGGING(426)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLuintP) << ID_LOG << 426;
LSSB(&n,GLsizei); LSSB(&fences,CGLuintP); 
ENDLOG
((glDeleteFencesNVPtr)(realFunctPtr[426]))(n, fences); }

// GLCALLCONV void glSetFenceNV(GLuint fence, GLenum condition);
DEFINE_FUNC(427, glSetFenceNV, GLCALLCONV, void, (GLuint fence, GLenum condition))
IF_LOGGING(427)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLenum) << ID_LOG << 427;
LSSB(&fence,GLuint); LSSB(&condition,GLenum); 
ENDLOG
((glSetFenceNVPtr)(realFunctPtr[427]))(fence, condition); }

// GLCALLCONV GLboolean glTestFenceNV(GLuint fence);
DEFINE_FUNC(428, glTestFenceNV, GLCALLCONV, GLboolean, (GLuint fence))
IF_LOGGING(428)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 428;
LSSB(&fence,GLuint); 
ENDLOG
return ((glTestFenceNVPtr)(realFunctPtr[428]))(fence); }

// GLCALLCONV void glFinishFenceNV(GLuint fence);
DEFINE_FUNC(429, glFinishFenceNV, GLCALLCONV, void, (GLuint fence))
IF_LOGGING(429)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 429;
LSSB(&fence,GLuint); 
ENDLOG
((glFinishFenceNVPtr)(realFunctPtr[429]))(fence); }

// GLCALLCONV GLboolean glIsFenceNV(GLuint fence);
DEFINE_FUNC(430, glIsFenceNV, GLCALLCONV, GLboolean, (GLuint fence))
IF_LOGGING(430)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) << ID_LOG << 430;
LSSB(&fence,GLuint); 
ENDLOG
return ((glIsFenceNVPtr)(realFunctPtr[430]))(fence); }

// GLCALLCONV void glGetFenceivNV(GLuint fence, GLenum pname, GLintP params);
DEFINE_FUNC(431, glGetFenceivNV, GLCALLCONV, void, (GLuint fence, GLenum pname, GLintP params))
IF_LOGGING(431)
LS << MAGIC << HEADERSIZE  + sizeof(GLuint) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 431;
LSSB(&fence,GLuint); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetFenceivNVPtr)(realFunctPtr[431]))(fence, pname, params); }

// GLCALLCONV void glCombinerParameterfvNV(GLenum pname, CGLfloatP params);
DEFINE_FUNC(432, glCombinerParameterfvNV, GLCALLCONV, void, (GLenum pname, CGLfloatP params))
IF_LOGGING(432)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLfloatP) << ID_LOG << 432;
LSSB(&pname,GLenum); LSSB(&params,CGLfloatP); 
ENDLOG
((glCombinerParameterfvNVPtr)(realFunctPtr[432]))(pname, params); }

// GLCALLCONV void glCombinerParameterfNV(GLenum pname, GLfloat param);
DEFINE_FUNC(433, glCombinerParameterfNV, GLCALLCONV, void, (GLenum pname, GLfloat param))
IF_LOGGING(433)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLfloat) << ID_LOG << 433;
LSSB(&pname,GLenum); LSSB(&param,GLfloat); 
ENDLOG
((glCombinerParameterfNVPtr)(realFunctPtr[433]))(pname, param); }

// GLCALLCONV void glCombinerParameterivNV(GLenum pname, CGLintP params);
DEFINE_FUNC(434, glCombinerParameterivNV, GLCALLCONV, void, (GLenum pname, CGLintP params))
IF_LOGGING(434)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(CGLintP) << ID_LOG << 434;
LSSB(&pname,GLenum); LSSB(&params,CGLintP); 
ENDLOG
((glCombinerParameterivNVPtr)(realFunctPtr[434]))(pname, params); }

// GLCALLCONV void glCombinerParameteriNV(GLenum pname, GLint param);
DEFINE_FUNC(435, glCombinerParameteriNV, GLCALLCONV, void, (GLenum pname, GLint param))
IF_LOGGING(435)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLint) << ID_LOG << 435;
LSSB(&pname,GLenum); LSSB(&param,GLint); 
ENDLOG
((glCombinerParameteriNVPtr)(realFunctPtr[435]))(pname, param); }

// GLCALLCONV void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
DEFINE_FUNC(436, glCombinerInputNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage))
IF_LOGGING(436)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 436;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&input,GLenum); LSSB(&mapping,GLenum); LSSB(&componentUsage,GLenum); 
ENDLOG
((glCombinerInputNVPtr)(realFunctPtr[436]))(stage, portion, variable, input, mapping, componentUsage); }

// GLCALLCONV void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
DEFINE_FUNC(437, glCombinerOutputNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum))
IF_LOGGING(437)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) << ID_LOG << 437;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&abOutput,GLenum); LSSB(&cdOutput,GLenum); LSSB(&sumOutput,GLenum); LSSB(&scale,GLenum); LSSB(&bias,GLenum); LSSB(&abDotProduct,GLboolean); LSSB(&cdDotProduct,GLboolean); LSSB(&muxSum,GLboolean); 
ENDLOG
((glCombinerOutputNVPtr)(realFunctPtr[437]))(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum); }

// GLCALLCONV void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
DEFINE_FUNC(438, glFinalCombinerInputNV, GLCALLCONV, void, (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage))
IF_LOGGING(438)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) << ID_LOG << 438;
LSSB(&variable,GLenum); LSSB(&input,GLenum); LSSB(&mapping,GLenum); LSSB(&componentUsage,GLenum); 
ENDLOG
((glFinalCombinerInputNVPtr)(realFunctPtr[438]))(variable, input, mapping, componentUsage); }

// GLCALLCONV void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloatP params);
DEFINE_FUNC(439, glGetCombinerInputParameterfvNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloatP params))
IF_LOGGING(439)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 439;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetCombinerInputParameterfvNVPtr)(realFunctPtr[439]))(stage, portion, variable, pname, params); }

// GLCALLCONV void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLintP params);
DEFINE_FUNC(440, glGetCombinerInputParameterivNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLintP params))
IF_LOGGING(440)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 440;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetCombinerInputParameterivNVPtr)(realFunctPtr[440]))(stage, portion, variable, pname, params); }

// GLCALLCONV void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloatP params);
DEFINE_FUNC(441, glGetCombinerOutputParameterfvNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum pname, GLfloatP params))
IF_LOGGING(441)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 441;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetCombinerOutputParameterfvNVPtr)(realFunctPtr[441]))(stage, portion, pname, params); }

// GLCALLCONV void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLintP params);
DEFINE_FUNC(442, glGetCombinerOutputParameterivNV, GLCALLCONV, void, (GLenum stage, GLenum portion, GLenum pname, GLintP params))
IF_LOGGING(442)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 442;
LSSB(&stage,GLenum); LSSB(&portion,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetCombinerOutputParameterivNVPtr)(realFunctPtr[442]))(stage, portion, pname, params); }

// GLCALLCONV void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloatP params);
DEFINE_FUNC(443, glGetFinalCombinerInputParameterfvNV, GLCALLCONV, void, (GLenum variable, GLenum pname, GLfloatP params))
IF_LOGGING(443)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) << ID_LOG << 443;
LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLfloatP); 
ENDLOG
((glGetFinalCombinerInputParameterfvNVPtr)(realFunctPtr[443]))(variable, pname, params); }

// GLCALLCONV void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLintP params);
DEFINE_FUNC(444, glGetFinalCombinerInputParameterivNV, GLCALLCONV, void, (GLenum variable, GLenum pname, GLintP params))
IF_LOGGING(444)
LS << MAGIC << HEADERSIZE  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) << ID_LOG << 444;
LSSB(&variable,GLenum); LSSB(&pname,GLenum); LSSB(&params,GLintP); 
ENDLOG
((glGetFinalCombinerInputParameterivNVPtr)(realFunctPtr[444]))(variable, pname, params); }

// GLCALLCONV void glFlushVertexArrayRangeNV(void);
DEFINE_FUNC(445, glFlushVertexArrayRangeNV, GLCALLCONV, void, ())
IF_LOGGING(445)
LS << MAGIC << HEADERSIZE << ID_LOG << 445;
ENDLOG
((glFlushVertexArrayRangeNVPtr)(realFunctPtr[445]))(); }

// GLCALLCONV void glVertexArrayRangeNV(GLsizei size, CGLvoidP pointer);
DEFINE_FUNC(446, glVertexArrayRangeNV, GLCALLCONV, void, (GLsizei size, CGLvoidP pointer))
IF_LOGGING(446)
LS << MAGIC << HEADERSIZE  + sizeof(GLsizei) + sizeof(CGLvoidP) << ID_LOG << 446;
LSSB(&size,GLsizei); LSSB(&pointer,CGLvoidP); 
ENDLOG
((glVertexArrayRangeNVPtr)(realFunctPtr[446]))(size, pointer); }

// GLCALLCONV GLvoidP wglAllocateMemoryNV(int size, float readfreq, float writefreq, float priority);
DEFINE_FUNC(447, wglAllocateMemoryNV, GLCALLCONV, GLvoidP, (int size, float readfreq, float writefreq, float priority))
IF_LOGGING(447)
LS << MAGIC << HEADERSIZE  + sizeof(int) + sizeof(float) + sizeof(float) + sizeof(float) << ID_LOG << 447;
LSSB(&size,int); LSSB(&readfreq,float); LSSB(&writefreq,float); LSSB(&priority,float); 
ENDLOG
return ((wglAllocateMemoryNVPtr)(realFunctPtr[447]))(size, readfreq, writefreq, priority); }

// GLCALLCONV void wglFreeMemoryNV(GLvoidP pointer);
DEFINE_FUNC(448, wglFreeMemoryNV, GLCALLCONV, void, (GLvoidP pointer))
IF_LOGGING(448)
LS << MAGIC << HEADERSIZE  + sizeof(GLvoidP) << ID_LOG << 448;
LSSB(&pointer,GLvoidP); 
ENDLOG
((wglFreeMemoryNVPtr)(realFunctPtr[448]))(pointer); }

// GLCALLCONV int wglSwapIntervalEXT(int a);
DEFINE_FUNC(449, wglSwapIntervalEXT, GLCALLCONV, int, (int a))
IF_LOGGING(449)
LS << MAGIC << HEADERSIZE  + sizeof(int) << ID_LOG << 449;
LSSB(&a,int); 
ENDLOG
return ((wglSwapIntervalEXTPtr)(realFunctPtr[449]))(a); }

// GLCALLCONV int wglGetSwapIntervalEXT();
DEFINE_FUNC(450, wglGetSwapIntervalEXT, GLCALLCONV, int, ())
IF_LOGGING(450)
LS << MAGIC << HEADERSIZE  << ID_LOG << 450;
ENDLOG
return ((wglGetSwapIntervalEXTPtr)(realFunctPtr[450]))(); }


