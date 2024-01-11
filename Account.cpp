//
// Created by Mouna Erraji on 22/12/23.
//

#include "Account.h"
#include <iostream>
#include "Bank.h"
using namespace std;

class Bank;

string Account::join() const {
    std::string ret = name + " " + surname +  ", soldi: " + std::to_string(money) +
                      " si è aggiunta alla banca" + "\n\n";

    return ret;
}

Account::Account(const string& n,const string& s, double m) :name(n),surname(s) {
    if(m >= 0){
            money = m;
        }else{
            throw out_of_range("Errore importo iniziale negativo");
        }
}

void  Account::insertTransaction(Transaction t) {
        transactions.push_back(t);
}

const string& Account::getName() const{
    return name;
}

const string& Account::getSurname() const{
    return surname;
}

double Account::getMoney() const{
    return money;
}

int Account::getTransactions() const{
    return transactions.size();
}



