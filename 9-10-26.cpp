#include <iostream>
using namespace std;

class hello {
public:
    virtual void hi(int a, int b)
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;

        cout << "Sum in Parent class: " << a + b << endl;
        cout << "Parent class" << endl;
    }
};

class hello2 : public hello {
public:
    void hi(int a, int b) override
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;

        hello::hi(a, b);

        cout << "Sum in Child class: " << a + b << endl;
        cout << "Child class" << endl;
    }
};

int main()
{
    hello* s1;
    hello2 s2;

    s1 = &s2;
    s1->hi(0, 0);

    return 0;
}