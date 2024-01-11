//
// Created by Mouna Erraji on 05/01/24.
//

#include "Transaction.h"

Transaction::Transaction(Account& p, Account& b, double a,string t){
    payer = &p;
    beneficiary = &b;
    if(a > 0){
        amount = a;
    }else{
        throw std::out_of_range("Errore iniziale negativo");
    }
    date=std::time(nullptr);
    if(t=="p" && a<=p.money){
        p.money-=amount;
        description="Prelievo effettuato da "+ payer->getName()+" "+payer->getSurname()+" di importo "+ std::to_string(std::round(getAmount() * 100.0) / 100.0)+
                " € in data " + std::ctime(&date)+ "\n";
    }else if (t=="d"){
        p.money+=amount;
        description="Deposito effettuato da "+ payer->getName()+" "+payer->getSurname()+" di importo "+std::to_string(std::round(getAmount() * 100.0) / 100.0)+
                    " € in data " + std::ctime(&date)+ "\n";

    }else if(t=="b"&& a<=p.money){
        p.money-=amount;
        b.money+=amount;
        description= "Transazione da " +payer->getName()+" "+ payer->getSurname() + " a " +beneficiary->getName()+" "+beneficiary->getSurname()+
                     + " di " +std::to_string(std::round(getAmount() * 100.0) / 100.0) + " € in data " + std::ctime(&date)+ "\n";
    }

}

string Transaction::getDescription() const {
    return description;
}

Account& Transaction::getPayer() const {
    std::string result = payer->getName(); + " " + payer->getSurname();
    return *payer;
}

Account& Transaction::getBeneficiary() const {
    std::string result = beneficiary->getName()+ " " + beneficiary->getSurname();
    return *beneficiary;
}