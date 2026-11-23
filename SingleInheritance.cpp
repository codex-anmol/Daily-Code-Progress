// Topic: Single Inheritance

#include <iostream>
using namespace std;

class Student {
public:
    int rollNo = 101;
};

class Result : public Student {
public:
    int marks = 85;
};

int main() {
    Result r;

    cout << "Roll No: " << r.rollNo << endl;
    cout << "Marks: " << r.marks << endl;

    return 0;
}