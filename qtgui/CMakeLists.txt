
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Vulkan_INCLUDE_DIR};${Qt6Gui_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtgui)
run_smokegen(20 "${smokegenArgs}")
get_smokegen_output_files(smokeqtgui_LIB_SRCS 20)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

#for error : "No Target Architecture"
if (WIN32)
 add_compile_definitions(_AMD64_)
endif()

add_library(smokeqt6gui SHARED ${smokeqtgui_LIB_SRCS})

target_link_libraries(smokeqt6gui
    smokeqt6core
    Qt6::Core
    Qt6::Gui
)

set_target_properties(smokeqt6gui
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6gui LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt6gui PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6gui PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6gui_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6gui.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6gui.typedefs.txt DESTINATION share/smoke)
