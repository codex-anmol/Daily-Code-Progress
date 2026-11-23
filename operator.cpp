#include <iostream>
using namespace std;

class hello
{
public:
    int num;

    void hi()
    {
        cout << "Enter the number: " << endl;
        cin >> num;
    }

    // Overloading less than operator
    bool operator<(hello ss)
    {
        return num < ss.num;
    }

    int hi2()
    {
        return num;
    }
};

int main()
{
    hello s1, s2;

    s1.hi();
    s2.hi();

    if (s1 < s2)
    {
        cout << "Smallest number is " << s1.hi2() << endl;
    }
    else
    {
        cout << "Smallest number is " << s2.hi2() << endl;
    }

    return 0;
}