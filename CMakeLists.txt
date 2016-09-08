cmake_minimum_required(VERSION 3.6)
project(project_1_OS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES proj_1.c thread_test.c)
add_executable(project_1_OS ${SOURCE_FILES})