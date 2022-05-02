#ifndef QT3DRENDER_SMOKE_H
#define QT3DRENDER_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt63render_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt63drender_Smoke;
extern "C" SMOKE_EXPORT void init_qt63drender_Smoke();
extern "C" SMOKE_EXPORT void delete_qt63render_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
