cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Sources/Memory.cpp Headers/Memory.h Sources/PagedArray.cpp Headers/PagedArray.h Sources/Reader.cpp Headers/Reader.h Sources/Sort.cpp Headers/Sort.h)
