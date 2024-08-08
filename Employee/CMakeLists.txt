cmake_minimum_required(VERSION 3.28)
project(Employee)

set(CMAKE_CXX_STANDARD 17)

add_executable(Employee main.cpp
        Employee.h
        SalariedEmployee.h
        HourlyEmployee.h)
