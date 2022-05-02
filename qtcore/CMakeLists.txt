
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtcore)
run_smokegen(20 "${smokegenArgs}")
get_smokegen_output_files(smokeqtcore_LIB_SRCS 20)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")


add_library(smokeqt6core SHARED ${smokeqtcore_LIB_SRCS})

target_link_libraries(smokeqt6core Qt6::Core ${SMOKE_BASE_LIBRARY})

message("${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH}")
set_target_properties(smokeqt6core
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6core LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt6core PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6core
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6core_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml DESTINATION share/smokegen)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6core.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6core.typedefs.txt DESTINATION share/smoke)
