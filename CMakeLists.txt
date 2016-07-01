cmake_minimum_required(VERSION 3.5)
project(Hello_World_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Hello_World_cpp ${SOURCE_FILES})