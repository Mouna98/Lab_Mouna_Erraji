//
// Created by Mouna Erraji on 22/12/23.
//

#include "Account.h"
#include <iostream>
#include "Bank.h"
using namespace std;

class Bank;

string Account::join() {
    std::string ret = name + " " + surname + ", id: " + id + ", soldi: " + std::to_string(money) +
                      " si è aggiunta alla banca" + "\n\n";

    return ret;
}

Account::Account(string n, string s, string i, double m) :name(n),surname(s),id(i) {
    if(m >= 0){
            money = m;
        }else{
            throw out_of_range("Errore importo iniziale negativo");
        }
    }



void  Account::insertTransaction(Transaction t) {
        transactions.push_back(t);

}


 string Account::getId() {
    return id;
}

 string Account::getName(){
    return name;
}

string Account::getSurname(){
    return surname;
}

double Account::getMoney(){
    return money;
}

int Account::getTransactions() {
    return transactions.size();
}



