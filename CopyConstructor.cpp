//copy constructor
#include <iostream>
using namespace std;
class hello{
    public:
    int num;
    int num2;
    hello(int a)//parameterized constructor
    {
        num = a;
    }
    hello(hello &obj)//copy constructor
    {
        num2 = obj.num2;
    }
};
int main()
{
    hello h1(10);
    hello h2(h1);
    cout<< h2.num2<< endl;
    return 0;
}