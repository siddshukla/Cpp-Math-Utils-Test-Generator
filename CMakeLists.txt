cmake_minimum_required(VERSION 3.10)
project(MathUtilsTest)

set(CMAKE_CXX_STANDARD 17)

include_directories(src deps/googletest/googletest/include)

add_executable(runTests
    src/math_utils.cpp
    tests/math_utils_test.cpp
)

target_link_libraries(runTests
    PRIVATE
    ${CMAKE_SOURCE_DIR}/deps/googletest/build/lib/libgtest.a
${CMAKE_SOURCE_DIR}/deps/googletest/build/lib/libgtest_main.a

    pthread
)
