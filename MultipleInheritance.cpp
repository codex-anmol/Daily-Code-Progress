// Topic: Multiple Inheritance

#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void getMarks(int m) {
        marks = m;
    }
};

class Sports {
protected:
    int score;

public:
    void getScore(int s) {
        score = s;
    }
};

class Student : public Academic, public Sports {
public:
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total: " << marks + score << endl;
    }
};

int main() {
    Student s;

    s.getMarks(80);
    s.getScore(15);
    s.display();

    return 0;
}