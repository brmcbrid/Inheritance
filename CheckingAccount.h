#ifndef INHERITANCE_CHECKINGACCOUNT_H
#define INHERITANCE_CHECKINGACCOUNT_H
#include <string>

#include "BankAccount.h"


class CheckingAccount: public BankAccount {
private:
    double m_overDraftLimit;
public:
    CheckingAccount(std::string name, int account, double balance, double limit);
    void withdraw(const double amount); // polymorphism
    void displayAccount() const; // polymorphism
};



#endif //INHERITANCE_CHECKINGACCOUNT_H