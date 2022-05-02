#ifndef QT3DINPUT_SMOKE_H
#define QT3DINPUT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qt63dinput_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt63dinput_Smoke;
extern "C" SMOKE_EXPORT void init_qt63dinput_Smoke();
extern "C" SMOKE_EXPORT void delete_qt63input_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
