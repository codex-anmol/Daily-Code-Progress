// Default Constructor

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee()
    {
        cout << "Default Constructor Invoked";
    }
};

int main()
{
    Employee e1;

    return 0;
}