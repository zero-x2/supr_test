cmake_minimum_required(VERSION 3.28)
project(watever)

set(CMAKE_CXX_STANDARD 17)


add_executable(watever src/main.cpp
        src/World.cpp
        include/World.h)

target_include_directories(watever PRIVATE include)