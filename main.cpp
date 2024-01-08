#include <iostream>


#include <iostream>
#include "Bank.h"
#include <iostream>
#include <fstream>


int main() {

        cout<<"\n BANK MANAGEMENT SISTEM....\n";
        cout<<"\n......Welcome Back.......\n";

        Bank bank;
        Account u0("mouna", "erraji", "0", 100);
        Account u1( "mario","rossi", "1" , 100);
        // Accountu2(2, 200);
        bank.add_account(u0);
        bank.add_account(u1);
        Transaction t(u0,u1,10);
        bank.add_transaction(t);
        //cout<< u0.getMoney();


        return 0;
}
