//
// Created by Mouna Erraji on 22/12/23.
//

#ifndef LAB_MOUNA_ERRAJI_ACCOUNT_H
#define LAB_MOUNA_ERRAJI_ACCOUNT_H


#include <string>
#include <iostream>
#include "Transaction.h"
#include <list>

class Transaction;
using namespace std;


class Account {
public:

    Account(string n,string s, string i, double m);

    void preleva(double m);

    void deposita(double m);

    void insertTransaction(Transaction t);

    list<Transaction> transactions;

    std::string join();


    const string getId();

    const string getName() const;

    const string getSurname() const;

    double getMoney();

    //list<Transaction> &getTransactions();


private:
    string id;
    double money;

    //list<Transaction> transactions;
    string name;
    string surname;
};


#endif //LAB_MOUNA_ERRAJI_ACCOUNT_H
