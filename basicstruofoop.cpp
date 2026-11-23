#include<iostream>
using namespace std;

class Hello//class declaration
{
public://access specifier
    void hi()//member function definition
    {
        cout<<"Hello";
    }
};

int main()
{
    Hello h;//object creation
    h.hi();//object calling member function

    return 0;
}