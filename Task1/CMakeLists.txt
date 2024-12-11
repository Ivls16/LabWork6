cmake_minimum_required(VERSION 3.22)
project(Task1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(GTest REQUIRED)

add_executable(Task1
        io.cpp
        main.cpp
        solve.h
        solve.cpp
        testing.cpp)
target_link_libraries(Task1 ${GTEST_LIBRARIES})
