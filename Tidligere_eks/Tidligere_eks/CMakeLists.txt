cmake_minimum_required(VERSION 3.5)

project(Tidligere_eks LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(T-eks
    main.cpp
    album.cpp
    album.h
    track.cpp
    track.h
    artist.cpp
    artist.h
    recordcollection.cpp
    recordcollection.h
    )
