#pragma once

#include <iostream>

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initBalance);
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    virtual void display() const;
    virtual ~BankAccount() {}
};

