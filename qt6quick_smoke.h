#ifndef QTQUICK_SMOKE_H
#define QTQUICK_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtquick_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6quick_Smoke;
extern "C" SMOKE_EXPORT void init_qt6quick_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6quick_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
