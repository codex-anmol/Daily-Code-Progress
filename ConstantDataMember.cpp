// Topic: Constant Data Member

#include <iostream>
using namespace std;

class Student {
public:
    const int rollNo;

    Student() : rollNo(101) {
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.display();

    return 0;
}