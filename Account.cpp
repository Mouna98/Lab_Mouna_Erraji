//
// Created by Mouna Erraji on 22/12/23.
//

#include "Account.h"
#include <iostream>
using namespace std;

std::string Account::join() {
    std::string ret = nome + " " + cognome + ", id: " + std::to_string(id) + ", soldi: " + std::to_string(soldi_conto) +
                      " si è aggiunta alla banca" + "\n\n";

    return ret;
}

Account::Account(const std::string &nome, const std::string &cognome, int id, float money) : nome(nome), cognome(cognome),
                                                                                             id(id), soldi_conto(money) {
    std::string ret = "Nome e Cognome Utente " + nome + " " + cognome + ", Id: " + std::to_string(id) + ", Totale Conto: " +
                      std::to_string(soldi_conto);
    std::cout << ret << "\n\n";


}


float Account::getSoldiConto() const {
    return soldi_conto;
}


std::string Account::deposita(float value) {
    float old_soldi = soldi_conto;
    soldi_conto += value;
    std::string ret = "NOME " + nome + " COGNOME " + cognome + ", ID: " + std::to_string(id) + ", Ho Depositato " +
                      std::to_string(value) + " soldi, " +
                      "Saldo Precedente " + std::to_string(old_soldi) + " Saldo Dispobile " + std::to_string(soldi_conto) + "\n\n";
    return ret;
}

std::string Account::preleva(float value) {
    float old_soldi = soldi_conto;
    soldi_conto -= value;
    std::string ret = "NOME " + nome + " COGNOME " + cognome + ",  ID: " + std::to_string(id) + ", Ho Prelevato " +
                      std::to_string(value) + " soldi, " +
                      "Saldo Precedente " + std::to_string(old_soldi) + " Saldo Disponibile" + std::to_string(soldi_conto) + "\n\n";
    return ret;

}

void Account::setNome(const string &nome) {
    Account::nome = nome;
}

void Account::setMoney(float money) {
    money= money;
}

const std::string &Account::getCognome() const {
    return cognome;
}

const std::string &Account::getNome() const {
    return nome;
}

float Account::getMoney() const {
    return soldi_conto;
}

int Account::getId() const {
    return id;
}