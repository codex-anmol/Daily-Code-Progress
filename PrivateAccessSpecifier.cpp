//Private Access Specifier
#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    void show()
    {
        cout << "Age = " << age;
    }
};

int main()
{
    Student s;

    s.setAge(20);
    s.show();

    return 0;
}