//
// Created by Mouna Erraji on 22/12/23.
//
#include "../Account.h"
#include <stdexcept>
#include <string>
using namespace std;

#include "gtest/gtest.h"



TEST(TestAccount, ConstructorRightParamenters) {
    Account a("mouna","erraji","0",1000);
    ASSERT_EQ(a.getName(),"mouna");
    ASSERT_EQ(a.getSurname(),"erraji");
}


TEST(TestAccount, ConstructorWrongParamenters) {
    EXPECT_THROW(Account("mouna","erraji","2",-1000),std::out_of_range);
}

TEST(TestAccount, TestAddTransaction) {
    Account a("mouna", "erraji",  "0", 1000);
    Account c("mario", "rossi",  "1", 15000);
    Transaction t(a,c,10,"b");
    a.insertTransaction(t);
    ASSERT_TRUE(a.getTransactions()==1);
}



