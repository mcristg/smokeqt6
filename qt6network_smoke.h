#ifndef QTNETWORK_SMOKE_H
#define QTNETWORK_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtnetwork_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6network_Smoke;
extern "C" SMOKE_EXPORT void init_qt6network_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6network_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
