#include <gtest/gtest.h>

#include "../src/Bank/BankAссaunt.cpp"

TEST(bank, initp){
  BankAссaunt ba;
  EXPECT_EQ(0, ba.id);
}