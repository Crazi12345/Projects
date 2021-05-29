cmake_minimum_required(VERSION 3.5)

project(Coins LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Coins main.cpp
    coin.cpp    coin.h
    coincollection.cpp  coincollection.h
    country.cpp country.h)
