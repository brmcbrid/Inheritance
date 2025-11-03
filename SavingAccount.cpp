//
// Created by brmcbrid on 11/3/2025.
//

#include "SavingAccount.h"

#include <iostream>
#include <ostream>

SavingAccount::SavingAccount(std::string name, int account, double balance, double APY):BankAccount(name,account,balance) {
    m_APY = APY;
}

void SavingAccount::displayAccount() {
    BankAccount::displayAccount();
    std::cout << "APY %" << m_APY << std::endl;
}
void SavingAccount::addMonthlyInterest() {
    // APY% 3.4
    double monthlyInterest = 1 + (m_APY / 100 / 12);
    // monthly interest factor = 1.00283333
    m_balance *= monthlyInterest;
}