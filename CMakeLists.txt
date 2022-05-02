cmake_minimum_required(VERSION 3.18.4)
project(SMOKEQT6)

set(VERSION_MAJOR 6)
set(VERSION_MINOR 2)
set(VERSION_PATCH 4)

function(get_smokegen_args RESULT_NAME moduleName)
    set(clangOptions "-clangOptions")
    if(NOT WIN32)
        list(APPEND clangOptions  "-fPIC")
    endif()

    if(MSVC AND MSVC_VERSION GREATER 1600)
        # The features that clang reports and the features that Qt will detect at
        # compile time must match.  MSVC2015 supports c++14, but does not support
        # only the c++11 subset that clang would turn on with -std=c++11.  When
        # running inside smokegen, Qt's compiler detection sees the compiler as
        # clang under msvc.
        list(APPEND clangOptions "-std=c++17")
    elseif(${Qt6Core_VERSION} VERSION_GREATER 6.2.4)
        # Qt >=5.7.0 requires c++11
        list(APPEND clangOptions "-std=c++17")
   endif()

    set(smokegenArgs
        -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml"
        -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
        -L "${CMAKE_BINARY_DIR}"
        ${clangOptions}
        -- ${CMAKE_CURRENT_SOURCE_DIR}/${moduleName}_includes.h
    )
    set(${RESULT_NAME} ${smokegenArgs} PARENT_SCOPE)
    
endfunction()

function(create_configure_files dirs)
    set(qt_dirs)
    foreach(filename ${dirs})
        if("${filename}" MATCHES "\\.framework/?$")
            string(REGEX REPLACE "/[^/]+\\.framework" "" framework_path "${filename}")
            set(qt_dirs "${qt_dirs}        <framework>${framework_path}</framework>\n")
        else()
            set(qt_dirs "${qt_dirs}        <dir>${filename}</dir>\n")
        endif()
    endforeach(filename)

    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)
    endif()
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml @ONLY)
    endif()
endfunction()

add_definitions(-DSMOKE_BUILDING)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()

if (Qt6_DIR)
   string(REPLACE "/lib/cmake/Qt6" "" Qt_ROOT_DIR ${Qt6_DIR})
endif()   

find_package(Vulkan REQUIRED)
find_package(Qt6 COMPONENTS Core REQUIRED)

find_package(Qt6
    COMPONENTS
    DBus
    Gui
    Help
    Multimedia
    MultimediaWidgets
    Network
    OpenGL
    Positioning
    PrintSupport
    Qml
    Quick
    QuickWidgets
    scxml
    Sql
    Svg
    #Test
    UiTools
    WebChannel
    WebEngineCore
    WebEngineWidgets
    Widgets
    3DAnimation
    3DCore
    3DExtras
    3DInput
    3DLogic
    3DRender
    Xml
    QUIET
)

find_package(Smoke)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
set(CMAKE_INSTALL_PREFIX ${SMOKE_INSTALL_PREFIX}
    CACHE PATH "Install prefix" FORCE)
endif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SMOKE_CMAKE_MODULE_DIR}")
include(MacroOptionalFindPackage)
include(MacroOptionalAddBindings)
include(MacroLogFeature)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_MACOSX_RPATH 1)

# the RPATH to be used when installing, but only if it's not a system directory
LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
IF("${isSystemDir}" STREQUAL "-1")
   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
ENDIF("${isSystemDir}" STREQUAL "-1")

# Set LIB_INSTALL_DIR if it's not set already.
if (NOT LIB_INSTALL_DIR)
    set (LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
endif (NOT LIB_INSTALL_DIR)

## disable deprecation waringins
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
endif()

#macro_optional_find_package(Qwt5)
#macro_log_feature(Qwt5_Qt4_FOUND "Qwt5 for Qt4" "Qwt5 libraries for Qt4" "http://qwt.sourceforge.net" FALSE "" "Needed to compile Qwt5 bindings")
#
#macro_optional_find_package(QScintilla)
#macro_log_feature(QSCINTILLA_FOUND "QScintilla2" "QScintilla2 libraries" "http://www.riverbankcomputing.co.uk/software/qscintilla/intro" FALSE "" "Needed to compile QScintilla2 bindings")

set(QTDEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/qtdefines)

add_subdirectory(qtcore)
macro_optional_add_bindings(Qt6DBus_FOUND "QtDBus" qtdbus)
macro_optional_add_bindings(Qt6Gui_FOUND "QtGui" qtgui)
macro_optional_add_bindings(Qt6Help_FOUND "QtHelp" qthelp)
macro_optional_add_bindings(Qt6Multimedia_FOUND "QtMultimedia" qtmultimedia)
macro_optional_add_bindings(Qt6MultimediaWidgets_FOUND "QtMultimediaWidgets" qtmultimediawidgets)
macro_optional_add_bindings(Qt6Network_FOUND "QtNetwork" qtnetwork)
macro_optional_add_bindings(Qt6OpenGL_FOUND "QtOpenGL" qtopengl)
macro_optional_add_bindings(Qt6Positioning_FOUND "QtPositioning" qtpositioning)
macro_optional_add_bindings(Qt6PrintSupport_FOUND "QtPrintSupport" qtprintsupport)
macro_optional_add_bindings(Qt6Qml_FOUND "QtQml" qtqml)
macro_optional_add_bindings(Qt6Quick_FOUND "QtQuick" qtquick)
macro_optional_add_bindings(Qt6QuickWidgets_FOUND "QtQuickWidgets" qtquickwidgets)
macro_optional_add_bindings(Qt6Scxml_FOUND "QtScxml" qtscxml)
macro_optional_add_bindings(Qt6Sql_FOUND "QtSql" qtsql)
macro_optional_add_bindings(Qt6Svg_FOUND "QtSvg" qtsvg)
#
#macro_optional_add_bindings(Qt5Test_FOUND "QtTest" qttest)
#
macro_optional_add_bindings(Qt6UiTools_FOUND "QtUiTools" qtuitools)
macro_optional_add_bindings(Qt6WebChannel_FOUND "QtWebChannel" qtwebchannel)
macro_optional_add_bindings(Qt6WebEngineCore_FOUND "QtWebEngineCore" qtwebenginecore)
macro_optional_add_bindings(Qt6WebEngineWidgets_FOUND "QtWebEngineWidgets" qtwebenginewidgets)
macro_optional_add_bindings(Qt6Widgets_FOUND "QtWidgets" qtwidgets)
macro_optional_add_bindings(Qt6Xml_FOUND "QtXml" qtxml)
#
macro_optional_add_bindings(Qt63DCore_FOUND "Qt3DCore" qt3dcore)
macro_optional_add_bindings(Qt63DExtras_FOUND "Qt3DExtras" qt3dextras)
macro_optional_add_bindings(Qt63DInput_FOUND "Qt3DInput" qt3dinput)
macro_optional_add_bindings(Qt63DLogic_FOUND "Qt3DLogic" qt3dlogic)
macro_optional_add_bindings(Qt63DRender_FOUND "Qt3DRender" qt3drender)
macro_optional_add_bindings(Qt63DAnimation_FOUND "Qt3DAnimation" qt3danimation)
#
#macro_optional_add_bindings(QSCINTILLA_FOUND "QScintilla" qsci)
#
#macro_optional_add_bindings(Qwt5_Qt4_FOUND "Qwt" qwt)




# for qtguess.pl
if (APPLE)
set(qt_test_threshold 15)
else (APPLE)
set(qt_test_threshold 10)
endif (APPLE)

macro_display_bindings_log()
macro_display_feature_log()
