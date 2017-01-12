cmake_minimum_required(VERSION 3.5)
project(Leetcode-Practice)

include_directories(
    ${PROJECT_SOURCE_DIR}
    )

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
header/base.h
header/1_stack_min.h
header/2_stack_to_queue.h
header/3_reverse_stack.h
header/4_cat_dog_queue.h
header/5_max_window.h
src/main.cpp
    )

add_executable(out.o ${SOURCE_FILES})

