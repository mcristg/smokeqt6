
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

set(qt_dirs)
foreach(filename ${Qt5Core_INCLUDE_DIRS} ${Qt5Gui_INCLUDE_DIRS} ${Qt5Widgets_INCLUDE_DIRS})
    set(qt_dirs "${qt_dirs}        <dir>${filename}</dir>\n")
endforeach(filename)

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp

    COMMAND ${SMOKE_GEN_BIN}
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -L "${CMAKE_BINARY_DIR}" -- ${CMAKE_CURRENT_SOURCE_DIR}/qtwidgets_includes.h
    DEPENDS ${SMOKE_GEN_BIN} "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

set_property(SOURCE ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp APPEND PROPERTY OBJECT_DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp)

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtwidgets  )

set(smokeqtwidgets_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtwidgets SHARED ${smokeqtwidgets_LIB_SRCS})
add_library(smokeqtwidgets SHARED ${smokeqtwidgets_LIB_SRCS})

target_link_libraries(smokeqtwidgets
    smokeqtcore
    smokeqtgui
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

set_target_properties(smokeqtwidgets PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokeqtwidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtwidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtwidgets
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtwidgets_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtwidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtwidgets.typedefs.txt DESTINATION share/smoke)