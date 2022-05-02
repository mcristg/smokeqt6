#ifndef QTSVG_SMOKE_H
#define QTSVG_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt6svg_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6svg_Smoke;
extern "C" SMOKE_EXPORT void init_qt6svg_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6svg_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
