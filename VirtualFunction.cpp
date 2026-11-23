// Topic: Virtual Function
// Runtime Polymorphism

#include <iostream>
using namespace std;

class Student {
public:
    virtual void display() {
        cout << "Student is studying." << endl;
    }

    void show() {
        cout << "Student show function." << endl;
    }
};

class EngineeringStudent : public Student {
public:
    void display() {
        cout << "Engineering student is studying C++." << endl;
    }

    void show() {
        cout << "Engineering student show function." << endl;
    }
};

int main() {
    Student* s;

    EngineeringStudent e;

    s = &e;

    // Virtual function - called at runtime
    s->display();

    // Non-virtual function - called at compile time
    s->show();

    return 0;
}