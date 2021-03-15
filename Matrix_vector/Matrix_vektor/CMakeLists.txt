cmake_minimum_required(VERSION 3.5)

project(Matrix_vektor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Matrix_vektor main.cpp matrix.cpp matrix.h)
