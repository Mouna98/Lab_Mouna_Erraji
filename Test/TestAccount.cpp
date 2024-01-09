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
    Transaction t(a,c,10);
    a.insertTransaction(t);
    ASSERT_TRUE(a.transactions.size()==1);
}



/*TEST(Account, TestdepositaMoney) {
    bool result=true;
    try{
        Account u0("mouna","erraji",0,1000);
        u0.deposita(10);
        ASSERT_EQ(u0.getMoney(),1010);


    }catch(std::out_of_range& e){
        result = false;
    }
    ASSERT_TRUE(result);


}


TEST(Account, TestprelevaMoney) {
    bool result=true;
    try{
        Account u0("mouna","erraji",0,1000);
        u0.preleva(10);
        ASSERT_EQ(u0.getMoney(),990);


    }catch(std::out_of_range& e){
        result = false;
    }
    ASSERT_TRUE(result);
}*/