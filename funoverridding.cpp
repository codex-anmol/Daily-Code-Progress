#include<iostream>
using namespace std;
class Hello
{
public:
     virtual void hi()
    {
        cout<<"main function"<<endl;
    }
};
class hello2:public Hello
{
public:
    void hi() override
    {
        cout<<"overridden function"<<endl;
    }
};
int main()
{
    Hello *h;
    hello2 h2;
    h=&h2;
    h->hi();
    return 0;
}