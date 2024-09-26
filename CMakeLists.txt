cmake_minimum_required(VERSION 3.27)
project(CS303_Assignment_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS303_Assignment_2 main.cpp
        SingleLinkedList.h
        SingleLinkedList.cpp
        Node.h
        Stack.h
        Stack.cpp
)
