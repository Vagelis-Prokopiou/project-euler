cmake_minimum_required(VERSION 3.5)
project(multiples_of_3_and_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c11")

set(SOURCE_FILES main.c)
add_executable(multiples_of_3_and_5 ${SOURCE_FILES})