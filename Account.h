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




    void insertTransaction(Transaction t);



    string join();


    string getId();

    string getName() ;

    string getSurname() ;

    double getMoney();

    int getTransactions();

    friend Transaction;// in modo che solo la classe transaction possa modificare l'importo degli account.

private:
    string id;
    double money;
    list<Transaction> transactions;
    string name;
    string surname;
};


#endif //LAB_MOUNA_ERRAJI_ACCOUNT_H
