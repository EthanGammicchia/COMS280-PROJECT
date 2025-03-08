#include "CheckingAccount.h"

// Constructor
CheckingAccount::CheckingAccount(int accNum, double initBalance, double overdraft)
    : BankAccount(accNum, initBalance), overdraftLimit(overdraft) {}

// Withdraw (To be implemented)
void CheckingAccount::withdraw(double amount) {
    // TODO: Implement overdraft withdrawal logic
}

// Display (To be implemented)
void CheckingAccount::display() const {
    // TODO: Implement display logic
}