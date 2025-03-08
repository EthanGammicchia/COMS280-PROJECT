#include "SavingsAccount.h"

// Constructor
SavingsAccount::SavingsAccount(int accNum, double initBalance, double rate)
    : BankAccount(accNum, initBalance), interestRate(rate) {}

// Calculate Interest (To be implemented)
void SavingsAccount::calculateInterest() {
    // TODO: Implement interest calculation logic
}

// Display (To be implemented)
void SavingsAccount::display() const {
    // TODO: Implement display logic
}