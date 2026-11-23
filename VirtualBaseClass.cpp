// Topic: Virtual Base Class

#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;

    Student() {
        rollNo = 101;
    }
};

class Academic : public virtual Student {
};

class Sports : public virtual Student {
};

class Result : public Academic, public Sports {
};

int main() {
    Result r;

    cout << "Roll No: " << r.rollNo << endl;

    return 0;
}