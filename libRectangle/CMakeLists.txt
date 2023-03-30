set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file (GLOB SRC ${SRC_DIR}/*.cpp)
file (GLOB INCLUDES ${INCLUDE_DIR}/*.hpp)

add_library(libRectangle STATIC ${SRC} ${INCLUDES})

target_include_directories(libRectangle PUBLIC ${INCLUDE_DIR})