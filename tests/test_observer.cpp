#include <gtest/gtest.h>
#include "../include/observer.h"

TEST(ObserverTest, InterfaceExists) {
    Observer obs;
    EXPECT_NO_THROW(obs.update());
}
