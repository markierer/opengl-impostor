/**
* DECODE OpenGL32
* This file includes all the data for building the decoding functions.
* After copying the decoded data to local variables, the decoding function
* calls the original OpenGL function.
*/

DECODE_FUNC(0,glAccum,0  + sizeof(GLenum) + sizeof(GLfloat) )
GLenum op; GLfloat value;
LSSB32(&op,GLenum); LSSB32(&value,GLfloat);
glAccum(op, value);
ENDDECODE
DECODE_FUNC(1,glAlphaFunc,0  + sizeof(GLenum) + sizeof(GLclampf) )
GLenum func; GLclampf ref;
LSSB32(&func,GLenum); LSSB32(&ref,GLclampf);
glAlphaFunc(func, ref);
ENDDECODE
/*DECODE_FUNC(2,glAreTexturesResident)
FUNC_SIZE(2,0  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(GLbooleanP) )
LSSB32(&n,GLsizei); LSSB32(&textures,CGLuintP); LSSB32(&residences,GLbooleanP);
ENDDECODE*/
DECODE_FUNC(3,glArrayElement,0  + sizeof(GLint) )
GLint i;
LSSB32(&i,GLint);
glArrayElement(i);
ENDDECODE
DECODE_FUNC(4,glBegin,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glBegin(mode);
ENDDECODE
DECODE_FUNC(5,glBindTexture,0  + sizeof(GLenum) + sizeof(GLuint) )
GLenum target; GLuint texture;
LSSB32(&target,GLenum); LSSB32(&texture,GLuint);
glBindTexture(target, texture);
ENDDECODE
DECODE_FUNC(6,glBitmap,0  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) /*+ sizeof(CGLubyteP)*/ )
GLsizei width, height; GLfloat xorig, yorig, xmove, ymove;
LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&xorig,GLfloat); LSSB32(&yorig,GLfloat); LSSB32(&xmove,GLfloat); LSSB32(&ymove,GLfloat);
unsigned size = ((unsigned)((width + 7) / 8)) * height; GLubyte * bitmap = new GLubyte [size];
for(unsigned i=0;i<size;i++) { LSSB8(&bitmap[i],GLubyte); }
glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
ENDDECODE
DECODE_FUNC(7,glBlendFunc,0  + sizeof(GLenum) + sizeof(GLenum) )
GLenum sfactor, dfactor;
LSSB32(&sfactor,GLenum); LSSB32(&dfactor,GLenum);
glBlendFunc(sfactor, dfactor);
ENDDECODE
DECODE_FUNC(8,glCallList,0  + sizeof(GLuint) )
GLuint list;
LSSB32(&list,GLuint);
glCallList(list);
ENDDECODE
DECODE_FUNC(9,glCallLists,0  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLuint) /*+ sizeof(CGLvoidP)*/ )
GLsizei n; GLenum type;
LSSB32(&n,GLsizei); LSSB32(&type,GLenum);
if (type == GL_BYTE) {
	GLbyte * lists = new GLbyte [n];
	for(int i=0;i<n;i++) { LSSB8(&lists[i],GLbyte); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_UNSIGNED_BYTE) {
	GLubyte * lists = new GLubyte [n];
	for(int i=0;i<n;i++) { LSSB8(&lists[i],GLubyte); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_SHORT) {
	GLshort * lists = new GLshort [n];
	for(int i=0;i<n;i++) { LSSB16(&lists[i],GLshort); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_UNSIGNED_SHORT) {
	GLushort * lists = new GLushort [n];
	for(int i=0;i<n;i++) { LSSB16(&lists[i],GLushort); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_INT) {
	GLint * lists = new GLint [n];
	for(int i=0;i<n;i++) { LSSB32(&lists[i],GLint); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_UNSIGNED_INT) {
	GLuint * lists = new GLuint [n];
	for(int i=0;i<n;i++) { LSSB32(&lists[i],GLuint); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_FLOAT) {
	GLfloat * lists = new GLfloat [n];
	for(int i=0;i<n;i++) { LSSB32(&lists[i],GLfloat); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_2_BYTES) {
	GLbyte * lists = new GLbyte [n*2];
	for(int i=0;i<n*2;i++) { LSSB8(&lists[i],GLbyte); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_3_BYTES) {
	GLbyte * lists = new GLbyte [n*3];
	for(int i=0;i<n*3;i++) { LSSB8(&lists[i],GLbyte); }
  glCallLists(n, type, (void*)lists); }
else if (type == GL_4_BYTES) {
	GLbyte * lists = new GLbyte [n*4];
	for(int i=0;i<n*4;i++) { LSSB8(&lists[i],GLbyte); }
  glCallLists(n, type, (void*)lists); }
ENDDECODE
DECODE_FUNC(10,glClear,0  + sizeof(GLbitfield) )
GLbitfield mask;
LSSB32(&mask,GLbitfield);
glClear(mask);
ENDDECODE
DECODE_FUNC(11,glClearAccum,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat red, green, blue, alpha;
LSSB32(&red,GLfloat); LSSB32(&green,GLfloat); LSSB32(&blue,GLfloat); LSSB32(&alpha,GLfloat);
glClearAccum(red, green, blue, alpha);
ENDDECODE
DECODE_FUNC(12,glClearColor,0  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) )
GLclampf red, green, blue, alpha;
LSSB32(&red,GLclampf); LSSB32(&green,GLclampf); LSSB32(&blue,GLclampf); LSSB32(&alpha,GLclampf);
glClearColor(red, green, blue, alpha);
ENDDECODE
DECODE_FUNC(13,glClearDepth,0  + sizeof(GLclampd) )
GLclampd depth;
LSSB64(&depth,GLclampd);
glClearDepth(depth);
ENDDECODE
DECODE_FUNC(14,glClearIndex,0  + sizeof(GLfloat) )
GLfloat c;
LSSB32(&c,GLfloat);
glClearIndex(c);
ENDDECODE
DECODE_FUNC(15,glClearStencil,0  + sizeof(GLint) )
GLint s;
LSSB32(&s,GLint);
glClearStencil(s);
ENDDECODE
DECODE_FUNC(16,glClipPlane,0  + sizeof(GLenum) + sizeof(GLdouble) * 4 )
GLenum plane; GLdouble * equation = new GLdouble [4];
LSSB32(&plane,GLenum); LSSB64(&equation[0],GLdouble); LSSB64(&equation[1],GLdouble); LSSB64(&equation[2],GLdouble); LSSB64(&equation[3],GLdouble);
glClipPlane(plane, equation);
ENDDECODE
DECODE_FUNC(17,glColor3b,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
GLbyte red, green, blue;
LSSB8(&red,GLbyte); LSSB8(&green,GLbyte); LSSB8(&blue,GLbyte);
glColor3b(red, green, blue);
ENDDECODE
/*DECODE_FUNC(18,glColor3bv)
FUNC_SIZE(18,0  + sizeof(CGLbyteP) )
LSSB32(&v,CGLbyteP); 
ENDDECODE*/
DECODE_FUNC(19,glColor3d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble red, green, blue;
LSSB64(&red,GLdouble); LSSB64(&green,GLdouble); LSSB64(&blue,GLdouble);
glColor3d(red, green, blue);
ENDDECODE
/*DECODE_FUNC(20,glColor3dv)
FUNC_SIZE(20,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(21,glColor3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat red, green, blue; 
LSSB32(&red,GLfloat); LSSB32(&green,GLfloat); LSSB32(&blue,GLfloat);
glColor3f(red, green, blue);
ENDDECODE
/*DECODE_FUNC(22,glColor3fv)
FUNC_SIZE(22,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(23,glColor3i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint red, green, blue;
LSSB32(&red,GLint); LSSB32(&green,GLint); LSSB32(&blue,GLint);
glColor3i(red, green, blue);
ENDDECODE
/*DECODE_FUNC(24,glColor3iv)
FUNC_SIZE(24,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(25,glColor3s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort red, green, blue;
LSSB16(&red,GLshort); LSSB16(&green,GLshort); LSSB16(&blue,GLshort);
glColor3s(red, green, blue);
ENDDECODE
/*DECODE_FUNC(26,glColor3sv)
FUNC_SIZE(26,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE*/
DECODE_FUNC(27,glColor3ub,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
GLubyte red, green, blue;
LSSB8(&red,GLubyte); LSSB8(&green,GLubyte); LSSB8(&blue,GLubyte);
glColor3ub(red, green, blue);
ENDDECODE
/*DECODE_FUNC(28,glColor3ubv)
FUNC_SIZE(28,0  + sizeof(CGLubyteP) )
LSSB32(&v,CGLubyteP); 
ENDDECODE*/
DECODE_FUNC(29,glColor3ui,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
GLuint red, green, blue;
LSSB32(&red,GLuint); LSSB32(&green,GLuint); LSSB32(&blue,GLuint);
glColor3ui(red, green, blue);
ENDDECODE
/*DECODE_FUNC(30,glColor3uiv)
FUNC_SIZE(30,0  + sizeof(CGLuintP) )
LSSB32(&v,CGLuintP); 
ENDDECODE*/
DECODE_FUNC(31,glColor3us,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
GLushort red, green, blue;
LSSB16(&red,GLushort); LSSB16(&green,GLushort); LSSB16(&blue,GLushort);
glColor3us(red, green, blue);
ENDDECODE
/*DECODE_FUNC(32,glColor3usv)
FUNC_SIZE(32,0  + sizeof(CGLushortP) )
LSSB32(&v,CGLushortP); 
ENDDECODE*/
DECODE_FUNC(33,glColor4b,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
GLbyte red, green, blue, alpha;
LSSB8(&red,GLbyte); LSSB8(&green,GLbyte); LSSB8(&blue,GLbyte); LSSB8(&alpha,GLbyte);
glColor4b(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(34,glColor4bv)
FUNC_SIZE(34,0  + sizeof(CGLbyteP) )
LSSB32(&v,CGLbyteP); 
ENDDECODE*/
DECODE_FUNC(35,glColor4d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble red, green, blue, alpha;
LSSB64(&red,GLdouble); LSSB64(&green,GLdouble); LSSB64(&blue,GLdouble); LSSB64(&alpha,GLdouble);
glColor4d(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(36,glColor4dv)
FUNC_SIZE(36,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(37,glColor4f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat red, green, blue, alpha;
LSSB32(&red,GLfloat); LSSB32(&green,GLfloat); LSSB32(&blue,GLfloat); LSSB32(&alpha,GLfloat);
glColor4f(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(38,glColor4fv)
FUNC_SIZE(38,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(39,glColor4i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint red, green, blue, alpha;
LSSB32(&red,GLint); LSSB32(&green,GLint); LSSB32(&blue,GLint); LSSB32(&alpha,GLint);
glColor4i(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(40,glColor4iv)
FUNC_SIZE(40,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(41,glColor4s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort red, green, blue, alpha;
LSSB16(&red,GLshort); LSSB16(&green,GLshort); LSSB16(&blue,GLshort); LSSB16(&alpha,GLshort);
glColor4s(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(42,glColor4sv)
FUNC_SIZE(42,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(43,glColor4ub,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
GLubyte red, green, blue, alpha;
LSSB8(&red,GLubyte); LSSB8(&green,GLubyte); LSSB8(&blue,GLubyte); LSSB8(&alpha,GLubyte);
glColor4ub(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(44,glColor4ubv)
FUNC_SIZE(44,0  + sizeof(CGLubyteP) )
LSSB32(&v,CGLubyteP); 
ENDDECODE*/
DECODE_FUNC(45,glColor4ui,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
GLuint red, green, blue, alpha;
LSSB32(&red,GLuint); LSSB32(&green,GLuint); LSSB32(&blue,GLuint); LSSB32(&alpha,GLuint);
glColor4ui(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(46,glColor4uiv)
FUNC_SIZE(46,0  + sizeof(CGLuintP) )
LSSB32(&v,CGLuintP); 
ENDDECODE*/
DECODE_FUNC(47,glColor4us,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
GLushort red, green, blue, alpha;
LSSB16(&red,GLushort); LSSB16(&green,GLushort); LSSB16(&blue,GLushort); LSSB16(&alpha,GLushort);
glColor4us(red, green, blue, alpha);
ENDDECODE
/*DECODE_FUNC(48,glColor4usv)
FUNC_SIZE(48,0  + sizeof(CGLushortP) )
LSSB32(&v,CGLushortP); 
ENDDECODE*/
DECODE_FUNC(49,glColorMask,0  + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) )
GLboolean red, green, blue, alpha;
LSSB8(&red,GLboolean); LSSB8(&green,GLboolean); LSSB8(&blue,GLboolean); LSSB8(&alpha,GLboolean);
glColorMask(red, green, blue, alpha);
ENDDECODE
DECODE_FUNC(50,glColorMaterial,0  + sizeof(GLenum) + sizeof(GLenum) )
GLenum face, mode;
LSSB32(&face,GLenum); LSSB32(&mode,GLenum);
glColorMaterial(face, mode);
ENDDECODE
/*DECODE_FUNC(51,glColorPointer)
FUNC_SIZE(51,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&size,GLint); LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE*/
DECODE_FUNC(52,glCopyPixels,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) )
GLint x, y; GLsizei width, height; GLenum type;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&type,GLenum);
glCopyPixels(x, y, width, height, type);
ENDDECODE
DECODE_FUNC(53,glCopyTexImage1D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) )
GLenum target, internalFormat; GLint level, x, y, border; GLsizei width;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&internalFormat,GLenum); LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&border,GLint);
glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
ENDDECODE
DECODE_FUNC(54,glCopyTexImage2D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) )
GLenum target, internalFormat; GLint level, x, y, border; GLsizei width, height;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&internalFormat,GLenum); LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&border,GLint);
glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
ENDDECODE
DECODE_FUNC(55,glCopyTexSubImage1D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) )
GLenum target, internalFormat; GLint level, x, y, xoffset; GLsizei width;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&xoffset,GLint); LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei);
glCopyTexSubImage1D(target, level, xoffset, x, y, width);
ENDDECODE
DECODE_FUNC(56,glCopyTexSubImage2D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
GLenum target, internalFormat; GLint level, x, y, xoffset, yoffset; GLsizei width, height;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&xoffset,GLint); LSSB32(&yoffset,GLint); LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei);
glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
ENDDECODE
DECODE_FUNC(57,glCullFace,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glCullFace(mode);
ENDDECODE
DECODE_FUNC(58,glDeleteLists,0  + sizeof(GLuint) + sizeof(GLsizei) )
GLuint list; GLsizei range;
LSSB32(&list,GLuint); LSSB32(&range,GLsizei);
glDeleteLists(list, range);
ENDDECODE
/*DECODE_FUNC(59,glDeleteTextures)
FUNC_SIZE(59,0  + sizeof(GLsizei) + sizeof(CGLuintP) )
LSSB32(&n,GLsizei); LSSB32(&textures,CGLuintP); 
ENDDECODE*/
DECODE_FUNC(60,glDepthFunc,0  + sizeof(GLenum) )
GLenum func;
LSSB32(&func,GLenum);
glDepthFunc(func);
ENDDECODE
DECODE_FUNC(61,glDepthMask,0  + sizeof(GLboolean) )
GLboolean flag;
LSSB8(&flag,GLboolean);
glDepthMask(flag);
ENDDECODE
DECODE_FUNC(62,glDepthRange,0  + sizeof(GLclampd) + sizeof(GLclampd) )
GLclampd zNear, zFar;
LSSB64(&zNear,GLclampd); LSSB64(&zFar,GLclampd);
glDepthRange(zNear, zFar);
ENDDECODE
DECODE_FUNC(63,glDisable,0  + sizeof(GLenum) )
GLenum cap;
LSSB32(&cap,GLenum);
glDisable(cap);
ENDDECODE
DECODE_FUNC(64,glDisableClientState,0  + sizeof(GLenum) )
GLenum array;
LSSB32(&array,GLenum);
glDisableClientState(array);
ENDDECODE
/*DECODE_FUNC(65,glDrawArrays,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLsizei) )
GLenum mode; GLint first; GLsizei count;
LSSB32(&mode,GLenum); LSSB32(&first,GLint); LSSB32(&count,GLsizei);
glDrawArrays(mode, first, count);
ENDDECODE*/
DECODE_FUNC(66,glDrawBuffer,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glDrawBuffer(mode);
ENDDECODE
/*DECODE_FUNC(67,glDrawElements)
FUNC_SIZE(67,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(CGLvoidP) )
LSSB32(&mode,GLenum); LSSB32(&count,GLsizei); LSSB32(&type,GLenum); LSSB32(&indices,CGLvoidP); 
ENDDECODE*/
DECODE_FUNC(68,glDrawPixels,0  + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) /*+ sizeof(CGLvoidP)*/ )
GLsizei width, height; GLenum format, type;
LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&format,GLenum); LSSB32(&type,GLenum);
unsigned bytes = crImageSize(format, type, width, height); GLbyte * pixels = new GLbyte [bytes];
for(unsigned i=0;i<bytes;i++) { LSSB8(&pixels[i],GLbyte); }
glDrawPixels(width, height, format, type, (void*)pixels);
ENDDECODE
DECODE_FUNC(69,glEdgeFlag,0  + sizeof(GLboolean) )
GLboolean flag;
LSSB8(&flag,GLboolean);
glEdgeFlag(flag);
ENDDECODE
/*DECODE_FUNC(70,glEdgeFlagPointer)
FUNC_SIZE(70,0  + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE
DECODE_FUNC(71,glEdgeFlagv)
FUNC_SIZE(71,0  + sizeof(CGLbooleanP) )
LSSB32(&flag,CGLbooleanP); 
ENDDECODE*/
DECODE_FUNC(72,glEnable,0  + sizeof(GLenum) )
GLenum cap;
LSSB32(&cap,GLenum);
glEnable(cap);
ENDDECODE
DECODE_FUNC(73,glEnableClientState,0  + sizeof(GLenum) )
GLenum array;
LSSB32(&array,GLenum);
glEnableClientState(array);
ENDDECODE
DECODE_FUNC(74,glEnd,0  )
glEnd();
ENDDECODE
DECODE_FUNC(75,glEndList,0  )
glEndList();
ENDDECODE
DECODE_FUNC(76,glEvalCoord1d,0  + sizeof(GLdouble) )
GLdouble u;
LSSB64(&u,GLdouble);
glEvalCoord1d(u);
ENDDECODE
/*DECODE_FUNC(77,glEvalCoord1dv)
FUNC_SIZE(77,0  + sizeof(CGLdoubleP) )
LSSB32(&u,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(78,glEvalCoord1f,0  + sizeof(GLfloat) )
GLfloat u;
LSSB32(&u,GLfloat);
glEvalCoord1f(u);
ENDDECODE
/*DECODE_FUNC(79,glEvalCoord1fv)
FUNC_SIZE(79,0  + sizeof(CGLfloatP) )
LSSB32(&u,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(80,glEvalCoord2d,0  + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble u, v;
LSSB64(&u,GLdouble); LSSB64(&v,GLdouble);
glEvalCoord2d(u, v);
ENDDECODE
/*DECODE_FUNC(81,glEvalCoord2dv)
FUNC_SIZE(81,0  + sizeof(CGLdoubleP) )
LSSB32(&u,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(82,glEvalCoord2f,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat u, v;
LSSB32(&u,GLfloat); LSSB32(&v,GLfloat);
glEvalCoord2f(u, v);
ENDDECODE
/*DECODE_FUNC(83,glEvalCoord2fv)
FUNC_SIZE(83,0  + sizeof(CGLfloatP) )
LSSB32(&u,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(84,glEvalMesh1,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) )
GLenum mode; GLint i1, i2;
LSSB32(&mode,GLenum); LSSB32(&i1,GLint); LSSB32(&i2,GLint);
glEvalMesh1(mode, i1, i2);
ENDDECODE
DECODE_FUNC(85,glEvalMesh2,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLenum mode; GLint i1, i2, j1, j2;
LSSB32(&mode,GLenum); LSSB32(&i1,GLint); LSSB32(&i2,GLint); LSSB32(&j1,GLint); LSSB32(&j2,GLint);
glEvalMesh2(mode, i1, i2, j1, j2);
ENDDECODE
DECODE_FUNC(86,glEvalPoint1,0  + sizeof(GLint) )
GLint i;
LSSB32(&i,GLint);
glEvalPoint1(i);
ENDDECODE
DECODE_FUNC(87,glEvalPoint2,0  + sizeof(GLint) + sizeof(GLint) )
GLint i, j;
LSSB32(&i,GLint); LSSB32(&j,GLint);
glEvalPoint2(i, j);
ENDDECODE
/*DECODE_FUNC(88,glFeedbackBuffer)
FUNC_SIZE(88,0  + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&size,GLsizei); LSSB32(&type,GLenum); LSSB32(&buffer,GLfloatP); 
ENDDECODE*/
DECODE_FUNC(89,glFinish,0  )
glFinish();
ENDDECODE
DECODE_FUNC(90,glFlush,0  )
glFlush();
ENDDECODE
DECODE_FUNC(91,glFogf,0  + sizeof(GLenum) + sizeof(GLfloat) )
GLenum pname; GLfloat param;
LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glFogf(pname, param);
ENDDECODE
/*DECODE_FUNC(92,glFogfv)
FUNC_SIZE(92,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&pname,GLenum); LSSB32(&params,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(92,glFogfv,0  + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum pname; GLfloat * params = new GLfloat [4];
LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glFogfv(pname, params);
ENDDECODE
DECODE_FUNC(93,glFogi,0  + sizeof(GLenum) + sizeof(GLint) )
GLenum pname; GLint param;
LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glFogi(pname, param);
ENDDECODE
/*DECODE_FUNC(94,glFogiv)
FUNC_SIZE(94,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&pname,GLenum); LSSB32(&params,CGLintP);
ENDDECODE*/
DECODE_FUNC(94,glFogiv,0  + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum pname; GLint * params = new GLint [4];
LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glFogiv(pname, params);
ENDDECODE
DECODE_FUNC(95,glFrontFace,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glFrontFace(mode);
ENDDECODE
DECODE_FUNC(96,glFrustum,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble left, right, bottom, top, zNear, zFar, tmp;
LSSB64(&left,GLdouble); LSSB64(&right,GLdouble); LSSB64(&bottom,GLdouble); LSSB64(&top,GLdouble); LSSB64(&zNear,GLdouble); LSSB64(&zFar,GLdouble);
glFrustum(left, right, bottom, top, zNear, zFar);
ENDDECODE
DECODE_FUNC(97,glGenLists,0  + sizeof(GLsizei) )
GLsizei range;
LSSB32(&range,GLsizei);
glGenLists(range);
ENDDECODE
DECODE_FUNC(98,glGenTextures,0  + sizeof(GLsizei) )
GLsizei n;
LSSB32(&n,GLsizei);
glGenTextures(n, &textureMem[0]); // TODO: USE MAP LATER
ENDDECODE
/*DECODE_FUNC(99,GlmfBeginGlsBlock)
FUNC_SIZE(99,0  + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); 
ENDDECODE
DECODE_FUNC(100,GlmfEndGlsBlock)
FUNC_SIZE(100,0  + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); 
ENDDECODE
DECODE_FUNC(101,GlmfCloseMetaFile)
FUNC_SIZE(101,0  + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); 
ENDDECODE
DECODE_FUNC(102,GlmfEndPlayback)
FUNC_SIZE(102,0  + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); 
ENDDECODE
DECODE_FUNC(103,GlmfInitPlayback)
FUNC_SIZE(103,0  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); LSSB32(&dwArg2,DWORD); LSSB32(&dwArg3,DWORD);
ENDDECODE
DECODE_FUNC(104,GlmfPlayGlsRecord)
FUNC_SIZE(104,0  + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); LSSB32(&dwArg2,DWORD); LSSB32(&dwArg3,DWORD); LSSB32(&dwArg4,DWORD); 
ENDDECODE
DECODE_FUNC(105,glDebugEntry)
FUNC_SIZE(105,0  + sizeof(DWORD) + sizeof(DWORD) )
LSSB32(&dwArg1,DWORD); LSSB32(&dwArg2,DWORD); 
ENDDECODE
DECODE_FUNC(106,glGetBooleanv)
FUNC_SIZE(106,0  + sizeof(GLenum) + sizeof(GLbooleanP) )
LSSB32(&pname,GLenum); LSSB32(&params,GLbooleanP); 
ENDDECODE
DECODE_FUNC(107,glGetClipPlane)
FUNC_SIZE(107,0  + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB32(&plane,GLenum); LSSB32(&equation,GLdoubleP); 
ENDDECODE
DECODE_FUNC(108,glGetDoublev)
FUNC_SIZE(108,0  + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB32(&pname,GLenum); LSSB32(&params,GLdoubleP); 
ENDDECODE*/
DECODE_FUNC(109,glGetError,0  )
glGetError();
ENDDECODE
/*DECODE_FUNC(110,glGetFloatv)
FUNC_SIZE(110,0  + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(111,glGetIntegerv)
FUNC_SIZE(111,0  + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(112,glGetLightfv)
FUNC_SIZE(112,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(113,glGetLightiv)
FUNC_SIZE(113,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(114,glGetMapdv)
FUNC_SIZE(114,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB32(&target,GLenum); LSSB32(&query,GLenum); LSSB32(&v,GLdoubleP); 
ENDDECODE
DECODE_FUNC(115,glGetMapfv)
FUNC_SIZE(115,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&target,GLenum); LSSB32(&query,GLenum); LSSB32(&v,GLfloatP); 
ENDDECODE
DECODE_FUNC(116,glGetMapiv)
FUNC_SIZE(116,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&target,GLenum); LSSB32(&query,GLenum); LSSB32(&v,GLintP); 
ENDDECODE
DECODE_FUNC(117,glGetMaterialfv)
FUNC_SIZE(117,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(118,glGetMaterialiv)
FUNC_SIZE(118,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(119,glGetPixelMapfv)
FUNC_SIZE(119,0  + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&map,GLenum); LSSB32(&values,GLfloatP); 
ENDDECODE
DECODE_FUNC(120,glGetPixelMapuiv)
FUNC_SIZE(120,0  + sizeof(GLenum) + sizeof(GLuintP) )
LSSB32(&map,GLenum); LSSB32(&values,GLuintP);
ENDDECODE
DECODE_FUNC(121,glGetPixelMapusv)
FUNC_SIZE(121,0  + sizeof(GLenum) + sizeof(GLushortP) )
LSSB32(&map,GLenum); LSSB32(&values,GLushortP); 
ENDDECODE
DECODE_FUNC(122,glGetPointerv)
FUNC_SIZE(122,0  + sizeof(GLenum) + sizeof(GLvoidPP) )
LSSB32(&pname,GLenum); LSSB32(&params,GLvoidPP); 
ENDDECODE
DECODE_FUNC(123,glGetPolygonStipple)
FUNC_SIZE(123,0  + sizeof(GLubyteP) )
LSSB32(&mask,GLubyteP); 
ENDDECODE
DECODE_FUNC(124,glGetString)
FUNC_SIZE(124,0  + sizeof(GLenum) )
LSSB32(&name,GLenum); 
ENDDECODE
DECODE_FUNC(125,glGetTexEnvfv)
FUNC_SIZE(125,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(126,glGetTexEnviv)
FUNC_SIZE(126,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(127,glGetTexGendv)
FUNC_SIZE(127,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdoubleP) )
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLdoubleP); 
ENDDECODE
DECODE_FUNC(128,glGetTexGenfv)
FUNC_SIZE(128,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(129,glGetTexGeniv)
FUNC_SIZE(129,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(130,glGetTexImage)
FUNC_SIZE(130,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) )
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&format,GLenum); LSSB32(&type,GLenum); LSSB32(&pixels,GLvoidP); 
ENDDECODE
DECODE_FUNC(131,glGetTexLevelParameterfv)
FUNC_SIZE(131,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(132,glGetTexLevelParameteriv)
FUNC_SIZE(132,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(133,glGetTexParameterfv)
FUNC_SIZE(133,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(134,glGetTexParameteriv)
FUNC_SIZE(134,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE*/
DECODE_FUNC(135,glHint,0  + sizeof(GLenum) + sizeof(GLenum) )
GLenum target, mode;
LSSB32(&target,GLenum); LSSB32(&mode,GLenum);
glHint(target, mode);
ENDDECODE
DECODE_FUNC(136,glIndexMask,0  + sizeof(GLuint) )
GLuint mask;
LSSB32(&mask,GLuint);
glIndexMask(mask);
ENDDECODE
/*DECODE_FUNC(137,glIndexPointer)
FUNC_SIZE(137,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP);
ENDDECODE*/
DECODE_FUNC(138,glIndexd,0  + sizeof(GLdouble) )
GLdouble c;
LSSB64(&c,GLdouble);
glIndexd(c); 
ENDDECODE
/*DECODE_FUNC(139,glIndexdv)
FUNC_SIZE(139,0  + sizeof(CGLdoubleP) )
LSSB32(&c,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(140,glIndexf,0  + sizeof(GLfloat) )
GLfloat c;
LSSB32(&c,GLfloat);
glIndexf(c);
ENDDECODE
/*DECODE_FUNC(141,glIndexfv)
FUNC_SIZE(141,0  + sizeof(CGLfloatP) )
LSSB32(&c,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(142,glIndexi,0  + sizeof(GLint) )
GLint c;
LSSB32(&c,GLint);
glIndexi(c);
ENDDECODE
/*DECODE_FUNC(143,glIndexiv)
FUNC_SIZE(143,0  + sizeof(CGLintP) )
LSSB32(&c,CGLintP); 
ENDDECODE*/
DECODE_FUNC(144,glIndexs,0  + sizeof(GLshort) )
GLshort c;
LSSB16(&c,GLshort);
glIndexs(c);
ENDDECODE
/*DECODE_FUNC(145,glIndexsv)
FUNC_SIZE(145,0  + sizeof(CGLshortP) )
LSSB32(&c,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(146,glIndexub,0  + sizeof(GLubyte) )
GLubyte c;
LSSB8(&c,GLubyte);
glIndexub(c);
ENDDECODE
/*DECODE_FUNC(147,glIndexubv)
FUNC_SIZE(147,0  + sizeof(CGLubyteP) )
LSSB32(&c,CGLubyteP); 
ENDDECODE*/
DECODE_FUNC(148,glInitNames,0  )
glInitNames();
ENDDECODE
/*DECODE_FUNC(149,glInterleavedArrays)
FUNC_SIZE(149,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&format,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE
DECODE_FUNC(150,glIsEnabled)
FUNC_SIZE(150,0  + sizeof(GLenum) )
LSSB32(&cap,GLenum); 
ENDDECODE
DECODE_FUNC(151,glIsList)
FUNC_SIZE(151,0  + sizeof(GLuint) )
LSSB32(&list,GLuint); 
ENDDECODE
DECODE_FUNC(152,glIsTexture)
FUNC_SIZE(152,0  + sizeof(GLuint) )
LSSB32(&texture,GLuint); 
ENDDECODE*/
DECODE_FUNC(153,glLightModelf,0  + sizeof(GLenum) + sizeof(GLfloat) )
GLenum pname; GLfloat param;
LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glLightModelf(pname, param);
ENDDECODE
DECODE_FUNC(154,glLightModelfv,0  + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum pname; GLfloat * params = new GLfloat [4];
LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glLightModelfv(pname, params);
ENDDECODE
DECODE_FUNC(155,glLightModeli,0  + sizeof(GLenum) + sizeof(GLint) )
GLenum pname; GLint param;
LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glLightModeli(pname, param); 
ENDDECODE
DECODE_FUNC(156,glLightModeliv,0  + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum pname; GLint * params = new GLint [4];
LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glLightModeliv(pname, params);
ENDDECODE
DECODE_FUNC(157,glLightf,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
GLenum light, pname; GLfloat param;
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glLightf(light, pname, param);
ENDDECODE
DECODE_FUNC(158,glLightfv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum light, pname; GLfloat * params = new GLfloat [4];
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glLightfv(light, pname, params);
ENDDECODE
DECODE_FUNC(159,glLighti,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
GLenum light, pname; GLint param;
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glLighti(light, pname, param); 
ENDDECODE
DECODE_FUNC(160,glLightiv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum light, pname; GLint * params = new GLint [4];
LSSB32(&light,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glLightiv(light, pname, params);
ENDDECODE
DECODE_FUNC(161,glLineStipple,0  + sizeof(GLint) + sizeof(GLushort) )
GLint factor; GLushort pattern;
LSSB32(&factor,GLint); LSSB16(&pattern,GLushort);
glLineStipple(factor, pattern);
ENDDECODE
DECODE_FUNC(162,glLineWidth,0  + sizeof(GLfloat) )
GLfloat width;
LSSB32(&width,GLfloat);
glLineWidth(width); 
ENDDECODE
DECODE_FUNC(163,glListBase,0  + sizeof(GLuint) )
GLuint base;
LSSB32(&base,GLuint);
glListBase(base);
ENDDECODE
DECODE_FUNC(164,glLoadIdentity,0  )
glLoadIdentity();
if (matrixMode == GL_MODELVIEW) { // used for client perspective
gluLookAt(eyeX, eyeY, eyeZ,
          centerX, centerY, centerZ,
          upX, upY, upZ); }
ENDDECODE
DECODE_FUNC(165,glLoadMatrixd,0  + sizeof(GLdouble) * 16 )
GLdouble * m = new GLdouble [16];
for(int i=0;i<16;i++) { LSSB64(&m[i],GLdouble); }
glLoadMatrixd(m);
ENDDECODE
DECODE_FUNC(166,glLoadMatrixf,0  + sizeof(GLfloat) * 16 )
GLfloat * m = new GLfloat [16];
for(int i=0;i<16;i++) { LSSB32(&m[i],GLfloat); }
glLoadMatrixf(m);
ENDDECODE
DECODE_FUNC(167,glLoadName,0  + sizeof(GLuint) )
GLuint name;
LSSB32(&name,GLuint);
glLoadName(name);
ENDDECODE
DECODE_FUNC(168,glLogicOp,0  + sizeof(GLenum) )
GLenum opcode;
LSSB32(&opcode,GLenum);
glLogicOp(opcode);
ENDDECODE
DECODE_FUNC(169,glMap1d,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) /*+ sizeof(CGLdoubleP)*/ )
GLenum target; GLdouble u1, u2; GLint stride, order;
LSSB32(&target,GLenum); LSSB64(&u1,GLdouble); LSSB64(&u2,GLdouble); LSSB32(&stride,GLint); LSSB32(&order,GLint);
int size = sizeof(GLdouble) * order * stride; GLdouble * points = new GLdouble [size];
for(int i=0;i<size;i++) { LSSB64(&points[i],GLdouble); }
glMap1d(target, u1, u2, stride, order, points);
ENDDECODE
DECODE_FUNC(170,glMap1f,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) /*+ sizeof(CGLfloatP)*/ )
GLenum target; GLfloat u1, u2; GLint stride, order;
LSSB32(&target,GLenum); LSSB32(&u1,GLfloat); LSSB32(&u2,GLfloat); LSSB32(&stride,GLint); LSSB32(&order,GLint);
int size = sizeof(GLfloat) * order * stride; GLfloat * points = new GLfloat [size];
for(int i=0;i<size;i++) { LSSB32(&points[i],GLfloat); }
glMap1f(target, u1, u2, stride, order, points);
ENDDECODE
DECODE_FUNC(171,glMap2d,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLint) /*+ sizeof(CGLdoubleP)*/ )
GLenum target; GLdouble u1, u2, v1, v2; GLint ustride, uorder, vstride, vorder;
LSSB32(&target,GLenum); LSSB64(&u1,GLdouble); LSSB64(&u2,GLdouble); LSSB32(&ustride,GLint); LSSB32(&uorder,GLint); LSSB64(&v1,GLdouble); LSSB64(&v2,GLdouble); LSSB32(&vstride,GLint); LSSB32(&vorder,GLint);
int size = sizeof(GLdouble) * uorder * vorder * ustride; GLdouble * points = new GLdouble [size];
for(int i=0;i<size;i++) { LSSB64(&points[i],GLdouble); }
glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
ENDDECODE
DECODE_FUNC(172,glMap2f,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLint) + /*sizeof(CGLfloatP)*/ )
GLenum target; GLfloat u1, u2, v1, v2; GLint ustride, uorder, vstride, vorder;
LSSB32(&target,GLenum); LSSB32(&u1,GLfloat); LSSB32(&u2,GLfloat); LSSB32(&ustride,GLint); LSSB32(&uorder,GLint); LSSB32(&v1,GLfloat); LSSB32(&v2,GLfloat); LSSB32(&vstride,GLint); LSSB32(&vorder,GLint);
int size = sizeof(GLfloat) * uorder * vorder * ustride; GLfloat * points = new GLfloat [size];
for(int i=0;i<size;i++) { LSSB32(&points[i],GLfloat); }
glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
ENDDECODE
DECODE_FUNC(173,glMapGrid1d,0  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) )
GLint un; GLdouble u1, u2;
LSSB32(&un,GLint); LSSB64(&u1,GLdouble); LSSB64(&u2,GLdouble);
glMapGrid1d(un, u1, u2);
ENDDECODE
DECODE_FUNC(174,glMapGrid1f,0  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) )
GLint un; GLfloat u1, u2;
LSSB32(&un,GLint); LSSB32(&u1,GLfloat); LSSB32(&u2,GLfloat);
glMapGrid1f(un, u1, u2);
ENDDECODE
DECODE_FUNC(175,glMapGrid2d,0  + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLint) + sizeof(GLdouble) + sizeof(GLdouble) )
GLint un, vn; GLdouble u1, u2, v1, v2;
LSSB32(&un,GLint); LSSB64(&u1,GLdouble); LSSB64(&u2,GLdouble); LSSB32(&vn,GLint); LSSB64(&v1,GLdouble); LSSB64(&v2,GLdouble);
glMapGrid2d(un, u1, u2, vn, v1, v2);
ENDDECODE
DECODE_FUNC(176,glMapGrid2f,0  + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLint) + sizeof(GLfloat) + sizeof(GLfloat) )
GLint un, vn; GLfloat u1, u2, v1, v2;
LSSB32(&un,GLint); LSSB32(&u1,GLfloat); LSSB32(&u2,GLfloat); LSSB32(&vn,GLint); LSSB32(&v1,GLfloat); LSSB32(&v2,GLfloat);
glMapGrid2f(un, u1, u2, vn, v1, v2);
ENDDECODE
DECODE_FUNC(177,glMaterialf,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
GLenum face, pname; GLfloat param;
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glMaterialf(face, pname, param);
ENDDECODE
DECODE_FUNC(178,glMaterialfv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum face, pname; GLfloat * params = new GLfloat [4];
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glMaterialfv(face, pname, params);
ENDDECODE
DECODE_FUNC(179,glMateriali,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
GLenum face, pname; GLint param;
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glMateriali(face, pname, param);
ENDDECODE
DECODE_FUNC(180,glMaterialiv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum face, pname; GLint * params = new GLint [4];
LSSB32(&face,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glMaterialiv(face, pname, params);
ENDDECODE
DECODE_FUNC(181,glMatrixMode,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
matrixMode = mode; // used for side perspective
glMatrixMode(mode);
ENDDECODE
DECODE_FUNC(182,glMultMatrixd,0  + sizeof(GLdouble) * 16 )
GLdouble * m = new GLdouble [16];
for(int i=0;i<16;i++) { LSSB64(&m[i],GLdouble); }
glMultMatrixd(m);
ENDDECODE
DECODE_FUNC(183,glMultMatrixf,0  + sizeof(GLfloat) * 16 )
GLfloat * m = new GLfloat [16];
for(int i=0;i<16;i++) { LSSB32(&m[i],GLfloat); }
glMultMatrixf(m);
ENDDECODE
DECODE_FUNC(184,glNewList,0  + sizeof(GLuint) + sizeof(GLenum) )
GLuint list; GLenum mode;
LSSB32(&list,GLuint); LSSB32(&mode,GLenum);
glNewList(list, mode);
ENDDECODE
DECODE_FUNC(185,glNormal3b,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
GLbyte nx, ny, nz;
LSSB8(&nx,GLbyte); LSSB8(&ny,GLbyte); LSSB8(&nz,GLbyte);
glNormal3b(nx, ny, nz);
ENDDECODE
/*DECODE_FUNC(186,glNormal3bv)
FUNC_SIZE(186,0  + sizeof(CGLbyteP) )
LSSB32(&v,CGLbyteP); 
ENDDECODE*/
DECODE_FUNC(187,glNormal3d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble nx, ny, nz;
LSSB64(&nx,GLdouble); LSSB64(&ny,GLdouble); LSSB64(&nz,GLdouble);
glNormal3d(nx, ny, nz);
ENDDECODE
/*DECODE_FUNC(188,glNormal3dv)
FUNC_SIZE(188,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(189,glNormal3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat nx, ny, nz;
LSSB32(&nx,GLfloat); LSSB32(&ny,GLfloat); LSSB32(&nz,GLfloat);
glNormal3f(nx, ny, nz);
ENDDECODE
/*DECODE_FUNC(190,glNormal3fv)
FUNC_SIZE(190,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(191,glNormal3i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint nx, ny, nz;
LSSB32(&nx,GLint); LSSB32(&ny,GLint); LSSB32(&nz,GLint);
glNormal3i(nx, ny, nz);
ENDDECODE
/*DECODE_FUNC(192,glNormal3iv)
FUNC_SIZE(192,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(193,glNormal3s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort nx, ny, nz;
LSSB16(&nx,GLshort); LSSB16(&ny,GLshort); LSSB16(&nz,GLshort);
glNormal3s(nx, ny, nz);
ENDDECODE
/*DECODE_FUNC(194,glNormal3sv)
FUNC_SIZE(194,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(195,glNormalPointer)
FUNC_SIZE(195,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE*/
DECODE_FUNC(196,glOrtho,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble left, right, bottom, top, zNear, zFar;
LSSB64(&left,GLdouble); LSSB64(&right,GLdouble); LSSB64(&bottom,GLdouble); LSSB64(&top,GLdouble); LSSB64(&zNear,GLdouble); LSSB64(&zFar,GLdouble);
glOrtho(left, right, bottom, top, zNear, zFar);
ENDDECODE
DECODE_FUNC(197,glPassThrough,0  + sizeof(GLfloat) )
GLfloat token;
LSSB32(&token,GLfloat);
glPassThrough(token);
ENDDECODE
DECODE_FUNC(198,glPixelMapfv,0  + sizeof(GLenum) + sizeof(GLsizei) /*+ sizeof(CGLfloatP)*/ )
GLenum map; GLsizei mapsize;
LSSB32(&map,GLenum); LSSB32(&mapsize,GLsizei); GLfloat * values = new GLfloat [mapsize];
for(int i=0;i<mapsize;i++) { LSSB32(&values[i],GLfloat); }
glPixelMapfv(map, mapsize, values);
ENDDECODE
DECODE_FUNC(199,glPixelMapuiv,0  + sizeof(GLenum) + sizeof(GLsizei) /*+ sizeof(CGLuintP)*/ )
GLenum map; GLsizei mapsize;
LSSB32(&map,GLenum); LSSB32(&mapsize,GLsizei); GLuint * values = new GLuint [mapsize];
for(int i=0;i<mapsize;i++) { LSSB32(&values[i],GLuint); }
glPixelMapuiv(map, mapsize, values);
ENDDECODE
DECODE_FUNC(200,glPixelMapusv,0  + sizeof(GLenum) + sizeof(GLsizei) /*+ sizeof(CGLushortP)*/ )
GLenum map; GLsizei mapsize;
LSSB32(&map,GLenum); LSSB32(&mapsize,GLsizei); GLushort * values = new GLushort [mapsize];
for(int i=0;i<mapsize;i++) { LSSB16(&values[i],GLushort); }
glPixelMapusv(map, mapsize, values);
ENDDECODE
DECODE_FUNC(201,glPixelStoref,0  + sizeof(GLenum) + sizeof(GLfloat) )
GLenum pname; GLfloat param;
LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glPixelStoref(pname, param);
ENDDECODE
DECODE_FUNC(202,glPixelStorei,0  + sizeof(GLenum) + sizeof(GLint) )
GLenum pname; GLint param;
LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glPixelStorei(pname, param);
ENDDECODE
DECODE_FUNC(203,glPixelTransferf,0  + sizeof(GLenum) + sizeof(GLfloat) )
GLenum pname; GLfloat param;
LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glPixelTransferf(pname, param);
ENDDECODE
DECODE_FUNC(204,glPixelTransferi,0  + sizeof(GLenum) + sizeof(GLint) )
GLenum pname; GLint param;
LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glPixelTransferi(pname, param);
ENDDECODE
DECODE_FUNC(205,glPixelZoom,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat xfactor, yfactor;
LSSB32(&xfactor,GLfloat); LSSB32(&yfactor,GLfloat);
glPixelZoom(xfactor, yfactor);
ENDDECODE
DECODE_FUNC(206,glPointSize,0  + sizeof(GLfloat) )
GLfloat size;
LSSB32(&size,GLfloat);
glPointSize(size);
ENDDECODE
DECODE_FUNC(207,glPolygonMode,0  + sizeof(GLenum) + sizeof(GLenum) )
GLenum face, mode;
LSSB32(&face,GLenum); LSSB32(&mode,GLenum);
glPolygonMode(face, mode);
ENDDECODE
DECODE_FUNC(208,glPolygonOffset,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat factor, units;
LSSB32(&factor,GLfloat); LSSB32(&units,GLfloat);
glPolygonOffset(factor, units);
ENDDECODE
DECODE_FUNC(209,glPolygonStipple,0  + sizeof(GLubyte) * 1024 )
GLubyte * mask = new GLubyte [1024];
for(int i=0;i<1024;i++) { LSSB8(&mask[i],GLubyte); }
glPolygonStipple(mask);
ENDDECODE
DECODE_FUNC(210,glPopAttrib,0  )
glPopAttrib();
ENDDECODE
DECODE_FUNC(211,glPopClientAttrib,0  )
glPopClientAttrib();
ENDDECODE
DECODE_FUNC(212,glPopMatrix,0  )
glPopMatrix();
ENDDECODE
DECODE_FUNC(213,glPopName,0  )
glPopName();
ENDDECODE
/*DECODE_FUNC(214,glPrioritizeTextures)
FUNC_SIZE(214,0  + sizeof(GLsizei) + sizeof(CGLuintP) + sizeof(CGLclampfP) )
LSSB32(&n,GLsizei); LSSB32(&textures,CGLuintP); LSSB32(&priorities,CGLclampfP); 
ENDDECODE*/
DECODE_FUNC(215,glPushAttrib,0  + sizeof(GLbitfield) )
GLbitfield mask;
LSSB32(&mask,GLbitfield);
glPushAttrib(mask);
ENDDECODE
DECODE_FUNC(216,glPushClientAttrib,0  + sizeof(GLbitfield) )
GLbitfield mask;
LSSB32(&mask,GLbitfield);
glPushClientAttrib(mask);
ENDDECODE
DECODE_FUNC(217,glPushMatrix,0  )
glPushMatrix();
ENDDECODE
DECODE_FUNC(218,glPushName,0  + sizeof(GLuint) )
GLuint name;
LSSB32(&name,GLuint);
glPushName(name);
ENDDECODE
DECODE_FUNC(219,glRasterPos2d,0  + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble);
glRasterPos2d(x, y);
ENDDECODE
/*DECODE_FUNC(220,glRasterPos2dv)
FUNC_SIZE(220,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(221,glRasterPos2f,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat);
glRasterPos2f(x, y);
ENDDECODE
/*DECODE_FUNC(222,glRasterPos2fv)
FUNC_SIZE(222,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(223,glRasterPos2i,0  + sizeof(GLint) + sizeof(GLint) )
GLint x, y;
LSSB32(&x,GLint); LSSB32(&y,GLint);
glRasterPos2i(x, y);
ENDDECODE
/*DECODE_FUNC(224,glRasterPos2iv)
FUNC_SIZE(224,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(225,glRasterPos2s,0  + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y;
LSSB16(&x,GLshort); LSSB16(&y,GLshort);
glRasterPos2s(x, y);
ENDDECODE
/*DECODE_FUNC(226,glRasterPos2sv)
FUNC_SIZE(226,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(227,glRasterPos3d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble);
glRasterPos3d(x, y, z);
ENDDECODE
/*DECODE_FUNC(228,glRasterPos3dv)
FUNC_SIZE(228,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(229,glRasterPos3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat);
glRasterPos3f(x, y, z);
ENDDECODE
/*DECODE_FUNC(230,glRasterPos3fv)
FUNC_SIZE(230,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(231,glRasterPos3i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint x, y, z;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&z,GLint);
glRasterPos3i(x, y, z);
ENDDECODE
/*DECODE_FUNC(232,glRasterPos3iv)
FUNC_SIZE(232,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(233,glRasterPos3s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y, z;
LSSB16(&x,GLshort); LSSB16(&y,GLshort); LSSB16(&z,GLshort);
glRasterPos3s(x, y, z);
ENDDECODE
/*DECODE_FUNC(234,glRasterPos3sv)
FUNC_SIZE(234,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(235,glRasterPos4d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z, w;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble); LSSB64(&w,GLdouble);
glRasterPos4d(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(236,glRasterPos4dv)
FUNC_SIZE(236,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(237,glRasterPos4f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z, w;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat); LSSB32(&w,GLfloat);
glRasterPos4f(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(238,glRasterPos4fv)
FUNC_SIZE(238,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(239,glRasterPos4i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint x, y, z, w;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&z,GLint); LSSB32(&w,GLint);
glRasterPos4i(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(240,glRasterPos4iv)
FUNC_SIZE(240,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(241,glRasterPos4s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y, z, w;
LSSB16(&x,GLshort); LSSB16(&y,GLshort); LSSB16(&z,GLshort); LSSB16(&w,GLshort);
glRasterPos4s(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(242,glRasterPos4sv)
FUNC_SIZE(242,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(243,glReadBuffer,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glReadBuffer(mode);
ENDDECODE
/*DECODE_FUNC(244,glReadPixels)
FUNC_SIZE(244,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLvoidP) )
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&format,GLenum); LSSB32(&type,GLenum); LSSB32(&pixels,GLvoidP); 
ENDDECODE*/
DECODE_FUNC(245,glRectd,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x1, y1, x2, y2;
LSSB64(&x1,GLdouble); LSSB64(&y1,GLdouble); LSSB64(&x2,GLdouble); LSSB64(&y2,GLdouble);
glRectd(x1, y1, x2, y2);
ENDDECODE
/*DECODE_FUNC(246,glRectdv)
FUNC_SIZE(246,0  + sizeof(CGLdoubleP) + sizeof(CGLdoubleP) )
LSSB32(&v1,CGLdoubleP); LSSB32(&v2,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(247,glRectf,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x1, y1, x2, y2;
LSSB32(&x1,GLfloat); LSSB32(&y1,GLfloat); LSSB32(&x2,GLfloat); LSSB32(&y2,GLfloat);
glRectf(x1, y1, x2, y2);
ENDDECODE
/*DECODE_FUNC(248,glRectfv)
FUNC_SIZE(248,0  + sizeof(CGLfloatP) + sizeof(CGLfloatP) )
LSSB32(&v1,CGLfloatP); LSSB32(&v2,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(249,glRecti,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint x1, y1, x2, y2;
LSSB32(&x1,GLint); LSSB32(&y1,GLint); LSSB32(&x2,GLint); LSSB32(&y2,GLint);
glRecti(x1, y1, x2, y2);
ENDDECODE
/*DECODE_FUNC(250,glRectiv)
FUNC_SIZE(250,0  + sizeof(CGLintP) + sizeof(CGLintP) )
LSSB32(&v1,CGLintP); LSSB32(&v2,CGLintP); 
ENDDECODE*/
DECODE_FUNC(251,glRects,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort x1, y1, x2, y2;
LSSB16(&x1,GLshort); LSSB16(&y1,GLshort); LSSB16(&x2,GLshort); LSSB16(&y2,GLshort);
glRects(x1, y1, x2, y2);
ENDDECODE
/*DECODE_FUNC(252,glRectsv)
FUNC_SIZE(252,0  + sizeof(CGLshortP) + sizeof(CGLshortP) )
LSSB32(&v1,CGLshortP); LSSB32(&v2,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(253,glRenderMode,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glRenderMode(mode);
ENDDECODE
DECODE_FUNC(254,glRotated,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble angle, x, y, z;
LSSB64(&angle,GLdouble); LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble);
glRotated(angle, x, y, z);
ENDDECODE
DECODE_FUNC(255,glRotatef,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat angle, x, y, z;
LSSB32(&angle,GLfloat); LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat);
glRotatef(angle, x, y, z);
ENDDECODE
DECODE_FUNC(256,glScaled,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble);
glScaled(x, y, z);
ENDDECODE
DECODE_FUNC(257,glScalef,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat);
glScalef(x, y, z);
ENDDECODE
DECODE_FUNC(258,glScissor,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
GLint x, y; GLsizei width, height;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei);
glScissor(x, y, width, height);
ENDDECODE
DECODE_FUNC(259,glSelectBuffer,0  + sizeof(GLsizei) + sizeof(GLuintP) )
GLsizei size;
LSSB32(&size,GLsizei); GLuint * buffer = new GLuint [size];
for(int i=0;i<size;i++) { LSSB32(&buffer[i],GLuint); }
glSelectBuffer(size, buffer);
ENDDECODE
DECODE_FUNC(260,glShadeModel,0  + sizeof(GLenum) )
GLenum mode;
LSSB32(&mode,GLenum);
glShadeModel(mode);
ENDDECODE
DECODE_FUNC(261,glStencilFunc,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLuint) )
GLenum func; GLint ref; GLuint mask;
LSSB32(&func,GLenum); LSSB32(&ref,GLint); LSSB32(&mask,GLuint);
glStencilFunc(func, ref, mask);
ENDDECODE
DECODE_FUNC(262,glStencilMask,0  + sizeof(GLuint) )
GLuint mask;
LSSB32(&mask,GLuint);
glStencilMask(mask);
ENDDECODE
DECODE_FUNC(263,glStencilOp,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
GLenum fail, zfail, zpass;
LSSB32(&fail,GLenum); LSSB32(&zfail,GLenum); LSSB32(&zpass,GLenum);
glStencilOp(fail, zfail, zpass);
ENDDECODE
DECODE_FUNC(264,glTexCoord1d,0  + sizeof(GLdouble) )
GLdouble s;
LSSB64(&s,GLdouble);
glTexCoord1d(s);
ENDDECODE
/*DECODE_FUNC(265,glTexCoord1dv)
FUNC_SIZE(265,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(266,glTexCoord1f,0  + sizeof(GLfloat) )
GLfloat s;
LSSB32(&s,GLfloat);
glTexCoord1f(s);
ENDDECODE
/*DECODE_FUNC(267,glTexCoord1fv)
FUNC_SIZE(267,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(268,glTexCoord1i,0  + sizeof(GLint) )
GLint s;
LSSB32(&s,GLint);
glTexCoord1i(s);
ENDDECODE
/*DECODE_FUNC(269,glTexCoord1iv)
FUNC_SIZE(269,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(270,glTexCoord1s,0  + sizeof(GLshort) )
GLshort s;
LSSB16(&s,GLshort);
glTexCoord1s(s);
ENDDECODE
/*DECODE_FUNC(271,glTexCoord1sv)
FUNC_SIZE(271,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE*/
DECODE_FUNC(272,glTexCoord2d,0  + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble s, t;
LSSB64(&s,GLdouble); LSSB64(&t,GLdouble);
glTexCoord2d(s, t);
ENDDECODE
/*DECODE_FUNC(273,glTexCoord2dv)
FUNC_SIZE(273,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(274,glTexCoord2f,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat s, t;
LSSB32(&s,GLfloat); LSSB32(&t,GLfloat);
glTexCoord2f(s, t);
ENDDECODE
/*DECODE_FUNC(275,glTexCoord2fv)
FUNC_SIZE(275,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(276,glTexCoord2i,0  + sizeof(GLint) + sizeof(GLint) )
GLint s, t;
LSSB32(&s,GLint); LSSB32(&t,GLint);
glTexCoord2i(s, t);
ENDDECODE
/*DECODE_FUNC(277,glTexCoord2iv)
FUNC_SIZE(277,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(278,glTexCoord2s,0  + sizeof(GLshort) + sizeof(GLshort) )
GLshort s, t;
LSSB16(&s,GLshort); LSSB16(&t,GLshort);
glTexCoord2s(s, t);
ENDDECODE
/*DECODE_FUNC(279,glTexCoord2sv)
FUNC_SIZE(279,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE*/
DECODE_FUNC(280,glTexCoord3d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble s, t, r;
LSSB64(&s,GLdouble); LSSB64(&t,GLdouble); LSSB64(&r,GLdouble);
glTexCoord3d(s, t, r);
ENDDECODE
/*DECODE_FUNC(281,glTexCoord3dv)
FUNC_SIZE(281,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(282,glTexCoord3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat s, t, r;
LSSB32(&s,GLfloat); LSSB32(&t,GLfloat); LSSB32(&r,GLfloat);
glTexCoord3f(s, t, r);
ENDDECODE
/*DECODE_FUNC(283,glTexCoord3fv)
FUNC_SIZE(283,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(284,glTexCoord3i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint s, t, r;
LSSB32(&s,GLint); LSSB32(&t,GLint); LSSB32(&r,GLint);
glTexCoord3i(s, t, r);
ENDDECODE
/*DECODE_FUNC(285,glTexCoord3iv)
FUNC_SIZE(285,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(286,glTexCoord3s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort s, t, r;
LSSB16(&s,GLshort); LSSB16(&t,GLshort); LSSB16(&r,GLshort);
glTexCoord3s(s, t, r);
ENDDECODE
/*DECODE_FUNC(287,glTexCoord3sv)
FUNC_SIZE(287,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE*/
DECODE_FUNC(288,glTexCoord4d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble s, t, r, q;
LSSB64(&s,GLdouble); LSSB64(&t,GLdouble); LSSB64(&r,GLdouble); LSSB64(&q,GLdouble);
glTexCoord4d(s, t, r, q);
ENDDECODE
/*DECODE_FUNC(289,glTexCoord4dv)
FUNC_SIZE(289,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(290,glTexCoord4f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat s, t, r, q;
LSSB32(&s,GLfloat); LSSB32(&t,GLfloat); LSSB32(&r,GLfloat); LSSB32(&q,GLfloat);
glTexCoord4f(s, t, r, q);
ENDDECODE
/*DECODE_FUNC(291,glTexCoord4fv)
FUNC_SIZE(291,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(292,glTexCoord4i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint s, t, r, q;
LSSB32(&s,GLint); LSSB32(&t,GLint); LSSB32(&r,GLint); LSSB32(&q,GLint);
glTexCoord4i(s, t, r, q);
ENDDECODE
/*DECODE_FUNC(293,glTexCoord4iv)
FUNC_SIZE(293,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(294,glTexCoord4s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort s, t, r, q;
LSSB16(&s,GLshort); LSSB16(&t,GLshort); LSSB16(&r,GLshort); LSSB16(&q,GLshort);
glTexCoord4s(s, t, r, q);
ENDDECODE
/*DECODE_FUNC(295,glTexCoord4sv)
FUNC_SIZE(295,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE
DECODE_FUNC(296,glTexCoordPointer)
FUNC_SIZE(296,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&size,GLint); LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE*/
DECODE_FUNC(297,glTexEnvf,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
GLenum target, pname; GLfloat param;
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glTexEnvf(target, pname, param);
ENDDECODE
DECODE_FUNC(298,glTexEnvfv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum target, pname; GLfloat * params = new GLfloat [4];
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glTexEnvfv(target, pname, params);
ENDDECODE
DECODE_FUNC(299,glTexEnvi,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
GLenum target, pname; GLint param;
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glTexEnvi(target, pname, param);
ENDDECODE
DECODE_FUNC(300,glTexEnviv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum target, pname; GLint * params = new GLint [4];
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glTexEnviv(target, pname, params);
ENDDECODE
DECODE_FUNC(301,glTexGend,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdouble) )
GLenum coord, pname; GLdouble param;
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB64(&param,GLdouble);
glTexGend(coord, pname, param);
ENDDECODE
DECODE_FUNC(302,glTexGendv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLdouble) * 4 )
GLenum coord, pname; GLdouble * params = new GLdouble [4];
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB64(&params[0],GLdouble); LSSB64(&params[1],GLdouble); LSSB64(&params[2],GLdouble); LSSB64(&params[3],GLdouble);
glTexGendv(coord, pname, params);
ENDDECODE
DECODE_FUNC(303,glTexGenf,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
GLenum coord, pname; GLfloat param;
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glTexGenf(coord, pname, param);
ENDDECODE
DECODE_FUNC(304,glTexGenfv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum coord, pname; GLfloat * params = new GLfloat [4];
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glTexGenfv(coord, pname, params);
ENDDECODE
DECODE_FUNC(305,glTexGeni,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
GLenum coord, pname; GLint param;
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glTexGeni(coord, pname, param);
ENDDECODE
DECODE_FUNC(306,glTexGeniv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum coord, pname; GLint * params = new GLint [4];
LSSB32(&coord,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glTexGeniv(coord, pname, params);
ENDDECODE
DECODE_FUNC(307,glTexImage1D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) /*+ sizeof(CGLvoidP)*/ )
GLenum target, format, type; GLint level, internalformat, border; GLsizei width;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&internalformat,GLint); LSSB32(&width,GLsizei); LSSB32(&border,GLint); LSSB32(&format,GLenum); LSSB32(&type,GLenum);
unsigned bytes = crImageSize(format, type, width, 1); GLbyte * pixels = new GLbyte [bytes];
for(unsigned i=0;i<bytes;i++) { LSSB8(&pixels[i],GLbyte); }
glTexImage1D(target, level, internalformat, width, border, format, type, (void*)pixels);
ENDDECODE
DECODE_FUNC(308,glTexImage2D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLint) + sizeof(GLenum) + sizeof(GLenum) /*+ sizeof(CGLvoidP)*/ )
GLenum target, format, type; GLint level, internalformat, border; GLsizei width, height;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&internalformat,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&border,GLint); LSSB32(&format,GLenum); LSSB32(&type,GLenum);
unsigned bytes = crImageSize(format, type, width, height); GLbyte * pixels = new GLbyte [bytes];
for(unsigned i=0;i<bytes;i++) { LSSB8(&pixels[i],GLbyte); }
glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
ENDDECODE
DECODE_FUNC(309,glTexParameterf,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) )
GLenum target, pname; GLfloat param;
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLfloat);
glTexParameterf(target, pname, param);
ENDDECODE
DECODE_FUNC(310,glTexParameterfv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloat) * 4 )
GLenum target, pname; GLfloat * params = new GLfloat [4];
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLfloat); LSSB32(&params[1],GLfloat); LSSB32(&params[2],GLfloat); LSSB32(&params[3],GLfloat);
glTexParameterfv(target, pname, params);
ENDDECODE
DECODE_FUNC(311,glTexParameteri,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) )
GLenum target, pname; GLint param;
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&param,GLint);
glTexParameteri(target, pname, param);
ENDDECODE
DECODE_FUNC(312,glTexParameteriv,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLint) * 4 )
GLenum target, pname; GLint * params = new GLint [4];
LSSB32(&target,GLenum); LSSB32(&pname,GLenum); LSSB32(&params[0],GLint); LSSB32(&params[1],GLint); LSSB32(&params[2],GLint); LSSB32(&params[3],GLint);
glTexParameteriv(target, pname, params);
ENDDECODE
DECODE_FUNC(313,glTexSubImage1D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) /*+ sizeof(CGLvoidP)*/ )
GLenum target, format, type; GLint level, xoffset; GLsizei width;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&xoffset,GLint); LSSB32(&width,GLsizei); LSSB32(&format,GLenum); LSSB32(&type,GLenum);
unsigned bytes = crImageSize(format, type, width, 1); GLbyte * pixels = new GLbyte [bytes];
for(unsigned i=0;i<bytes;i++) { LSSB8(&pixels[i],GLbyte); }
glTexSubImage1D(target, level, xoffset, width, format, type, (void*)pixels);
ENDDECODE
DECODE_FUNC(314,glTexSubImage2D,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) + sizeof(GLenum) + sizeof(GLenum) /*+ sizeof(CGLvoidP)*/ )
GLenum target, format, type; GLint level, xoffset, yoffset; GLsizei width, height;
LSSB32(&target,GLenum); LSSB32(&level,GLint); LSSB32(&xoffset,GLint); LSSB32(&yoffset,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei); LSSB32(&format,GLenum); LSSB32(&type,GLenum);
unsigned bytes = crImageSize(format, type, width, height); GLbyte * pixels = new GLbyte [bytes];
for(unsigned i=0;i<bytes;i++) { LSSB8(&pixels[i],GLbyte); }
glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, (void*)pixels);
ENDDECODE
DECODE_FUNC(315,glTranslated,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble);
glTranslated(x, y, z);
ENDDECODE
DECODE_FUNC(316,glTranslatef,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat);
glTranslatef(x, y, z);
ENDDECODE
DECODE_FUNC(317,glVertex2d,0  + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble);
glVertex2d(x, y);
ENDDECODE
/*DECODE_FUNC(318,glVertex2dv)
FUNC_SIZE(318,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(319,glVertex2f,0  + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat);
glVertex2f(x, y);
ENDDECODE
/*DECODE_FUNC(320,glVertex2fv)
FUNC_SIZE(320,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(321,glVertex2i,0  + sizeof(GLint) + sizeof(GLint) )
GLint x, y;
LSSB32(&x,GLint); LSSB32(&y,GLint);
glVertex2i(x, y);
ENDDECODE
/*DECODE_FUNC(322,glVertex2iv)
FUNC_SIZE(322,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(323,glVertex2s,0  + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y;
LSSB16(&x,GLshort); LSSB16(&y,GLshort);
glVertex2s(x, y);
ENDDECODE
/*DECODE_FUNC(324,glVertex2sv)
FUNC_SIZE(324,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP);
ENDDECODE*/
DECODE_FUNC(325,glVertex3d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble);
glVertex3d(x, y, z);
ENDDECODE
/*DECODE_FUNC(326,glVertex3dv)
FUNC_SIZE(326,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE*/
DECODE_FUNC(327,glVertex3f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat);
glVertex3f(x, y, z);
ENDDECODE
/*DECODE_FUNC(328,glVertex3fv)
FUNC_SIZE(328,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP);
ENDDECODE*/
DECODE_FUNC(329,glVertex3i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint x, y, z;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&z,GLint);
glVertex3i(x, y, z);
ENDDECODE
/*DECODE_FUNC(330,glVertex3iv)
FUNC_SIZE(330,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP);
ENDDECODE*/
DECODE_FUNC(331,glVertex3s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y, z;
LSSB16(&x,GLshort); LSSB16(&y,GLshort); LSSB16(&z,GLshort);
glVertex3s(x, y, z);
ENDDECODE
/*DECODE_FUNC(332,glVertex3sv)
FUNC_SIZE(332,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE*/
DECODE_FUNC(333,glVertex4d,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
GLdouble x, y, z, w;
LSSB64(&x,GLdouble); LSSB64(&y,GLdouble); LSSB64(&z,GLdouble); LSSB64(&w,GLdouble);
glVertex4d(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(334,glVertex4dv)
FUNC_SIZE(334,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP);
ENDDECODE*/
DECODE_FUNC(335,glVertex4f,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
GLfloat x, y, z, w;
LSSB32(&x,GLfloat); LSSB32(&y,GLfloat); LSSB32(&z,GLfloat); LSSB32(&w,GLfloat);
glVertex4f(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(336,glVertex4fv)
FUNC_SIZE(336,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE*/
DECODE_FUNC(337,glVertex4i,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
GLint x, y, z, w;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&z,GLint); LSSB32(&w,GLint);
glVertex4i(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(338,glVertex4iv)
FUNC_SIZE(338,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE*/
DECODE_FUNC(339,glVertex4s,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
GLshort x, y, z, w;
LSSB16(&x,GLshort); LSSB16(&y,GLshort); LSSB16(&z,GLshort); LSSB16(&w,GLshort);
glVertex4s(x, y, z, w);
ENDDECODE
/*DECODE_FUNC(340,glVertex4sv)
FUNC_SIZE(340,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(341,glVertexPointer)
FUNC_SIZE(341,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&size,GLint); LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP);
ENDDECODE*/
DECODE_FUNC(342,glViewport,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLsizei) + sizeof(GLsizei) )
GLint x, y; GLsizei width, height;
LSSB32(&x,GLint); LSSB32(&y,GLint); LSSB32(&width,GLsizei); LSSB32(&height,GLsizei);
glViewport(x, y, width, height);
ENDDECODE
/*DECODE_FUNC(343,wglChoosePixelFormat)
FUNC_SIZE(343,0  + sizeof(HDC) + sizeof(CPIXELFORMATDESCRIPTORP) )
LSSB32(&a,HDC); LSSB32(&b,CPIXELFORMATDESCRIPTORP); 
ENDDECODE
DECODE_FUNC(344,wglCopyContext)
FUNC_SIZE(344,0  + sizeof(HGLRC) + sizeof(HGLRC) + sizeof(UINT) )
LSSB32(&a,HGLRC); LSSB32(&b,HGLRC); LSSB32(&c,UINT); 
ENDDECODE
DECODE_FUNC(345,wglCreateContext)
FUNC_SIZE(345,0  + sizeof(HDC) )
LSSB32(&a,HDC); 
ENDDECODE
DECODE_FUNC(346,wglCreateLayerContext)
FUNC_SIZE(346,0  + sizeof(HDC) + sizeof(int) )
LSSB32(&a,HDC); LSSB32(&b,int); 
ENDDECODE
DECODE_FUNC(347,wglDeleteContext)
FUNC_SIZE(347,0  + sizeof(HGLRC) )
LSSB32(&a,HGLRC); 
ENDDECODE
DECODE_FUNC(348,wglDescribeLayerPlane)
FUNC_SIZE(348,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(UINT) + sizeof(LPLAYERPLANEDESCRIPTOR) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,int); LSSB32(&d,UINT); LSSB32(&e,LPLAYERPLANEDESCRIPTOR); 
ENDDECODE
DECODE_FUNC(349,wglDescribePixelFormat)
FUNC_SIZE(349,0  + sizeof(HDC) + sizeof(int) + sizeof(UINT) + sizeof(LPPIXELFORMATDESCRIPTOR) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,UINT); LSSB32(&d,LPPIXELFORMATDESCRIPTOR); 
ENDDECODE
DECODE_FUNC(350,wglGetCurrentContext)
FUNC_SIZE(350,0  )
ENDDECODE
DECODE_FUNC(351,wglGetCurrentDC)
FUNC_SIZE(351,0  )
ENDDECODE
DECODE_FUNC(352,wglGetDefaultProcAddress)
FUNC_SIZE(352,0  + sizeof(LPCSTR) )
LSSB32(&a,LPCSTR); 
ENDDECODE
DECODE_FUNC(353,wglGetLayerPaletteEntries)
FUNC_SIZE(353,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(COLORREFP) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,int); LSSB32(&d,int); LSSB32(&e,COLORREFP); 
ENDDECODE
DECODE_FUNC(354,wglGetPixelFormat)
FUNC_SIZE(354,0  + sizeof(HDC) )
LSSB32(&a,HDC); 
ENDDECODE
DECODE_FUNC(355,wglGetProcAddress)
FUNC_SIZE(355,0  + sizeof(LPCSTR) )
LSSB32(&a,LPCSTR); 
ENDDECODE
DECODE_FUNC(356,wglMakeCurrent)
FUNC_SIZE(356,0  + sizeof(HDC) + sizeof(HGLRC) )
LSSB32(&a,HDC); LSSB32(&b,HGLRC); 
ENDDECODE
DECODE_FUNC(357,wglRealizeLayerPalette)
FUNC_SIZE(357,0  + sizeof(HDC) + sizeof(int) + sizeof(BOOL) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,BOOL); 
ENDDECODE
DECODE_FUNC(358,wglSetLayerPaletteEntries)
FUNC_SIZE(358,0  + sizeof(HDC) + sizeof(int) + sizeof(int) + sizeof(int) + sizeof(CCOLORREFP) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,int); LSSB32(&d,int); LSSB32(&e,CCOLORREFP);
ENDDECODE
DECODE_FUNC(359,wglSetPixelFormat)
FUNC_SIZE(359,0  + sizeof(HDC) + sizeof(int) + sizeof(CPIXELFORMATDESCRIPTORP) )
LSSB32(&a,HDC); LSSB32(&b,int); LSSB32(&c,CPIXELFORMATDESCRIPTORP);
ENDDECODE
DECODE_FUNC(360,wglShareLists)
FUNC_SIZE(360,0  + sizeof(HGLRC) + sizeof(HGLRC) )
LSSB32(&a,HGLRC); LSSB32(&b,HGLRC); 
ENDDECODE
DECODE_FUNC(361,wglSwapBuffers)
FUNC_SIZE(361,0  + sizeof(HDC) )
LSSB32(&a,HDC);
ENDDECODE
DECODE_FUNC(362,wglSwapLayerBuffers)
FUNC_SIZE(362,0  + sizeof(HDC) + sizeof(UINT) )
LSSB32(&a,HDC); LSSB32(&b,UINT); 
ENDDECODE
DECODE_FUNC(363,wglUseFontBitmapsA)
FUNC_SIZE(363,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB32(&a,HDC); LSSB32(&b,DWORD); LSSB32(&c,DWORD); LSSB32(&d,DWORD); 
ENDDECODE
DECODE_FUNC(364,wglUseFontBitmapsW)
FUNC_SIZE(364,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) )
LSSB32(&a,HDC); LSSB32(&b,DWORD); LSSB32(&c,DWORD); LSSB32(&d,DWORD); 
ENDDECODE
DECODE_FUNC(365,wglUseFontOutlinesA)
FUNC_SIZE(365,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) )
LSSB32(&a,HDC); LSSB32(&b,DWORD); LSSB32(&c,DWORD); LSSB32(&d,DWORD); LSSB32(&e,FLOAT); LSSB32(&f,FLOAT); LSSB32(&g,int); LSSB32(&h,LPGLYPHMETRICSFLOAT); 
ENDDECODE
DECODE_FUNC(366,wglUseFontOutlinesW)
FUNC_SIZE(366,0  + sizeof(HDC) + sizeof(DWORD) + sizeof(DWORD) + sizeof(DWORD) + sizeof(FLOAT) + sizeof(FLOAT) + sizeof(int) + sizeof(LPGLYPHMETRICSFLOAT) )
LSSB32(&a,HDC); LSSB32(&b,DWORD); LSSB32(&c,DWORD); LSSB32(&d,DWORD); LSSB32(&e,FLOAT); LSSB32(&f,FLOAT); LSSB32(&g,int); LSSB32(&h,LPGLYPHMETRICSFLOAT); 
ENDDECODE
DECODE_FUNC(367,glActiveTextureARB)
FUNC_SIZE(367,0  + sizeof(GLenum) )
LSSB32(&texture,GLenum); 
ENDDECODE
DECODE_FUNC(368,glClientActiveTextureARB)
FUNC_SIZE(368,0  + sizeof(GLenum) )
LSSB32(&texture,GLenum); 
ENDDECODE
DECODE_FUNC(369,glMultiTexCoord1dARB)
FUNC_SIZE(369,0  + sizeof(GLenum) + sizeof(GLdouble) )
LSSB32(&target,GLenum); LSSB32(&s,GLdouble); 
ENDDECODE
DECODE_FUNC(370,glMultiTexCoord1dvARB)
FUNC_SIZE(370,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(371,glMultiTexCoord1fARB)
FUNC_SIZE(371,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB32(&target,GLenum); LSSB32(&s,GLfloat); 
ENDDECODE
DECODE_FUNC(372,glMultiTexCoord1fvARB)
FUNC_SIZE(372,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLfloatP); 
ENDDECODE
DECODE_FUNC(373,glMultiTexCoord1iARB)
FUNC_SIZE(373,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB32(&target,GLenum); LSSB32(&s,GLint); 
ENDDECODE
DECODE_FUNC(374,glMultiTexCoord1ivARB)
FUNC_SIZE(374,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLintP); 
ENDDECODE
DECODE_FUNC(375,glMultiTexCoord1sARB)
FUNC_SIZE(375,0  + sizeof(GLenum) + sizeof(GLshort) )
LSSB32(&target,GLenum); LSSB32(&s,GLshort);
ENDDECODE
DECODE_FUNC(376,glMultiTexCoord1svARB)
FUNC_SIZE(376,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(377,glMultiTexCoord2dARB)
FUNC_SIZE(377,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB32(&target,GLenum); LSSB32(&s,GLdouble); LSSB32(&t,GLdouble); 
ENDDECODE
DECODE_FUNC(378,glMultiTexCoord2dvARB)
FUNC_SIZE(378,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(379,glMultiTexCoord2fARB)
FUNC_SIZE(379,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB32(&target,GLenum); LSSB32(&s,GLfloat); LSSB32(&t,GLfloat); 
ENDDECODE
DECODE_FUNC(380,glMultiTexCoord2fvARB)
FUNC_SIZE(380,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLfloatP); 
ENDDECODE
DECODE_FUNC(381,glMultiTexCoord2iARB)
FUNC_SIZE(381,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) )
LSSB32(&target,GLenum); LSSB32(&s,GLint); LSSB32(&t,GLint); 
ENDDECODE
DECODE_FUNC(382,glMultiTexCoord2ivARB)
FUNC_SIZE(382,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLintP); 
ENDDECODE
DECODE_FUNC(383,glMultiTexCoord2sARB)
FUNC_SIZE(383,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) )
LSSB32(&target,GLenum); LSSB32(&s,GLshort); LSSB32(&t,GLshort); 
ENDDECODE
DECODE_FUNC(384,glMultiTexCoord2svARB)
FUNC_SIZE(384,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(385,glMultiTexCoord3dARB)
FUNC_SIZE(385,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB32(&target,GLenum); LSSB32(&s,GLdouble); LSSB32(&t,GLdouble); LSSB32(&r,GLdouble); 
ENDDECODE
DECODE_FUNC(386,glMultiTexCoord3dvARB)
FUNC_SIZE(386,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(387,glMultiTexCoord3fARB)
FUNC_SIZE(387,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB32(&target,GLenum); LSSB32(&s,GLfloat); LSSB32(&t,GLfloat); LSSB32(&r,GLfloat); 
ENDDECODE
DECODE_FUNC(388,glMultiTexCoord3fvARB)
FUNC_SIZE(388,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLfloatP); 
ENDDECODE
DECODE_FUNC(389,glMultiTexCoord3iARB)
FUNC_SIZE(389,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB32(&target,GLenum); LSSB32(&s,GLint); LSSB32(&t,GLint); LSSB32(&r,GLint); 
ENDDECODE
DECODE_FUNC(390,glMultiTexCoord3ivARB)
FUNC_SIZE(390,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLintP); 
ENDDECODE
DECODE_FUNC(391,glMultiTexCoord3sARB)
FUNC_SIZE(391,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB32(&target,GLenum); LSSB32(&s,GLshort); LSSB32(&t,GLshort); LSSB32(&r,GLshort); 
ENDDECODE
DECODE_FUNC(392,glMultiTexCoord3svARB)
FUNC_SIZE(392,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLshortP);
ENDDECODE
DECODE_FUNC(393,glMultiTexCoord4dARB)
FUNC_SIZE(393,0  + sizeof(GLenum) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB32(&target,GLenum); LSSB32(&s,GLdouble); LSSB32(&t,GLdouble); LSSB32(&r,GLdouble); LSSB32(&q,GLdouble); 
ENDDECODE
DECODE_FUNC(394,glMultiTexCoord4dvARB)
FUNC_SIZE(394,0  + sizeof(GLenum) + sizeof(CGLdoubleP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(395,glMultiTexCoord4fARB)
FUNC_SIZE(395,0  + sizeof(GLenum) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB32(&target,GLenum); LSSB32(&s,GLfloat); LSSB32(&t,GLfloat); LSSB32(&r,GLfloat); LSSB32(&q,GLfloat); 
ENDDECODE
DECODE_FUNC(396,glMultiTexCoord4fvARB)
FUNC_SIZE(396,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLfloatP); 
ENDDECODE
DECODE_FUNC(397,glMultiTexCoord4iARB)
FUNC_SIZE(397,0  + sizeof(GLenum) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB32(&target,GLenum); LSSB32(&s,GLint); LSSB32(&t,GLint); LSSB32(&r,GLint); LSSB32(&q,GLint); 
ENDDECODE
DECODE_FUNC(398,glMultiTexCoord4ivARB)
FUNC_SIZE(398,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLintP); 
ENDDECODE
DECODE_FUNC(399,glMultiTexCoord4sARB)
FUNC_SIZE(399,0  + sizeof(GLenum) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB32(&target,GLenum); LSSB32(&s,GLshort); LSSB32(&t,GLshort); LSSB32(&r,GLshort); LSSB32(&q,GLshort); 
ENDDECODE
DECODE_FUNC(400,glMultiTexCoord4svARB)
FUNC_SIZE(400,0  + sizeof(GLenum) + sizeof(CGLshortP) )
LSSB32(&target,GLenum); LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(401,glBlendColorEXT)
FUNC_SIZE(401,0  + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) + sizeof(GLclampf) )
LSSB32(&red,GLclampf); LSSB32(&green,GLclampf); LSSB32(&blue,GLclampf); LSSB32(&alpha,GLclampf); 
ENDDECODE
DECODE_FUNC(402,glBlendEquationEXT)
FUNC_SIZE(402,0  + sizeof(GLenum) )
LSSB32(&mode,GLenum); 
ENDDECODE
DECODE_FUNC(403,glFogCoorddEXT)
FUNC_SIZE(403,0  + sizeof(GLdouble) )
LSSB32(&coord,GLdouble); 
ENDDECODE
DECODE_FUNC(404,glFogCoorddvEXT)
FUNC_SIZE(404,0  + sizeof(CGLdoubleP) )
LSSB32(&coord,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(405,glFogCoordfEXT)
FUNC_SIZE(405,0  + sizeof(GLfloat) )
LSSB32(&coord,GLfloat); 
ENDDECODE
DECODE_FUNC(406,glFogCoordfvEXT)
FUNC_SIZE(406,0  + sizeof(CGLfloatP) )
LSSB32(&coord,CGLfloatP); 
ENDDECODE
DECODE_FUNC(407,glFogCoordPointerEXT)
FUNC_SIZE(407,0  + sizeof(GLenum) + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,CGLvoidP); 
ENDDECODE
DECODE_FUNC(408,glSecondaryColor3bEXT)
FUNC_SIZE(408,0  + sizeof(GLbyte) + sizeof(GLbyte) + sizeof(GLbyte) )
LSSB32(&red,GLbyte); LSSB32(&green,GLbyte); LSSB32(&blue,GLbyte);
ENDDECODE
DECODE_FUNC(409,glSecondaryColor3bvEXT)
FUNC_SIZE(409,0  + sizeof(CGLbyteP) )
LSSB32(&v,CGLbyteP);
ENDDECODE
DECODE_FUNC(410,glSecondaryColor3dEXT)
FUNC_SIZE(410,0  + sizeof(GLdouble) + sizeof(GLdouble) + sizeof(GLdouble) )
LSSB32(&red,GLdouble); LSSB32(&green,GLdouble); LSSB32(&blue,GLdouble);
ENDDECODE
DECODE_FUNC(411,glSecondaryColor3dvEXT)
FUNC_SIZE(411,0  + sizeof(CGLdoubleP) )
LSSB32(&v,CGLdoubleP); 
ENDDECODE
DECODE_FUNC(412,glSecondaryColor3fEXT)
FUNC_SIZE(412,0  + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB32(&red,GLfloat); LSSB32(&green,GLfloat); LSSB32(&blue,GLfloat); 
ENDDECODE
DECODE_FUNC(413,glSecondaryColor3fvEXT)
FUNC_SIZE(413,0  + sizeof(CGLfloatP) )
LSSB32(&v,CGLfloatP); 
ENDDECODE
DECODE_FUNC(414,glSecondaryColor3iEXT)
FUNC_SIZE(414,0  + sizeof(GLint) + sizeof(GLint) + sizeof(GLint) )
LSSB32(&red,GLint); LSSB32(&green,GLint); LSSB32(&blue,GLint); 
ENDDECODE
DECODE_FUNC(415,glSecondaryColor3ivEXT)
FUNC_SIZE(415,0  + sizeof(CGLintP) )
LSSB32(&v,CGLintP); 
ENDDECODE
DECODE_FUNC(416,glSecondaryColor3sEXT)
FUNC_SIZE(416,0  + sizeof(GLshort) + sizeof(GLshort) + sizeof(GLshort) )
LSSB32(&red,GLshort); LSSB32(&green,GLshort); LSSB32(&blue,GLshort);
ENDDECODE
DECODE_FUNC(417,glSecondaryColor3svEXT)
FUNC_SIZE(417,0  + sizeof(CGLshortP) )
LSSB32(&v,CGLshortP); 
ENDDECODE
DECODE_FUNC(418,glSecondaryColor3ubEXT)
FUNC_SIZE(418,0  + sizeof(GLubyte) + sizeof(GLubyte) + sizeof(GLubyte) )
LSSB32(&red,GLubyte); LSSB32(&green,GLubyte); LSSB32(&blue,GLubyte);
ENDDECODE
DECODE_FUNC(419,glSecondaryColor3ubvEXT)
FUNC_SIZE(419,0  + sizeof(CGLubyteP) )
LSSB32(&v,CGLubyteP); 
ENDDECODE
DECODE_FUNC(420,glSecondaryColor3uiEXT)
FUNC_SIZE(420,0  + sizeof(GLuint) + sizeof(GLuint) + sizeof(GLuint) )
LSSB32(&red,GLuint); LSSB32(&green,GLuint); LSSB32(&blue,GLuint); 
ENDDECODE
DECODE_FUNC(421,glSecondaryColor3uivEXT)
FUNC_SIZE(421,0  + sizeof(CGLuintP) )
LSSB32(&v,CGLuintP); 
ENDDECODE
DECODE_FUNC(422,glSecondaryColor3usEXT)
FUNC_SIZE(422,0  + sizeof(GLushort) + sizeof(GLushort) + sizeof(GLushort) )
LSSB32(&red,GLushort); LSSB32(&green,GLushort); LSSB32(&blue,GLushort);
ENDDECODE
DECODE_FUNC(423,glSecondaryColor3usvEXT)
FUNC_SIZE(423,0  + sizeof(CGLushortP) )
LSSB32(&v,CGLushortP); 
ENDDECODE
DECODE_FUNC(424,glSecondaryColorPointerEXT)
FUNC_SIZE(424,0  + sizeof(GLint) + sizeof(GLenum) + sizeof(GLsizei) + sizeof(GLvoidP) )
LSSB32(&size,GLint); LSSB32(&type,GLenum); LSSB32(&stride,GLsizei); LSSB32(&pointer,GLvoidP); 
ENDDECODE
DECODE_FUNC(425,glGenFencesNV)
FUNC_SIZE(425,0  + sizeof(GLsizei) + sizeof(GLuintP) )
LSSB32(&n,GLsizei); LSSB32(&fences,GLuintP); 
ENDDECODE
DECODE_FUNC(426,glDeleteFencesNV)
FUNC_SIZE(426,0  + sizeof(GLsizei) + sizeof(CGLuintP) )
LSSB32(&n,GLsizei); LSSB32(&fences,CGLuintP);
ENDDECODE
DECODE_FUNC(427,glSetFenceNV)
FUNC_SIZE(427,0  + sizeof(GLuint) + sizeof(GLenum) )
LSSB32(&fence,GLuint); LSSB32(&condition,GLenum); 
ENDDECODE
DECODE_FUNC(428,glTestFenceNV)
FUNC_SIZE(428,0  + sizeof(GLuint) )
LSSB32(&fence,GLuint); 
ENDDECODE
DECODE_FUNC(429,glFinishFenceNV)
FUNC_SIZE(429,0  + sizeof(GLuint) )
LSSB32(&fence,GLuint); 
ENDDECODE
DECODE_FUNC(430,glIsFenceNV)
FUNC_SIZE(430,0  + sizeof(GLuint) )
LSSB32(&fence,GLuint);
ENDDECODE
DECODE_FUNC(431,glGetFenceivNV)
FUNC_SIZE(431,0  + sizeof(GLuint) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&fence,GLuint); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(432,glCombinerParameterfvNV)
FUNC_SIZE(432,0  + sizeof(GLenum) + sizeof(CGLfloatP) )
LSSB32(&pname,GLenum); LSSB32(&params,CGLfloatP); 
ENDDECODE
DECODE_FUNC(433,glCombinerParameterfNV)
FUNC_SIZE(433,0  + sizeof(GLenum) + sizeof(GLfloat) )
LSSB32(&pname,GLenum); LSSB32(&param,GLfloat); 
ENDDECODE
DECODE_FUNC(434,glCombinerParameterivNV)
FUNC_SIZE(434,0  + sizeof(GLenum) + sizeof(CGLintP) )
LSSB32(&pname,GLenum); LSSB32(&params,CGLintP); 
ENDDECODE
DECODE_FUNC(435,glCombinerParameteriNV)
FUNC_SIZE(435,0  + sizeof(GLenum) + sizeof(GLint) )
LSSB32(&pname,GLenum); LSSB32(&param,GLint); 
ENDDECODE
DECODE_FUNC(436,glCombinerInputNV)
FUNC_SIZE(436,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&variable,GLenum); LSSB32(&input,GLenum); LSSB32(&mapping,GLenum); LSSB32(&componentUsage,GLenum); 
ENDDECODE
DECODE_FUNC(437,glCombinerOutputNV)
FUNC_SIZE(437,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLboolean) + sizeof(GLboolean) + sizeof(GLboolean) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&abOutput,GLenum); LSSB32(&cdOutput,GLenum); LSSB32(&sumOutput,GLenum); LSSB32(&scale,GLenum); LSSB32(&bias,GLenum); LSSB32(&abDotProduct,GLboolean); LSSB32(&cdDotProduct,GLboolean); LSSB32(&muxSum,GLboolean);
ENDDECODE
DECODE_FUNC(438,glFinalCombinerInputNV)
FUNC_SIZE(438,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) )
LSSB32(&variable,GLenum); LSSB32(&input,GLenum); LSSB32(&mapping,GLenum); LSSB32(&componentUsage,GLenum); 
ENDDECODE
DECODE_FUNC(439,glGetCombinerInputParameterfvNV)
FUNC_SIZE(439,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&variable,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(440,glGetCombinerInputParameterivNV)
FUNC_SIZE(440,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&variable,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(441,glGetCombinerOutputParameterfvNV)
FUNC_SIZE(441,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP); 
ENDDECODE
DECODE_FUNC(442,glGetCombinerOutputParameterivNV)
FUNC_SIZE(442,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&stage,GLenum); LSSB32(&portion,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(443,glGetFinalCombinerInputParameterfvNV)
FUNC_SIZE(443,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLfloatP) )
LSSB32(&variable,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLfloatP);
ENDDECODE
DECODE_FUNC(444,glGetFinalCombinerInputParameterivNV)
FUNC_SIZE(444,0  + sizeof(GLenum) + sizeof(GLenum) + sizeof(GLintP) )
LSSB32(&variable,GLenum); LSSB32(&pname,GLenum); LSSB32(&params,GLintP); 
ENDDECODE
DECODE_FUNC(445,glFlushVertexArrayRangeNV)
FUNC_SIZE(445,0 )
ENDDECODE
DECODE_FUNC(446,glVertexArrayRangeNV)
FUNC_SIZE(446,0  + sizeof(GLsizei) + sizeof(CGLvoidP) )
LSSB32(&size,GLsizei); LSSB32(&pointer,CGLvoidP);
ENDDECODE
DECODE_FUNC(447,wglAllocateMemoryNV)
FUNC_SIZE(447,0  + sizeof(int) + sizeof(GLfloat) + sizeof(GLfloat) + sizeof(GLfloat) )
LSSB32(&size,int); LSSB32(&readfreq,GLfloat); LSSB32(&writefreq,GLfloat); LSSB32(&priority,GLfloat); 
ENDDECODE
DECODE_FUNC(448,wglFreeMemoryNV)
FUNC_SIZE(448,0  + sizeof(GLvoidP) )
LSSB32(&pointer,GLvoidP); 
ENDDECODE
DECODE_FUNC(449,wglSwapIntervalEXT)
FUNC_SIZE(449,0  + sizeof(int) )
LSSB32(&a,int); 
ENDDECODE
DECODE_FUNC(450,wglGetSwapIntervalEXT)
FUNC_SIZE(450,0  )
ENDDECODE */
