#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, int account, double balance, double limit):BankAccount(name,account,balance) {
    m_overDraftLimit=limit;
}

void CheckingAccount::withdraw(const double amount) {
    if (amount < ((m_balance + m_overDraftLimit) - 5.00)) {
        if (amount > m_balance) {
            m_overDraftLimit -= (amount - m_balance);
        }
        m_balance -= amount;
    }
    else {
        std::cout << "Insufficient funds to withdraw $" << amount << std::endl;
    }
}

void CheckingAccount::displayAccount() const {
    BankAccount::displayAccount();
    std::cout << "Overdraft Limit: $" << m_overDraftLimit << std::endl;
}