cmake_minimum_required(VERSION 3.16)

project(cpp_ai_first_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 1. 定义一个 library
add_library(math_utils
    src/math_utils.cpp
)

# 2. 指定这个 library 的头文件路径
target_include_directories(math_utils
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# 3. 定义可执行程序
add_executable(main_app
    src/main.cpp
)

# 4. 把 library 链接到可执行程序
target_link_libraries(main_app
    PRIVATE
        math_utils
)