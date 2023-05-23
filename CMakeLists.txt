cmake_minimum_required(VERSION 3.1.0)
project(ppm VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_library(ppm
	src/ppm.c
)

target_include_directories(ppm
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)
