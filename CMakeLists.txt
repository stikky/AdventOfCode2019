cmake_minimum_required(VERSION 3.5)
project( AdventOfCode2019 LANGUAGES CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/include)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/include)
add_library(AdventHelper src/AdventHelper.cpp)
add_library(IntCodeComp src/IntCodeComp.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
add_executable( Day01 src/Day01.cpp )
add_executable( Day02 src/Day02.cpp )
add_executable( Day03 src/Day03.cpp )
add_executable( Day04 src/Day04.cpp )
add_executable( Day05 src/Day05.cpp )

target_link_libraries( Day05 AdventHelper )
target_link_libraries( Day05 IntCodeComp )