// Parameterized Constructor

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    Employee(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << id << " " << name << endl;
    }
};

int main()
{
    Employee e1(101, "Anmol");
    Employee e2(102, "Harsh");

    e1.display();
    e2.display();

    return 0;
}