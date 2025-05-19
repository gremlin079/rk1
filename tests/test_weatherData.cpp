#include <gtest/gtest.h>
#include "../include/weatherData.h"

TEST(WeatherDataTest, Inheritance) {
    EXPECT_TRUE(std::is_base_of<Subject, WeatherData>::value);
}

TEST(WeatherDataTest, MethodsCallable) {
    WeatherData wd;
    Observer obs;
    EXPECT_NO_THROW(wd.registerObserver(obs));
    EXPECT_NO_THROW(wd.notifyObservers()));
}
