//
// Created by Mouna Erraji on 09/01/24.
//
#include "../Transaction.h"
#include "../Account.h"
#include <stdexcept>
#include <string>
using namespace std;

#include "gtest/gtest.h"


TEST(TestTransaction, ConstructorRightParamenters) {
    Account a("mouna","erraji","0",10);
    Account b("mario","rossi","1",5);
    Transaction t(a,b,1);
    ASSERT_EQ(a.getMoney(),9);
    ASSERT_EQ(b.getMoney(),6);
    ASSERT_EQ(t.getAmount(),1);
}


TEST(TestTransaction,ConstructorWrongParameters) {
    Account a("mouna","erraji","0",10);
    Account b("mario","rossi","1",5);
    EXPECT_THROW(Transaction(a,b,-1),std::out_of_range);
}
