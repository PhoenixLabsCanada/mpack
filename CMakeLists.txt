project(mpack C)
cmake_minimum_required(VERSION 3.6)

file(GLOB mpack_all_includes src/*.h src/mpack/*.h)
file(GLOB mpack_all_sources src/mpack/*.c)

include_directories(src)
include_directories(src/mpack)

#add_definitions(-DSDL_MAIN_HANDLED)

add_library(mpack SHARED ${mpack_all_includes} ${mpack_all_sources})
