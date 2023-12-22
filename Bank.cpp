//
// Created by Mouna Erraji on 22/12/23.
//

#include "Bank.h"
#include <fstream>
#include <iostream>



void Bank::add_account(Account a) {
    accounts.push_back(a);
    /*
    std::cout << "Lista utenti:\n";
    for (auto i = users.begin(); i != users.end(); ++i){
        i->print();

    }
    std::cout << "\n\n\n";
     */
    bank_report << a.join();

}

Bank::~Bank() {
    bank_report.close();
}

void Bank::account_deposita(int id, float value) {
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
}

/*void Bank::write_account(){
    Account ac;
    ofstream outFile;
    outFile.open("banca.txt");
    ac.addAccount();
    outFile.write((char*)&ac, sizeof(Account));
    outFile.close();
}

Bank::~Bank() {
}*/