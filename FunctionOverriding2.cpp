// Topic: Function Overriding
// Runtime Polymorphism

#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Student studies in college." << endl;
    }
};

class EngineeringStudent : public Student {
public:
    void display() {
        cout << "Engineering student studies C++." << endl;
    }
};

int main() {
    EngineeringStudent s;

    s.display();

    return 0;
}