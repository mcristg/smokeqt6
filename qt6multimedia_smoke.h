#ifndef QTMULTIMEDIA_SMOKE_H
#define QTMULTIMEDIA_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtmultimedia_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6multimedia_Smoke;
extern "C" SMOKE_EXPORT void init_qt6multimedia_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6multimedia_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
