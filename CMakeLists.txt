cmake_minimum_required(VERSION 3.10)
project(main)

set(SOURCE calculator.cpp Somecode.cpp)
set(HEADER calculator.h)
add_executable(calculator calculator.cpp)
add_executable(program Somecode.cpp)
