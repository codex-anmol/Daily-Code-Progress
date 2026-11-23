// Topic: Pure Virtual Function and Abstract Class

#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0;
};

class EngineeringStudent : public Student {
public:
    void study() {
        cout << "Engineering student studies C++." << endl;
    }
};

int main() {
    EngineeringStudent s;

    s.study();

    return 0;
}