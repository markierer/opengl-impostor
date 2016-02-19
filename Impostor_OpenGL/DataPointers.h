/**
* DataPointers.h
* This file contains utility functions for copying data from addresses.
*/

#ifndef DataPointersH
#define DataPointersH

#include <gl/gl.h>

/**
* A function.
* This utility routine returns the number of components per
* mapping point for all the glMap* functions.
*/
static int map_num_components(GLenum target)
{
    switch(target) {
		case GL_MAP1_INDEX: case GL_MAP1_TEXTURE_COORD_1:
			return 1;
		case GL_MAP1_TEXTURE_COORD_2:
			return 2;
		case GL_MAP1_VERTEX_3: case GL_MAP1_NORMAL: 
		case GL_MAP1_TEXTURE_COORD_3:
			return 3;
		case GL_MAP1_VERTEX_4: case GL_MAP1_COLOR_4:
		case GL_MAP1_TEXTURE_COORD_4:
			return 4;

		case GL_MAP2_INDEX: case GL_MAP2_TEXTURE_COORD_1:
			return 1;
		case GL_MAP2_TEXTURE_COORD_2:
			return 2;
		case GL_MAP2_VERTEX_3: case GL_MAP2_NORMAL:
		case GL_MAP2_TEXTURE_COORD_3:
			return 3;
		case GL_MAP2_VERTEX_4: case GL_MAP2_COLOR_4:
		case GL_MAP2_TEXTURE_COORD_4:
			return 4;
    }
    return 0;
} 

/**
* A function.
* This utility routine returns the size of a list element
* of the glCallList function.
*/
static int num_typesize(GLenum type)
{
    switch(type) {
		case GL_BYTE:
			return sizeof(GLbyte);
		case GL_UNSIGNED_BYTE:
			return sizeof(GLubyte);
		case GL_SHORT: 
			return sizeof(GLshort);
		case GL_UNSIGNED_SHORT:
			return sizeof(GLushort);
		case GL_INT:
			return sizeof(GLint);
		case GL_UNSIGNED_INT:
			return sizeof(GLuint);
		case GL_FLOAT:
			return sizeof(GLfloat);
		case GL_DOUBLE:
			return sizeof(GLdouble);
		case GL_2_BYTES:
			return sizeof(GLbyte) * 2;
		case GL_3_BYTES:
			return sizeof(GLbyte) * 3;
		case GL_4_BYTES:
			return sizeof(GLbyte) * 4;
	}
    return 0;
} 

/**
* A function.
* This utility routine returns bytes per pixel for the given format/type combination.
*/
int crPixelSize( GLenum format, GLenum type )
{
	int bytes = 1;

	switch (type) {
#ifdef CR_OPENGL_VERSION_1_2
		case GL_UNSIGNED_BYTE_3_3_2:
		case GL_UNSIGNED_BYTE_2_3_3_REV:
#endif
		case GL_UNSIGNED_BYTE:
		case GL_BYTE:
			bytes = 1;
			break;
		case GL_BITMAP:
			return 0;  /* special case */
#ifdef CR_OPENGL_VERSION_1_2
		case GL_UNSIGNED_SHORT_5_6_5:
		case GL_UNSIGNED_SHORT_5_6_5_REV:
		case GL_UNSIGNED_SHORT_5_5_5_1:
		case GL_UNSIGNED_SHORT_1_5_5_5_REV:
		case GL_UNSIGNED_SHORT_4_4_4_4:
		case GL_UNSIGNED_SHORT_4_4_4_4_REV:
#endif
		case GL_UNSIGNED_SHORT:
		case GL_SHORT:
			bytes = 2;
			break;
#ifdef CR_OPENGL_VERSION_1_2
		case GL_UNSIGNED_INT_8_8_8_8:
		case GL_UNSIGNED_INT_8_8_8_8_REV:
		case GL_UNSIGNED_INT_10_10_10_2:
		case GL_UNSIGNED_INT_2_10_10_10_REV:
#endif
		case GL_UNSIGNED_INT:
		case GL_INT:
		case GL_FLOAT:
			bytes = 4;
			break;
		default: 
			;
	}

	switch (format) {
		case GL_COLOR_INDEX:
		case GL_STENCIL_INDEX:
		case GL_DEPTH_COMPONENT:
		case GL_RED:
		case GL_GREEN:
		case GL_BLUE:
		case GL_ALPHA:
		case GL_LUMINANCE:
		case GL_INTENSITY:
			break;
		case GL_LUMINANCE_ALPHA:
			bytes *= 2;
			break;
		case GL_RGB:
#ifdef CR_OPENGL_VERSION_1_2
		case GL_BGR:
#endif
			bytes *= 3;
			break;
		case GL_RGBA:
#ifdef GL_ABGR_EXT
		case GL_ABGR_EXT:
#endif
#ifdef CR_OPENGL_VERSION_1_2
		case GL_BGRA:
#endif
			bytes *= 4;
			break;
		default:
			;
	}

	return bytes;
}

/**
* A function.
* This utility routine returns the number of bytes of storage needed to accomodate an
* image with the given format, type, and size.
*/
unsigned int crImageSize( GLenum format, GLenum type, GLsizei width, GLsizei height )
{
	unsigned int bytes = width * height;

	if (type == GL_BITMAP)
	{
		bytes = ((width + 7) / 8) * height;
	}
	else
	{
		bytes = width * height * crPixelSize( format, type );
	}
	return bytes;
}

#endif