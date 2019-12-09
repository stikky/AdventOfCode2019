cmake_minimum_required(VERSION 2.8)
project( AdventOfCode2019 LANGUAGES CXX)

## set c++ standard
# set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
add_executable( Day01 src/Day01.cpp )
add_executable( Day02 src/Day02.cpp )
add_executable( Day03 src/Day03.cpp )
add_executable( Day04 src/Day04.cpp )
add_executable( Day05 src/Day05.cpp )
# target_link_libraries( AdventOfCode2019 ${OpenCV_LIBS} )