cmake_minimum_required(VERSION 3.5)

project(Uart_comm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Uart_comm main.cpp serialib.cpp serialib.h)
