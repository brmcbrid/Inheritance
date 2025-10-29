#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"
/*
 * OOP Principles
 * Class: A blueprint for how to build an object.
 *
 * Object: A tangible instance of a class. Can be created at compile time statically (early binding)
 * or at run time dynamically (late binding).
 *
 * Encapsulation: Binding data (attributes/properties) along with the methods (functions)
 * that operate on the data (behavior) into a single logical unit.
 *
 *
 * Abstraction: Focus on what an object does, not on how it does it. Simplifies what needs
 * to be known to use the object.
 *
 *
 * Inheritance: When a child (derived) class inherits the attributes and behaviors
 * of a parent (base) class. Promotes reuse of code.
 *
 * Polymorphism: When an inherited behavior operates differently base on the object
 * it acts upon.
 *
 *
 */


int main() {

    BankAccount account1;  // instantiation of BankAccount object - early binding - using default constructor
    BankAccount account2("Minnie Mouse",23415,2550.25); // using the parametric constructor
    // account1.m_accountHolderName = "Mick Mouse";
    // using setters
    account1.setAccountHolderName("Mick Mouse");
    account1.setAccountNumber(12345);
    account1.deposit(1325.75);
    //account1.setBalance(1325.75);
    // using getters
    /*std::cout << "Name: " << account1.getAccountHolderName() << std::endl;
    std::cout << "Account number: " << account1.getAccountNumber() << std::endl;
    std::cout << "Balance: " << account1.getBalance() << std::endl;*/

    account1.displayAccount();
    account1.withdraw(1322.00);
    account1.displayAccount();
    account2.displayAccount();
    account2.withdraw(550.00);
    account2.displayAccount();

    /*std::cout << "---------------------------\n";
    int acc;
    BankAccount *accPtr=nullptr;
    std::cout << "Which account to deposit money into (1-2): ";
    std::cin >> acc;

    if (acc == 1) {
       accPtr = &account1;
        accPtr->deposit(300);
        accPtr->displayAccount();
    }
    else if (acc == 2) {
        accPtr = &account2;
        accPtr->deposit(300);
        accPtr->displayAccount();
    }*/

    // Static instantiation of a Checking Account object - compile time (early binding)
    // /*
    // std::cout << "---------------------------\n";
    // CheckingAccount chkAcc1("Red Green",234151,2550.25,500);
    // */
    // Dynamic instantiation of a CheckingAccount object - run time (late binding)
    std::cout << "---------------------------\n";
    BankAccount *chkAcc1 = new CheckingAccount("Red Green",234151,2550.25,500);
    chkAcc1->displayAccount();
    chkAcc1->withdraw(2900);
    chkAcc1->displayAccount();
    chkAcc1->withdraw(100);
    chkAcc1->displayAccount();
    delete chkAcc1;  // manage memory to avoid memory leaks

    return 0;
}