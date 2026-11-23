#include<iostream>
using namespace std;

class Hello
{
public:
    void hi()
    {
        cout<<"Hello"<<endl;//member function declared inside class and defined inside class    
    }
};

int main()
{
    Hello h;
    h.hi();

    return 0;
}
