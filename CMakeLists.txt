cmake_minimum_required(VERSION 3.21)
project(ReExam_May_2022___code)

set(CMAKE_CXX_STANDARD 14)

include_directories(may_22/ex01)
include_directories(may_22/ex02)
include_directories(may_22/ex03)
include_directories(may_22/ex04)

add_executable(ReExam_May_2022___code
        may_22/ex01/ex01-library.cpp
        may_22/ex01/ex01-main.cpp
        may_22/ex02/ex02-library.cpp
        may_22/ex02/ex02-main.cpp
        may_22/ex03/ex03-library.cpp
        may_22/ex03/ex03-main.cpp
        may_22/ex04/ex04-library.cpp
        may_22/ex04/ex04-main.cpp)
