cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Siemens_DevOps)

add_subdirectory(libRectangle)
set (BUILD_TESTS TRUE)
if (BUILD_TESTS)
	set(BUILD_GMOCK ON)
	add_subdirectory(external/googletest)
	add_subdirectory(test)
endif()
add_subdirectory(main)