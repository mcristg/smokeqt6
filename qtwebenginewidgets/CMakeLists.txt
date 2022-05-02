include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Quick_INCLUDE_DIRS};${Qt6Network_INCLUDE_DIRS};${Qt6WebEngineCore_INCLUDE_DIRS};${Qt6WebEngineWidgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtwebenginewidgets)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtwebenginewidgets_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6webenginewidgets SHARED ${smokeqtwebenginewidgets_LIB_SRCS})

target_link_libraries(smokeqt6webenginewidgets 
    smokeqt6core 
    smokeqt6gui 
    smokeqt6quick
    smokeqt6network
    smokeqt6webenginecore
    Qt6::WebEngineWidgets
)

set_target_properties(smokeqt6webenginewidgets
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6webenginewidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt6webenginewidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6webenginewidgets PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6webenginewidgets_smoke.h DESTINATION include/smoke )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6webenginewidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6webenginewidgets.typedefs.txt DESTINATION share/smoke)
