#ifndef INHERITANCE_SAVINGACCOUNT_H
#define INHERITANCE_SAVINGACCOUNT_H
#include <string>

#include "BankAccount.h"


class SavingAccount : public BankAccount{
private:
    double m_APY;
public:
    SavingAccount(std::string name, int account, double balance, double APY);
    void addMonthlyInterest();
    void displayAccount();

};


#endif //INHERITANCE_SAVINGACCOUNT_H