include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Quick_INCLUDE_DIRS};${Qt6Network_INCLUDE_DIRS};${Qt6WebEngineCore_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtwebenginecore)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtwebenginecore_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6webenginecore SHARED ${smokeqtwebenginecore_LIB_SRCS})

target_link_libraries(smokeqt6webenginecore 
    smokeqt6core 
    smokeqt6gui 
    smokeqt6quick
    smokeqt6network
    Qt6::WebEngineCore
)

set_target_properties(smokeqt6webenginecore
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6webenginecore LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt6webenginecore PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt6webenginecore PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6webenginecore_smoke.h DESTINATION include/smoke )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6webenginecore.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6webenginecore.typedefs.txt DESTINATION share/smoke)
