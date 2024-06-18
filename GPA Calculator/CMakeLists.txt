cmake_minimum_required(VERSION 3.28)
project(GPA_Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(GPA_Calculator main.cpp
        GPA.cpp
        GPA.h)
