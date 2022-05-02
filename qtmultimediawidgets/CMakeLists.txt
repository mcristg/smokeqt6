
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6Gui_INCLUDE_DIRS};${Qt6Widgets_INCLUDE_DIRS};${Qt6Network_INCLUDE_DIRS};${Qt6OpenGL_INCLUDE_DIRS};${Qt6Multimedia_INCLUDE_DIRS};${Qt6MultimediaWidgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtmultimediawidgets)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtmultimediawidgets_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt6multimediawidgets SHARED ${smokeqtmultimediawidgets_LIB_SRCS})

target_link_libraries(smokeqt6multimediawidgets
    smokeqt6core
    smokeqt6gui
    smokeqt6widgets
    smokeqt6network
    smokeqt6opengl
    smokeqt6multimedia
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Network
    Qt6::OpenGL
    Qt6::Multimedia
    Qt6::MultimediaWidgets
)

set_target_properties(smokeqt6multimediawidgets
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 17
)

install(TARGETS smokeqt6multimediawidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
   # Realign the stack, for compatibility with an older ABI.
   if (CMAKE_COMPILER_IS_GNUCXX)
      set_target_properties(smokeqt6multimediawidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
   endif()

   # Get rid of the "lib" prefix on archives/DLLs in Windows.
   set_target_properties(smokeqt6multimediawidgets PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt6multimediawidgets_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6multimediawidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt6multimediawidgets.typedefs.txt DESTINATION share/smoke)
