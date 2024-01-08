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

        Transaction(Account& p, Account& b, double a);

        std::string print();



        const double getAmount() const {
            return amount;
        }

          Account getPayer();

          Account getBeneficiary();


    private:
        double amount;
        Account *payer;
        Account *beneficiary;
        time_t date;

};



#endif //LAB_MOUNA_ERRAJI_TRANSACTION_H
