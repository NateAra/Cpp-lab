cmake_minimum_required(VERSION 3.28)
project(Cpp_lab)

set(CMAKE_CXX_STANDARD 23)

add_executable(Cpp_lab src/main.cpp
        utils/greet.hpp
        utils/greet.cpp
        src/classes/Rectangle.cpp
        src/classes/Rectangle.h
        src/Exercises/textBox/TextBox.cpp
        src/Exercises/textBox/TextBox.h
        src/Exercises/smartPointer/SmartPointer.cpp
        src/Exercises/smartPointer/SmartPointer.h)
