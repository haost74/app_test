#include <gtest/gtest.h>

#include "../src/bank/bank.cpp"

TEST(bank, initp){
  BankAссaunt ba;
  EXPECT_EQ(0, ba.id);
}