
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Multimedia_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtmultimedia)
run_smokegen(10 "${smokegenArgs}")
get_smokegen_output_files(smokeqtmultimedia_LIB_SRCS 10)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtmultimedia SHARED ${smokeqtmultimedia_LIB_SRCS})
add_library(smokeqt6multimedia SHARED ${smokeqtmultimedia_LIB_SRCS})

target_link_libraries(smokeqt6multimedia
    smokeqt6core
    smokeqt6gui
    Qt6::Core
    Qt6::Gui
    Qt6::Multimedia
)

set_target_properties(smokeqt6multimedia
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6multimedia
    LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt6multimedia PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6multimedia PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6multimedia_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6multimedia.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6multimedia.typedefs.txt DESTINATION share/smoke)
