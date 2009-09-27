include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke  )

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

    COMMAND generator
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../qt/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/qttest_includes.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qttest )

set(smokeqttest_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokeqttest SHARED ${smokeqttest_LIB_SRCS})

target_link_libraries(smokeqttest smokeqt ${QT_QTCORE_LIBRARY} ${QT_QTTEST_LIBRARY})

set_target_properties(smokeqttest PROPERTIES VERSION 2.0.0 SOVERSION 2 )

install(TARGETS smokeqttest DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qttest_smoke.h DESTINATION include/smoke)