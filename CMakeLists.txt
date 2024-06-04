cmake_minimum_required(VERSION 3.28)
project(Cpp_lab)

set(CMAKE_CXX_STANDARD 23)

add_executable(Cpp_lab src/main.cpp
        utils/greet.hpp
        utils/greet.cpp
        src/classes/Rectangle.cpp
        src/classes/Rectangle.h
        src/Exercises/TextBox/TextBox.cpp
        src/Exercises/TextBox/TextBox.h)
