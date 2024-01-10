//
// Created by Mouna Erraji on 05/01/24.
//

#ifndef LAB_MOUNA_ERRAJI_TRANSACTION_H
#define LAB_MOUNA_ERRAJI_TRANSACTION_H


#include <stdexcept>
#include <string>
#include <utility>
#include "Account.h"
#include <ctime>

using namespace std;
class Account;

class Transaction {
    public:

        Transaction(Account& p, Account& b, double a,string t);

        string getDescription();



        const double getAmount(){
            return amount;
        }

        const Account& getPayer();

        const Account& getBeneficiary();


    private:
        double amount;
        Account *payer;
        Account *beneficiary;
        time_t date;
        string description;
        string type;

};



#endif //LAB_MOUNA_ERRAJI_TRANSACTION_H
