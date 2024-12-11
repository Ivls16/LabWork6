cmake_minimum_required(VERSION 3.22)
project(Task3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(GTest REQUIRED)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")

add_executable(Task3
        io.cpp
        main.cpp
        solve.h
        solve.cpp
        testing.cpp
        testing.cpp
        testing.cpp)

target_link_libraries(Task3 ${GTEST_LIBRARIES})
