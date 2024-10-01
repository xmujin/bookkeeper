cmake_minimum_required(VERSION 3.16)

project(TestBookkeeper LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)




set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



add_subdirectory(../BookkeeperLib ../BookkeeperLib/bin)

add_executable(TestBookkeeper tst_testbookkeeper.cpp)

target_include_directories(TestBookkeeper PRIVATE ../BookkeeperLib)

add_test(NAME TestBookkeeper COMMAND TestBookkeeper)

target_link_libraries(TestBookkeeper PRIVATE Qt${QT_VERSION_MAJOR}::Test BookkeeperLib)

