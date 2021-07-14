cmake_minimum_required(VERSION 3.19)
project(chapter15 C)

set(CMAKE_C_STANDARD 99)

add_executable(chapter15 main.c boolean.h stack.h word.h line.h fmt.c word.c line.c)