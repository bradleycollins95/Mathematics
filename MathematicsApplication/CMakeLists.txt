cmake_minimum_required(VERSION 3.27)
project(2Dgame)

set(CMAKE_CXX_STANDARD 23)

add_executable(2Dgame main.cpp
        Mathematics.cpp
        Mathematics.h)
