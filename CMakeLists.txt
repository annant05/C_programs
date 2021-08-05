cmake_minimum_required(VERSION 3.16)
project(C_programs)

set(CMAKE_CXX_STANDARD 14)

include_directories(sorting)
include_directories(utils)

add_executable(C_programs
        sorting/basic_sorting.h
        utils/array.h
        main.cpp)
