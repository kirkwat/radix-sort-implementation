cmake_minimum_required(VERSION 3.16)
project(radix_sort_implementation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(radix_sort_implementation src/main.cpp src/Launcher.cpp src/Launcher.h src/RadixSort.cpp src/RadixSort.h)