cmake_minimum_required(VERSION 3.30)
project(
    Matrix
    VERSION 0.0.1
    DESCRIPTION "Car class"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

add_executable(cars_class)

set(sources
    src/Car.h
    src/Car.cpp    
    src/main.cpp
)

target_sources(cars_class PRIVATE ${sources})
target_include_directories(cars_class
    PUBLIC
        "$<BUILD_INTERFACE:${CURRENT_SOURCE_DIR}>"
        "$<BUILD_INTERFACE:${CURRENT_BINARY_DIR}>"
)