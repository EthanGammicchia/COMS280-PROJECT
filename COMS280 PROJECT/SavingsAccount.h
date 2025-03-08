#pragma once

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double initBalance, double rate);
    void calculateInterest();
    void display() const override;
};

