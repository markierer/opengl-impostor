/*--------------------------------------------------------------*\
| DLL Detective Source File
|
| Copyright (C) 2001,2002 Adam Moravanszky
| 
|
| This file is part of DLL Detective.
|
| DLL Detective is free software; you can redistribute it and/or modify
| it under the terms of the GNU General Public License as published by
| the Free Software Foundation; either version 2 of the License, or
| (at your option) any later version.
|
| DLL Detective is distributed in the hope that it will be useful,
| but WITHOUT ANY WARRANTY; without even the implied warranty of
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
| GNU General Public License for more details.
|
| You should have received a copy of the GNU General Public License
| along with DLL Detective; if not, write to the Free Software
| Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
|
\*--------------------------------------------------------------*/
/*-------------------------------*\
| Protocol constants
|
| see Protocol.txt for explanation.
|
\*-------------------------------*/

#define PR_MAGIC 0xFEDCBA98
#define PR_LOG		101
#define PR_ID		102
#define PR_TXT		112
#define PR_BYE		103
#define PR_PAUSE	104
#define PR_RUN		105
#define PR_STEP		106
#define PR_FLOG		107
#define PR_XLOG		108
#define PR_PAUSEOK	109
#define PR_RUNOK	110
#define PR_TERMIN	111
#define PR_CONNECT  112
#define PR_SUPPRESS	150
//specific to certain DLLs:

//general 3d graphics related commands:
#define PR_GX_WIRE	200
#define PR_GX_SINGLE 201
#define PR_GX_SAVETEX2D 202
#define PR_GX_SAVESHADER 204
#define PR_GX_TOUCH	205
#define PR_GX_PERFDATA 250
#define PR_GX_PERF 206

#define PR_DX_FREEAT0R 203


