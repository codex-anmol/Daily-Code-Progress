// Topic: Operator Overloading

#include <iostream>
using namespace std;

class StudentMarks {
private:
    int marks;

public:
    StudentMarks(int m = 0) {
        marks = m;
    }

    StudentMarks operator+(StudentMarks obj) {
        StudentMarks temp;
        temp.marks = marks + obj.marks;
        return temp;
    }

    void display() {
        cout << "Total Marks: " << marks << endl;
    }
};

int main() {
    StudentMarks s1(80);
    StudentMarks s2(15);

    StudentMarks s3 = s1 + s2;

    s3.display();

    return 0;
}