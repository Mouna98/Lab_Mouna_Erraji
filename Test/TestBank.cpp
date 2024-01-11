//
// Created by Mouna Erraji on 22/12/23.
//
#include "../Bank.h"
#include "../Account.h"
#include "../Transaction.h"
#include <stdexcept>
#include <utility>
#include <string>
#include "list"


#include "gtest/gtest.h"
#include "gtest/gtest-assertion-result.h"


TEST(TestBank, TestjoinBank) {
    Bank b;
    Account a("mouna", "erraji", 1000);
    Account c("mario", "rossi", 15000);
    b.add_account(c);
   // b.add_account(a);
    EXPECT_TRUE(b.accounts.size()==1);
}


