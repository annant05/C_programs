# cmake_minimum_required(VERSION <specify CMake version here>)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(c_programs main.c general.h converstion.h stringop.h general_math.h searching.h sorting.h data_structure.h)