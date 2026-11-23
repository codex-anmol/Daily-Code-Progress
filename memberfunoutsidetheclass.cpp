#include<iostream>
using namespace std;

class Hello
{
public:
    void hi();
};

void Hello::hi()//member function declared outside class and defined outside class
{
    cout<<"Hello";
}

int main()
{
    Hello h;
    h.hi();

    return 0;
}