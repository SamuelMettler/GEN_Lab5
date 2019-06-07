cmake_minimum_required(VERSION 3.13)
project(GEN_Lab5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GEN_Lab5
        Customer.cpp
        Customer.h
        main.cpp
        Movie.cpp
        Movie.h
        Rental.h)
