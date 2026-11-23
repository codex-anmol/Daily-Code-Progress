// Function Overloading

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

void add(double a, double b)
{
    cout << "Sum = " << a + b << endl;
}

int main()
{
    add(10, 20);
    add(5.5, 2.5);

    return 0;
}