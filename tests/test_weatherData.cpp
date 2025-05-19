#include <gtest/gtest.h>
#include "weatherData.h"
#include "observer.h"

class MockObserver : public Observer {
public:
    bool updated = false;
    void update() override { updated = true; }
};

TEST(WeatherDataTest, SetMeasurementsNotifiesObservers) {
    WeatherData weatherData;
    MockObserver observer;
    weatherData.registerObserver(&observer);
    weatherData.setMeasurements(25.0f, 65.0f, 1013.0f);
    EXPECT_TRUE(observer.updated);
}
