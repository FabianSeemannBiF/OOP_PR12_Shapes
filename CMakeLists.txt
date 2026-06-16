cmake_minimum_required(VERSION 4.2)
project(OOP_PR12_2DShapes)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOP_PR12_2DShapes main.cpp
        includes/Point.h
        src/Point.cpp
        includes/Shape2D.h
        src/Shape2D.cpp
        includes/Circle.h
        src/Circle.cpp
        includes/Rectangle.h
        src/Rectangle.cpp
        includes/Canvas.h
        src/Canvas.cpp)
