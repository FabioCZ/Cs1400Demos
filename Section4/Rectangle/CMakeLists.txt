cmake_minimum_required(VERSION 3.6)
project(Rectangle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Rectangle.h Rectangle.cpp)
add_executable(Rectangle ${SOURCE_FILES})