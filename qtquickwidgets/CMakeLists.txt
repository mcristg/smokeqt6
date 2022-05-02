include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Widgets_INCLUDE_DIRS};${Qt6Quick_INCLUDE_DIRS};${Qt6Qml_INCLUDE_DIRS};${Qt6QuickWidgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtquickwidgets)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtquickwidgets_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6quickwidgets SHARED ${smokeqtquickwidgets_LIB_SRCS})

target_link_libraries(smokeqt6quickwidgets
    smokeqt6widgets
    smokeqt6quick
    smokeqt6qml
    Qt6::QuickWidgets
)

set_target_properties(smokeqt6quickwidgets
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6quickwidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt6quickwidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6quickwidgets
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6quickwidgets_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6quickwidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6quickwidgets.typedefs.txt DESTINATION share/smoke)
