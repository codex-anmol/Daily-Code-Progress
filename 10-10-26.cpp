#include <iostream>
using namespace std;

class hello
{
public:
    int num;

    // Parameterized constructor
    hello(int a)
    {
        num = a;
    }

    // Overloading prefix increment operator
    void operator++()
    {
        ++num;
    }

    // Display updated value
    void hi()
    {
        cout << "This is the updated value of num: "
             << num << endl;
    }
};

int main()
{
    hello s1(100);

    ++s1;//overloaded prefix increment operator is called

    s1.hi();

    return 0;
}