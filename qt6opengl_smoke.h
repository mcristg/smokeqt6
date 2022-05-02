#ifndef QTOPENGL_SMOKE_H
#define QTOPENGL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt6opengl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6opengl_Smoke;
extern "C" SMOKE_EXPORT void init_qt6opengl_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6opengl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
