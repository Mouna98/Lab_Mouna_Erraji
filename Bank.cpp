//
// Created by Mouna Erraji on 22/12/23.
//

#include "Bank.h"
#include <fstream>
#include <iostream>
#include "Transaction.h"


class Transaction;

void Bank::add_account(Account a) {
    accounts.push_back(a);
    bank_report << a.join();

}

void Bank::add_transaction(Transaction t) {
    Account a =t.getPayer();
    Account b=t.getBeneficiary();
    a.insertTransaction(t);
    b.insertTransaction(t);
    bank_report << t.print();

}

Bank::~Bank() {
    bank_report.close();
}

/*void Bank::account_deposita(int id, float m) {
    for (auto i = accounts.begin(); i != accounts.end(); ++i) {
        if (i->getId() == id) {
            bank_report << i->deposita(value);
            break;
        }
    }

}

void Bank::account_preleva(int id, float value) {
    for (auto i = accounts.begin(); i != accounts.end(); ++i) {
        if (i->getId() == id) {
            bank_report << i->preleva(value);
            break;
        }
    }
}*/

