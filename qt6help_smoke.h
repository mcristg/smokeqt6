#ifndef QTHELP_SMOKE_H
#define QTHELP_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt6help_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6help_Smoke;
extern "C" SMOKE_EXPORT void init_qt6help_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6help_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
