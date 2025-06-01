cmake_minimum_required(VERSION 3.14)
project(memento_pattern VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Тестирование
enable_testing()
find_package(GTest REQUIRED)

# Библиотека
add_subdirectory(src)

# Исполняемый файл
add_executable(main main.cc)
target_link_libraries(main PRIVATE MementoLib)

# Тесты
add_subdirectory(test)
