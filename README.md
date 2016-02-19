# opengl-impostor

My master thesis from 2004: Feasibility study of a distributed software architecture for a CAVE system. This was before videogames streaming in steam :)

This is an OpenGL Network Redirector based on a fake opengl32.dll with network functionality. The fake opengl32.dll grabs all calls from the application and sends it to 3d clients. The 3d clients get the calls and data (parameters and textures) over network and make local calls to their real opengl32.dll. The 3d clients can change the perspective from the original view.

## Protocol
The server sends a header with following information:
[0xFEDCBA98][sizeof(DWORD)][{102}{}]
- magic code
- data length
- function number + data

## Installation

### Application
1. Copy the fake opengl32.dll and opengl32.ini in the application folder (rename the original first)
2. Enter the IP addresses from the 3d clients in the opengl32.ini

### Client
1. Enter the gluLookAt parameters in the LogClient.ini
2. Start the client before the application!

[[https://github.com/markierer/opengl-impostor/blob/master/Pictures/Test5.png|alt=Multi texture]]
[[https://github.com/markierer/opengl-impostor/blob/master/Pictures/Test7a.png|alt=Tux Racer!]]
