// Topic: Function Overloading
// Compile-Time Polymorphism

#include <iostream>
using namespace std;

class Student {
public:
    void display(int marks) {
        cout << "Marks: " << marks << endl;
    }

    void display(double percentage) {
        cout << "Percentage: " << percentage << endl;
    }

    void display(int marks1, int marks2) {
        cout << "Total Marks: " << marks1 + marks2 << endl;
    }
};

int main() {
    Student s;

    s.display(80);
    s.display(85.5);
    s.display(80, 90);

    return 0;
}
