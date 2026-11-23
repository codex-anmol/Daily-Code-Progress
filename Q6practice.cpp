/*Q6. Payment Processing System

Company: IBM

OOP concepts: Abstract classes, pure virtual functions, runtime polymorphism.

WAP: Create an abstract class Payment with a pure virtual function processPayment().
 Derive classes CreditCardPayment, UPIPayment, and NetBankingPayment. Implement
  payment processing separately for each type and display the transaction status.

Expected output: Payment method, transaction amount, and status for each payment type.*/
#include <iostream>
#include <string>
using namespace std;
class Payment {
public:
    
virtual void processPayment(double amount) = 0; // Pure virtual function

};
int main() {
    double amount;
    cout << "Enter the transaction amount: ";
    cin >> amount;

    // Create objects of derived classes and call processPayment
    CreditCardPayment creditCard;
    UPIPayment upi;
    NetBankingPayment netBanking;

    cout << "\nProcessing Credit Card Payment:\n";
    creditCard.processPayment(amount);

    cout << "\nProcessing UPI Payment:\n";
    upi.processPayment(amount);

    cout << "\nProcessing Net Banking Payment:\n";
    netBanking.processPayment(amount);

    return 0;
}