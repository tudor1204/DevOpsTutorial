add_executable(rectangle-test)

target_sources(rectangle-test PRIVATE main.cpp)

add_test(NAME rectangle-test COMMAND rectangle-test)

target_link_libraries(rectangle-test
    PUBLIC
        libRectangle
        gtest
        gmock
)