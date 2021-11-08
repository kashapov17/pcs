cmake_minimum_required(VERSION 3.18)
project(mini0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -fopenmp")

add_executable(mini0 main.cpp universe.cpp universe.h cell.cpp cell.h)
