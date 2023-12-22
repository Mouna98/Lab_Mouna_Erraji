cmake_minimum_required(VERSION 3.27)
project(Lab_Mouna_Erraji)

add_subdirectory(Test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Account.h Account.cpp  Bank.h Bank.cpp)

add_executable(Lab_Mouna_Erraji main.cpp)

add_library(core ${SOURCE_FILES})

target_link_libraries(Lab_Mouna_Erraji core)
