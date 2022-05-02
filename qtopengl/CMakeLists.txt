
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Widgets_INCLUDE_DIRS};${Qt6OpenGL_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtopengl)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtopengl_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6opengl SHARED ${smokeqtopengl_LIB_SRCS})

target_link_libraries(smokeqt6opengl 
    smokeqt6core 
    smokeqt6gui 
    smokeqt6widgets 
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::OpenGL
)

set_target_properties(smokeqt6opengl
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqt6opengl LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt6opengl PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6opengl
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6opengl_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6opengl.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6opengl.typedefs.txt DESTINATION share/smoke)
