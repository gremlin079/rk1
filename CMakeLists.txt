find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(test_observer test_observer.cpp)
target_link_libraries(test_observer GTest::GTest GTest::Main)
gtest_discover_tests(test_observer)

add_executable(test_subject test_subject.cpp)
target_link_libraries(test_subject GTest::GTest GTest::Main)
gtest_discover_tests(test_subject)

add_executable(test_weatherData test_weatherData.cpp)
target_link_libraries(test_weatherData observer_pattern GTest::GTest GTest::Main)
gtest_discover_tests(test_weatherData)
