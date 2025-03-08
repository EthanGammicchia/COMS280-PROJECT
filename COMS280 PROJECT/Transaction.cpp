#include "Transaction.h"

// Constructor
Transaction::Transaction(double amt, std::string t)
    : amount(amt), type(std::move(t)), next(nullptr) {}

// Function to print transaction details
void Transaction::displayTransaction() const {
    std::cout << "Transaction: " << type << " | Amount: $" << amount << std::endl;
}
