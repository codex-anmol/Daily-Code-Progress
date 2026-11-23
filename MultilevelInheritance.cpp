// Topic: Multilevel Inheritance

#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

class Exam : public Student {
public:
    void giveExam() {
        cout << "Student is giving exam." << endl;
    }
};

class Result : public Exam {
public:
    void showResult() {
        cout << "Result is declared." << endl;
    }
};

int main() {
    Result r;

    r.study();
    r.giveExam();
    r.showResult();

    return 0;
}