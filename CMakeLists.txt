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
header/6_dp_steel_split.h
header/7_magic_string.h
header/8_license_format.h
header/448_find_number_disappeared_in_array.h
header/452_shot_balloons.h
header/451_sort_characters.h
header/455_assign_cookie.h
header/403_forg_jump.h
header/394_decode_string.h
header/393_valid_utf8.h
header/219_contain_duplicate.h
header/384_shuffle_array.h
    )


add_executable(out ${SOURCE_FILES})
