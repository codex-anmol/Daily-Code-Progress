/*Q6. Payment Processing System

Company: IBM

OOP concepts: Abstract classes, pure virtual functions, runtime polymorphism.

WAP: Create an abstract class Payment with a pure virtual function processPayment().
 Derive classes CreditCardPayment, UPIPayment, and NetBankingPayment. Implement
  payment processing separately for each type and display the transaction status.

Expected output: Payment method, transaction amount, and status for each payment type.*/
#include <iostream>
using namespace std;

// Abstract class
class Payment
{
protected:
    float amount;

public:
    Payment(float a)
    {
        amount = a;
    }

    // Pure virtual function
    virtual void processPayment() = 0;
};

// Derived class 1
class CreditCardPayment : public Payment
{
public:
    CreditCardPayment(float a) : Payment(a) {}

    void processPayment()
    {
        cout << "\nPayment Method: Credit Card";
        cout << "\nAmount: Rs. " << amount;
        cout << "\nStatus: Payment Successful";
    }
};

// Derived class 2
class UPIPayment : public Payment
{
public:
    UPIPayment(float a) : Payment(a) {}

    void processPayment()
    {
        cout << "\nPayment Method: UPI";
        cout << "\nAmount: Rs. " << amount;
        cout << "\nStatus: Payment Successful";
    }
};

// Derived class 3
class NetBankingPayment : public Payment
{
public:
    NetBankingPayment(float a) : Payment(a) {}

    void processPayment()
    {
        cout << "\nPayment Method: Net Banking";
        cout << "\nAmount: Rs. " << amount;
        cout << "\nStatus: Payment Successful";
    }
};

int main()
{
    CreditCardPayment c(5000);
    UPIPayment u(2000);
    NetBankingPayment n(3000);

    Payment *p;

    cout << "\n--- Payment Details ---";

    p = &c;
    p->processPayment();

    p = &u;
    p->processPayment();

    p = &n;
    p->processPayment();

    return 0;
}