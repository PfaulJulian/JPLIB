cmake_minimum_required(VERSION 3.28)
project(jplib)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(jplib STATIC source/library.cpp
        include/type/ix.h)