cmake_minimum_required(VERSION 3.19)
project(pcs)

set(CMAKE_CXX_STANDARD 20)

add_executable(pcs main.cpp universe.cpp universe.h cell.cpp cell.h)