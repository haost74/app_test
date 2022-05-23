#include <gtest/gtest.h>

#include "../src/some_class.cpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

 TEST(some, test_some){
    some_class sc;
    EXPECT_EQ(40, sc.sum(10, 30) );
 }