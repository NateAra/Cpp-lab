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
        src/Exercises/smartPointer/SmartPointer.h
        src/Exercises/point/Point.cpp
        src/Exercises/point/Point.h
        src/classes/Length.cpp
        src/classes/Length.h
        src/classes/Array.cpp
        src/classes/Array.h
        src/classes/Inheritance_Polymorphism/Widget.cpp
        src/classes/Inheritance_Polymorphism/Widget.h
        src/Exercises/inheritance_shape/Shape.cpp
        src/Exercises/inheritance_shape/Shape.h
        src/Exercises/inheritance_shape/Circle.cpp
        src/Exercises/inheritance_shape/Circle.h
        src/Exercises/checkBox/CheckBox.cpp
        src/Exercises/checkBox/CheckBox.h
        src/Exercises/DateTime/Date.cpp
        src/Exercises/DateTime/Date.h
        src/Exercises/DateTime/Time.cpp
        src/Exercises/DateTime/Time.h
        src/Exercises/DateTime/DateTime.cpp
        src/Exercises/DateTime/DateTime.h)
