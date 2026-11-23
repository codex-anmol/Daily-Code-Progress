// Topic: Hierarchical Inheritance

#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

class EngineeringStudent : public Student {
public:
    void coding() {
        cout << "Engineering student is coding." << endl;
    }
};

class MedicalStudent : public Student {
public:
    void practical() {
        cout << "Medical student is doing practical." << endl;
    }
};

int main() {
    EngineeringStudent e;
    MedicalStudent m;

    cout << "Engineering Student:" << endl;
    e.study();
    e.coding();

    cout << "\nMedical Student:" << endl;
    m.study();
    m.practical();

    return 0;
}