cmake_minimum_required(VERSION 3.21)
project(ReExam_May_2022___code)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex01)
include_directories(ex02)
include_directories(ex03)
include_directories(ex04)

add_executable(ReExam_May_2022___code
        ex01/ex01-library.cpp
        ex01/ex01-main.cpp
        ex02/ex02-library.cpp
        ex02/ex02-main.cpp
        ex03/ex03-library.cpp
        ex03/ex03-main.cpp
        ex04/ex04-library.cpp
        ex04/ex04-main.cpp)
