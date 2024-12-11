cmake_minimum_required(VERSION 3.22)
project(Task2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(GTest REQUIRED)

add_executable(Task2
        io.cpp
        main.cpp
        solve.h
        solve.cpp
        testing.cpp
        testing.cpp)
target_link_libraries(Task2 ${GTEST_LIBRARIES})
