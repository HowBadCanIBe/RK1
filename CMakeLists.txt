cmake_minimum_required(VERSION 3.14)
project(memento_pattern VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
find_package(GTest REQUIRED)

add_subdirectory(src)

add_executable(main main.cc)
target_link_libraries(main PRIVATE MementoLib)

add_subdirectory(test)
