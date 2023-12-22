//
// Created by Mouna Erraji on 22/12/23.
//

#ifndef LAB_MOUNA_ERRAJI_ACCOUNT_H
#define LAB_MOUNA_ERRAJI_ACCOUNT_H


#include <string>
#include <iostream>

using namespace std;


class Account {
public:

public:

    std::string nome, cognome; //dichiarazione di due stringhe in stile C++ senza inizializzazione
    int id;
    float soldi_conto;

    Account(int id, float money) : id(id), soldi_conto(money) {
        nome = "Mario";
        cognome = "Rossi ";
        std::string ret = "Nome  e Cognome Utente " + nome + " " + cognome + ", id: " + std::to_string(id) + ", conto: " +
                          std::to_string(money);
        std::cout << ret << "\n\n";
    }

    Account(const std::string &nome, const std::string &cognome, int id, float money);

    std::string preleva(float value);

    std::string deposita(float value);

    std::string join();

    const std::string &getNome() const;

    const std::string &getCognome() const;

    int getId() const;

    int setId(int id);

    float getMoney() const;

    void setMoney(float money);

    float getSoldiConto() const;

    void setNome(const string &nome);


};


#endif //LAB_MOUNA_ERRAJI_ACCOUNT_H
