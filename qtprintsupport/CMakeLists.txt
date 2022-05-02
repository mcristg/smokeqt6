include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6PrintSupport_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtprintsupport)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtprintsupport_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6printsupport SHARED ${smokeqtprintsupport_LIB_SRCS})

target_link_libraries(smokeqt6printsupport
    smokeqt6core
    smokeqt6gui
    smokeqt6widgets
    Qt6::PrintSupport
)

set_target_properties(smokeqt6printsupport
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqt6printsupport LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt6printsupport PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6printsupport
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6printsupport_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6printsupport.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6printsupport.typedefs.txt DESTINATION share/smoke)
