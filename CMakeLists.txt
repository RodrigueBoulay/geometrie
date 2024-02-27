cmake_minimum_required(VERSION 3.26)
project(geometrie)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(geometrie main.cpp
        Point.cpp
        Point.h
        Segment.cpp
        Segment.h)
