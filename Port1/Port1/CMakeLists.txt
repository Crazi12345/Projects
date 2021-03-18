cmake_minimum_required(VERSION 3.5)

project(Port1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Port1 main.cpp prime_factor.cpp prime_factor.h)
