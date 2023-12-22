//
// Created by Mouna Erraji on 22/12/23.
//
#include "../Account.h"
#include <stdexcept>
#include <utility>
#include <string>
using namespace std;

#include "gtest/gtest.h"

TEST(Account, ConstructorRightParamenters) {
    bool result =true;
    Account a("mouna","erraji",0,1000);
    //a.nome="mouna";
    //a.cognome="erraji";
    try{
        Account u0("mouna","erraji",0,1000);
        ASSERT_EQ(u0.getNome(),a.getNome());
        ASSERT_EQ(u0.getCognome(),a.getCognome());



    }catch(std::out_of_range& e){
        result = false;
    }
    ASSERT_TRUE(result);

}


TEST(Account, TestdepositaMoney) {
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
}