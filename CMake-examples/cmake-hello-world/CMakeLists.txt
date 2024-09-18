cmake_minimum_required(VERSION 3.1)

project(
    "HelloCmake"
    VERSION 1.0
    DESCRIPTION "Hello CMake example"
    LANGUAGES CXX
)

add_executable(${PROJECT_NAME})

target_sources(
    ${PROJECT_NAME}
    PRIVATE src/main.cpp
)