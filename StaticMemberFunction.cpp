// Topic: Static Member Function

#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    static void displayCount() {
        cout << "Number of Students: " << count << endl;
    }

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}