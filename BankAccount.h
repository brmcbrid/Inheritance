//
// Created by brmcbrid on 10/27/2025.
//

#ifndef INHERITANCE_BANKACCOUNT_H
#define INHERITANCE_BANKACCOUNT_H


class BankAccount {
protected:
    std::string m_accountHolderName;
    int m_accountNumber;
    double m_balance;
public:  // PUBLIC INTERFACE - SETTER (MUTATORS) AND GETTER (accessor) METHODS
    // default constructor
    BankAccount();

    // constructor (parametric)
    BankAccount(std::string accountHolderName, int accountNumber, double balance);

    void setAccountHolderName(const std::string name);
    void setAccountNumber(int number);
    void deposit(double amount);
    virtual void withdraw(double amount);
    std::string getAccountHolderName();
    int getAccountNumber() const;
    double getBalance() const;
    virtual void displayAccount() const;
};


#endif //INHERITANCE_BANKACCOUNT_H