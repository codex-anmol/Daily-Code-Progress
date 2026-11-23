// Delete Operator

#include <iostream>
using namespace std;

int main()
{
    int* p = new int;

    *p = 29;

    cout << "Value = " << *p << endl;

    delete p;

    return 0;
}
