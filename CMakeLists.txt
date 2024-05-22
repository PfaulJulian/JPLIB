cmake_minimum_required(VERSION 3.28)

project(JPLib
        VERSION 1.0
        DESCRIPTION "The JPLib, a C++ library made by Julian Pfaul."
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(include)
add_subdirectory(source)
add_subdirectory(test)
