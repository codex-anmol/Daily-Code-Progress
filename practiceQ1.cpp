/*Q1. Bank Account Management System

Company: TCS

OOP concepts: Class, object, encapsulation, constructors.

WAP: Create a class Bank Account containing account number, account holder name, and balance as private data members. 
Implement member functions to deposit money, withdraw money, and display account details. Ensure that withdrawals
cannot exceed the available balance.

Expected operations: Deposit ₹5,000, withdraw ₹2,000, and display the updated balance.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {//class
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNumber, string accHolderName, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountDetails();
    double initialBalance; 
};
BankAccount::BankAccount(int accNumber, std::__cxx11::string accHolderName, double initialBalance) {
    accountNumber = accNumber;
    accountHolderName = accHolderName;
    balance = initialBalance;
}
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: rupees" << amount << endl;
    } else {
        cout << "Invalid deposit amount" << endl;
    }
}
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: rupees" << amount << endl;
    } else {
        cout << "Invalid withdrawal amount or insufficient balance!" << endl;
    }
}void BankAccount::displayAccountDetails() {
    cout << "initialBalance: " << initialBalance << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Balance: rupees" << balance << endl;

}
int main() {
    BankAccount account(123456, "John Doe", 10000.0);//object
    account.initialBalance = 10000.0; 
    account.deposit(5000.0);
    account.withdraw(2000.0);
    account.displayAccountDetails();

    return 0;
}
