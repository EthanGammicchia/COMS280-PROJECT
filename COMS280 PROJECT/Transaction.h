#pragma once

#include <iostream>
#include <memory>

struct Transaction {
    double amount;
    std::string type;
    std::shared_ptr<Transaction> next;

    Transaction(double amt, std::string t);

    // Display transaction details
    void displayTransaction() const;
};
