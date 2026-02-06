cmake_minimum_required(VERSION 3.16)

project(cpp_ai_first_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_ai_first_lib
    src/main.cpp
)
add_executable(vector_growth
    src/vector_growth.cpp
)