cmake_minimum_required(VERSION 3.5)

project(SOKUBAN LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SOKUBAN main.cpp
    board.cpp board.h
    level.cpp level.h
    game.cpp  game.h
    pos.h)
