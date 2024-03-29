//
// Created by Mouna Erraji on 22/12/23.
//

#include "Bank.h"
#include <fstream>
#include <iostream>
#include "Transaction.h"


class Transaction;

void Bank::add_account(const Account& a) {
    accounts.push_back(a);
    bank_report << a.join();
}

void Bank::add_transaction(const Transaction& t) {
    Account a =t.getPayer();
    Account b=t.getBeneficiary();
    a.insertTransaction(t);
    b.insertTransaction(t);
    bank_report << t.getDescription();
}

Bank::~Bank() {
    bank_report.close();
}





