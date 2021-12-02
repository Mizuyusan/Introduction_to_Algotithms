cmake_minimum_required(VERSION 3.20)
project(Introduction_to_Algotithms C)

set(CMAKE_C_STANDARD 99)

add_executable(Introduction_to_Algotithms main.c Chapter2/1_insertion_sort.c Practices/pr2_1_4.c)

add_executable(1_insertion_sort Chapter2/1_insertion_sort.c Practices/pr2_1_2.c Practices/pr2_1_3.c Chapter2/2_merge_sort.c)
add_executable(pr2_1_2 Practices/pr2_1_2.c)
add_executable(pr2_1_3 Practices/pr2_1_3.c)
add_executable(pr2_1_4 Practices/pr2_1_4.c)
add_executable(2_merge_sort Chapter2/2_merge_sort.c)