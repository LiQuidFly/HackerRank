cmake_minimum_required(VERSION 3.6)
project(HackerRank)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(HackerRank main.cxx)
add_executable(array-splitting array-splitting.cxx)
