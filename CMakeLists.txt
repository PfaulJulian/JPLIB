cmake_minimum_required(VERSION 3.25)
project(jplib)

set(CMAKE_CXX_STANDARD 23)

include_directories(include/JPLIB)

add_library(jplib STATIC
        source/library.cpp
        include/JPLIB/cwd.h
)