cmake_minimum_required(VERSION 3.5)

project(write LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(write main.cpp
    serialib.cpp
    serialib.h)
