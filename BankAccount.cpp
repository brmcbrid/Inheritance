//
// Created by brmcbrid on 10/27/2025.
//
#include <iostream>
#include <string>
#include "BankAccount.h"

// default constructor implementation
BankAccount::BankAccount() {
    m_accountNumber = 0;
    m_accountHolderName = "";
    m_balance = 0.0;
}
// constructor (parametric) implementation
BankAccount::BankAccount(std::string accountHolderName, int accountNumber, double balance) {
    m_accountHolderName = accountHolderName;
    m_accountNumber = accountNumber;
    m_balance = balance;
}
void BankAccount::setAccountHolderName(const std::string name) {
    m_accountHolderName = name;
}
void BankAccount::setAccountNumber(const int number) {
    m_accountNumber = number;
}
void  BankAccount::deposit(const double amount) {
    m_balance += amount;
}
void  BankAccount::withdraw(const double amount) {
    if (amount < (m_balance - 5.00)) {
        m_balance -= amount;
    }
    else {
        std::cout << "Insufficient funds to withdraw $" << amount << std::endl;
    }
}
std::string  BankAccount::getAccountHolderName() {
    return m_accountHolderName;
}
int  BankAccount::getAccountNumber() const {
    return m_accountNumber;
}
double  BankAccount::getBalance() const {
    return m_balance;
}
void  BankAccount::displayAccount() const {
    std::cout << "Name: " << m_accountHolderName << std::endl;
    std::cout << "Account number: " << m_accountNumber << std::endl;
    std::cout << "Balance: $" << m_balance << std::endl;
}
