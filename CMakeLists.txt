cmake_minimum_required(VERSION 3.10)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 11)

add_library(observer_pattern STATIC src/weatherData.cpp)
target_include_directories(observer_pattern PUBLIC include)

add_executable(observer_example src/main.cpp)
target_link_libraries(observer_example observer_pattern)

enable_testing()
add_subdirectory(tests)
