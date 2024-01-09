cmake_minimum_required(VERSION 3.27)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp TestAccount.cpp TestBank.cpp TestTransaction.cpp)
add_executable(runTestBank ${TEST_SOURCE_FILES})
target_link_libraries(runTestBank gtest gtest_main core)