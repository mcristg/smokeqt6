#ifndef QT_SMOKE_H
#define QT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt6_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6_Smoke;
extern "C" SMOKE_EXPORT void init_qt6_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
