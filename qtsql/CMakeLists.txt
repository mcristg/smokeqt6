
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Sql_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtsql)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtsql_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtsql SHARED ${smokeqtsql_LIB_SRCS})
add_library(smokeqt6sql SHARED ${smokeqtsql_LIB_SRCS})

target_link_libraries(smokeqt6sql 
    smokeqt6core 
    smokeqt6gui 
    Qt6::Core
    Qt6::Gui
    Qt6::Sql
)

set_target_properties(smokeqt6sql
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqt6sql LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt6sql PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6sql
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6sql_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6sql.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6sql.typedefs.txt DESTINATION share/smoke)
