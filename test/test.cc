#include <gtest/gtest.h>

#include "gmock/gmock.h"

#include <string>


#include "../src/some_class.cpp"

using ::testing::NiceMock;
using ::testing::NaggyMock;
using ::testing::StrictMock;

using ::testing::Return; 

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

 enum Bar {Diamonds, Hearts, Clubs, Spades };

class Foo {
 public:
  //virtual ~Foo();
  virtual int GetSize() const = 0;
  virtual std::string Describe(const char* name) = 0;
  virtual std::string Describe(int type) = 0;
  virtual bool Process(Bar elem, int count) = 0;
};

class MockFoo : public Foo {
 public:
  MOCK_METHOD(int, GetSize, (), (const, override));
  MOCK_METHOD(std::string, Describe, (const char* name), (override));
  MOCK_METHOD(std::string, Describe, (int type), (override));
  MOCK_METHOD(bool, Process, (Bar elem, int count), (override));
};

TEST(BarTest, DoesThis) {
  MockFoo foo;                                    // #2

  ON_CALL(foo, GetSize())                         // #3
      .WillByDefault(Return(1));
  // ... other default actions ...

  EXPECT_CALL(foo, Describe(5))                   // #4
      .Times(3)
      .WillRepeatedly(Return("Category 5"));
  // ... other expectations ...
  // testing function -> MyProductionFunction
  //EXPECT_EQ(MyProductionFunction(&foo), "good");  // #5
} 
   

// void fooTest(){
//     NiceMock<MockFoo> nice_foo;
// }