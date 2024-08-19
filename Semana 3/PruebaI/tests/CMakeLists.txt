cmake_minimum_required(VERSION 3.14)
project(TestMatrix)


set(SRC_DIR "${CMAKE_SOURCE_DIR}/..")

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${SRC_DIR})

add_executable(${PROJECT_NAME}
    "${SRC_DIR}/Matrix.hpp"
    "${SRC_DIR}/Matrix.cpp"
    TestMatrix.cpp
 )
