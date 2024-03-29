
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(Qt63dlogic_INCLUDE_DIRS ${Qt_ROOT_DIR}/include/Qt3DLogic)

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt63dlogic_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qt3dlogic)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqt3dlogic_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt63dlogic SHARED ${smokeqt3dlogic_LIB_SRCS})

target_link_libraries(smokeqt63dlogic
    smokeqt6core 
    smokeqt6gui 
    Qt6::Core
    Qt6::Gui
    Qt6::3DLogic		
)

set_target_properties(smokeqt63dlogic
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)


install(TARGETS smokeqt63dlogic LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt63dlogic PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt63dlogic PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt63dlogic_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt63dlogic.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt63dlogic.typedefs.txt DESTINATION share/smoke)
