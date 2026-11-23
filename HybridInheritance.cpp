// Topic: Hybrid Inheritance

#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;

public:
    void getRollNo() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Academic : public Student {
protected:
    int marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    int score;

public:
    void getScore() {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {
        cout << "\nRoll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total: " << marks + score << endl;
    }
};

int main() {
    Result r;

    r.getRollNo();
    r.getMarks();
    r.getScore();
    r.display();

    return 0;
}