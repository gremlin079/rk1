#include <gtest/gtest.h>
#include "Observer.h"

class MockObserver : public Observer {
public:
    bool updated = false;
    void update() override { updated = true; }
};

TEST(ObserverTest, UpdateCalled) {
    MockObserver observer;
    observer.update();
    EXPECT_TRUE(observer.updated);
}
