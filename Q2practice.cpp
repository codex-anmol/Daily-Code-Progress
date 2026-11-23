/*Q2. Employee Payroll Management System

Company: Infosys

OOP concepts: Inheritance, classes, member functions.

WAP: Create a base class Employee containing employee ID and name. Derive classes PermanentEmployee and ContractEmployee. 
Calculate salary differently for each employee type using the applicable salary components.

Expected output: Employee details and calculated salary for both employee types.

*/
#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeId;
    string name;

public:
    Employee(int id, string empName) : employeeId(id), name(empName) {}
    virtual void displayDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
    }
    virtual double calculateSalary() = 0; // Pure virtual function
};

class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double hra;
    double da;

public:
    PermanentEmployee(int id, string empName, double basic, double h, double d) : Employee(id, empName), basicSalary(basic), hra(h), da(d) {}

    double calculateSalary() override {
        return basicSalary + hra + da;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(int id, string empName, double rate, int hours) : Employee(id, empName), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};
int main() {
    PermanentEmployee permEmp(101, "Alice", 50000, 10000, 5000);
    ContractEmployee contractEmp(102, "Bob", 200, 160);

    cout << "Permanent Employee Details:" << endl;
    permEmp.displayDetails();
    cout << "Calculated Salary: " << permEmp.calculateSalary() << endl;

    cout << "\nContract Employee Details:" << endl;
    contractEmp.displayDetails();
    cout << "Calculated Salary: " << contractEmp.calculateSalary() << endl;

    return 0;
}