cmake_minimum_required(VERSION 3.16)

project(BookkeeperLib LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

if(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
else()
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
endif()



find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_library(BookkeeperLib SHARED
  BookkeeperLib_global.h
  bookkeeperlib.cpp
  bookkeeperlib.h
)

target_link_libraries(BookkeeperLib PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(BookkeeperLib PRIVATE BOOKKEEPERLIB_LIBRARY)
# 设置头文件目录
target_include_directories(BookkeeperLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

