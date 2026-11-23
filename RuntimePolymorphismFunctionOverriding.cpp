// Topic: Runtime Polymorphism / Function Overriding
#include<iostream>
using namespace std;



class hello{
public:
    virtual void hi()
    {
        cout<<"main function"<<endl;
    }
};

class hello2:public hello{
public:
    void hi() override
    {
        cout<<"child of hello"<<endl;
    }
};

int main()
{
    hello* s1;
    hello2 s2;

    s1=&s2;
    s1->hi();
}