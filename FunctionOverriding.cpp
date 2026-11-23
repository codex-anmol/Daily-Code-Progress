// Topic: Function Overriding

#include <iostream>
using namespace std;

class Student {
public:
    virtual void display() {
        cout << "Student studies." << endl;
    }
};

class CollegeStudent : public Student {
public:
    void display() override {
        cout << "College student attends classes." << endl;
    }
};

int main() {
    Student* s = new CollegeStudent();

    s->display();

    delete s;

    return 0;
}