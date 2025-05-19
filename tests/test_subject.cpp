#include <gtest/gtest.h>
#include "weatherData.h"
#include "observer.h"

class MockObserver : public Observer {
public:
    bool updated = false;
    void update() override { updated = true; }
};

TEST(SubjectTest, RegisterAndNotifyObserver) {
    WeatherData subject;
    MockObserver observer;
    subject.registerObserver(&observer);
    subject.notifyObservers();
    EXPECT_TRUE(observer.updated);
}
