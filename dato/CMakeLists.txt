cmake_minimum_required(VERSION 3.5)

project(dato LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dato
    date.cpp
    date.h
    cpr.cpp
    cpr.h
    main.cpp)
