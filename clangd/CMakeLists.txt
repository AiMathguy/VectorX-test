cmake_minimum_required(VERSION 3.16)
project(clangd_feature_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(clangd-feature-test src/main.cpp)
target_include_directories(clangd-feature-test PRIVATE include)

target_sources(clangd-feature-test PRIVATE src/issues.cpp)
