cmake_minimum_required(VERSION 3.9)
project(4thTask)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O3 -Ofast")

add_executable(4thTask
        vector.h Test.cpp Vector.cpp TimeCheck.cpp)