#ifndef QTSQL_SMOKE_H
#define QTSQL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtsql_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt6sql_Smoke;
extern "C" SMOKE_EXPORT void init_qt6sql_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6sql_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
