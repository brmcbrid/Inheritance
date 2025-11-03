cmake_minimum_required(VERSION 4.0)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance
        main.cpp
        BankAccount.cpp
        BankAccount.h
        CheckingAccount.cpp
        CheckingAccount.h
        SavingAccount.cpp
        SavingAccount.h)
