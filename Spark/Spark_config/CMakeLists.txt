cmake_minimum_required(VERSION 3.5)

project(Spark_config LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Spark_config main.cpp serialib.cpp serialib.h)

