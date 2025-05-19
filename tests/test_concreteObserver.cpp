#include <gtest/gtest.h>
#include "concreteObserver.h"
#include "weatherData.h"

TEST(ConcreteObserverTest, UpdateReceivesData) {
    WeatherData weatherData;
    ConcreteObserver observer("TestObserver", &weatherData);
    weatherData.setMeasurements(25.0f, 65.0f, 1013.0f);
    EXPECT_EQ(observer.getName(), "TestObserver");
}
