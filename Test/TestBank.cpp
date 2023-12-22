//
// Created by Mouna Erraji on 22/12/23.
//
#include "../Bank.h"
#include "../Account.h"
#include <stdexcept>
#include <utility>
#include <string>


#include "gtest/gtest.h"
#include "gtest/gtest-assertion-result.h"


TEST(Bank, TestjoinBank) {
    bool result=true;
    try{
        Bank b;
        Account one("mouna", "erraji",  0, 1000);
        Account two("mario", "rossi",  1, 15000);
        b.add_account(one);
        b.add_account(two);
        EXPECT_EQ(one.getSoldiConto(),1000);
        EXPECT_EQ(two.getNome(),"mario");

    }
    catch(std::out_of_range& e){
        result = false;
    }
    ASSERT_TRUE(result);

}