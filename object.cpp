//Object
#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    void show()
    {
        cout << age;
    }
};

int main()
{
    Student s1;

    s1.age = 20;
    s1.show();

    return 0;
}