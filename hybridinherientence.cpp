//hybrid inheritance in C++
#include<iostream>
using namespace std;

class Hello
{
public:
    void hi()
    {
        cout<<"Hello"<<endl;
    }
};
class hello1:public Hello
{
public:
    void hi1()
    {
        cout<<"Hello1"<<endl;
    }
};
class hello2:public Hello
{public:
    void hi2()
    {
        cout<<"Hello2"<<endl;
    }
};
class hello3:public hello1,public hello2
{public:
    void hi3()
    {
        cout<<"Hello3"<<endl;
    }
};
int main()

{
    hello3 h;

    h.hi1();
    h.hi2();
    h.hi3();

    return 0;

   
}
