cmake_minimum_required(VERSION 3.5)

project(Sokuban LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Sokuban main.cpp
    game.cpp game.h
    level.cpp level.h
    board.cpp board.h
    pos.h
    )
