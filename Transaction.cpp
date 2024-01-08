//
// Created by Mouna Erraji on 05/01/24.
//

#include "Transaction.h"

Transaction::Transaction(Account& p, Account& b, double a){
    payer = &p;
    beneficiary = &b;
    if(a > 0){
        amount = a;
    }else{
        throw std::out_of_range("Error amount negative");
    }
    p.preleva(amount);
    b.deposita(amount);
    date=std::time(nullptr);
}


std::string Transaction::print() {
    string ret= "Transazione da " +payer->getName()+" "+ payer->getSurname() + " a " +beneficiary->getName()+" "+beneficiary->getSurname()+
                 + " di " +std::to_string(std::round(getAmount() * 100.0) / 100.0) + "€ in data\n" + std::ctime(&date)+ "\n";

    return ret;
}

  Account Transaction::getPayer()  {
    std::string result = payer->getName(); + " " + payer->getSurname();
    return *payer;
}

  Account Transaction::getBeneficiary() {
    std::string result = beneficiary->getName()+ " " + beneficiary->getSurname();
    return *beneficiary;
}