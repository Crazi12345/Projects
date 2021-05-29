cmake_minimum_required(VERSION 3.5)

project(ovelse8_igen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ovelse8_igen main.cpp
    part.cpp part.h
    subassembly.cpp subassembly.h
    simplepart.cpp simplepart.h)
