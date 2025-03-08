#pragma once

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNum, double initBalance, double overdraft);
    void withdraw(double amount) override;
    void display() const override;
};

