// New Operator

#include <iostream>
using namespace std;

int main()
{
    int* ptr;

    ptr = new int;

    *ptr = 10;

    cout << "Address = " << ptr << endl;
    cout << "Value = " << *ptr << endl;

    return 0;
}