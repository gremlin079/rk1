cmake_minimum_required(VERSION 3.10)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(observer_lib STATIC
    src/Observer.cpp
    src/Subject.cpp
    src/WeatherData.cpp
    src/ConcreteObserver.cpp
)

add_executable(main src/main.cpp)
target_link_libraries(main observer_lib)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(ObserverTest tests/ObserverTest.cpp)
target_link_libraries(ObserverTest gtest_main observer_lib)
add_test(NAME ObserverTest COMMAND ObserverTest)

add_executable(SubjectTest tests/SubjectTest.cpp)
target_link_libraries(SubjectTest gtest_main observer_lib)
add_test(NAME SubjectTest COMMAND SubjectTest)

add_executable(WeatherDataTest tests/WeatherDataTest.cpp)
target_link_libraries(WeatherDataTest gtest_main observer_lib)
add_test(NAME WeatherDataTest COMMAND WeatherDataTest)

add_executable(ConcreteObserverTest tests/ConcreteObserverTest.cpp)
target_link_libraries(ConcreteObserverTest gtest_main observer_lib)
add_test(NAME ConcreteObserverTest COMMAND ConcreteObserverTest)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_NAME "observer-pattern")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Your Name")
include(CPack)
