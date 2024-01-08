//
// Created by Mouna Erraji on 22/12/23.
//

#include "Account.h"
#include <iostream>
#include "Bank.h"
using namespace std;

class Bank;

std::string Account::join() {
    std::string ret = name + " " + surname + ", id: " + id + ", soldi: " + std::to_string(money) +
                      " si è aggiunta alla banca" + "\n\n";

    return ret;
}

Account::Account(const std::string n, const std::string s, string i, double m) :name(n),surname(s),id(i) {
    if(m >= 0){
            money = m;
        }else{
            throw std::out_of_range("Errore importo iniziale negativo");
        }
    }


void Account::deposita(double m) {
   money += m;
}

void Account::preleva(double m) {
    money -= m;
}

void  Account::insertTransaction(Transaction t) {
        transactions.push_back(t);

}


const string Account::getId() {
    return id;
}

const string Account::getName() const {
    return name;
}

const string Account::getSurname() const {
    return surname;
}

const double Account::getMoney() const{
    return money;
}


