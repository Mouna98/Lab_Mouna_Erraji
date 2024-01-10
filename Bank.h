//
// Created by Mouna Erraji on 22/12/23.
//

#ifndef LAB_MOUNA_ERRAJI_BANK_H
#define LAB_MOUNA_ERRAJI_BANK_H

#include <vector>
#include <iostream>
#include "Account.h"
#include "Transaction.h"
#include <fstream>
#include <list>

using namespace std;

class Bank {
public:
    std::vector<Account> accounts;


    std::ofstream bank_report;
    std::string bank_report_file_name = "banca.txt";

    Bank() {
        bank_report.open(bank_report_file_name);
    };

    virtual ~Bank();

    void add_account(Account a);
    void add_transaction(Transaction t);


};




#endif //LAB_MOUNA_ERRAJI_BANK_H
