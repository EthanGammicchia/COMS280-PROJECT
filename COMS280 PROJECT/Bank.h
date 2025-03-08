#pragma once

#include "BankAccount.h"
#include <vector>
#include <memory>

class Bank {
private:
    std::vector<std::unique_ptr<BankAccount>> accounts;

public:
    void addAccount(std::unique_ptr<BankAccount> account);
    void listAccounts() const;
};

