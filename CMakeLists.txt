project(mpack C)
cmake_minimum_required(VERSION 3.6)

file(GLOB mpack_all_includes src/mpack/*.h)
file(GLOB mpack_all_sources src/mpack/*.c)

include_directories(src)
include_directories(src/mpack)

#add_definitions(-DSDL_MAIN_HANDLED)

add_library(mpack STATIC ${mpack_all_includes} ${mpack_all_sources})

if(WIN32)
	
	set_target_properties(mpack PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
	set_target_properties(mpack PROPERTIES OUTPUT_NAME "mpack_s")

endif(WIN32)
