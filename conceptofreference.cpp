#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    b = 20;

    cout << "After changing b:" << endl;
    cout << "Value of a = " << a << endl;

    return 0;
}