#include <iostream>


#include <iostream>
#include "Bank.h"
#include <iostream>
#include <fstream>


int main() {

        cout<<"\n BANK MANAGEMENT SISTEM....\n";
        cout<<"\n......Welcome Back.......\n";

        Bank bank;
        Account u0("mouna", "erraji", 0, 1000);
        //Account  u1(1, 100);
        // Accountu2(2, 200);
        bank.add_account(u0);
        //bank.add_account(u1);
        // bank.add_account(u2);
        bank.account_deposita(0, 100);
        bank.account_preleva(0, 100);
        bank.account_preleva(0,300);
        //bank.account_deposita(0,300);
        return 0;
}
