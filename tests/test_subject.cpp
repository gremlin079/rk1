#include <gtest/gtest.h>
#include "../include/subject.h"

TEST(SubjectTest, PureVirtual) {
    EXPECT_TRUE(std::is_abstract<Subject>::value);
    EXPECT_TRUE(std::is_polymorphic<Subject>::value);
}
