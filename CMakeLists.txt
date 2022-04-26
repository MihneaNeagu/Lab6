cmake_minimum_required(VERSION 3.21)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp numar_complex.cpp numar_complex.h repository.cpp repository.h tests.cpp tests.h
        vector.cpp vector.h)
