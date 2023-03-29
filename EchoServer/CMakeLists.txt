cmake_minimum_required(VERSION 3.24)
project(EchoServer)
find_package(Qt5Widgets REQUIRED)
set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.1.0\\5.1.0\\msvc2012\\bin")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(EchoServer
        main.cpp
        mainview.cpp
        mainview.ui
        mainview.h)

target_link_libraries(main.cpp Qt5)
