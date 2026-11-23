#include <iostream>
using namespace std;

class Hello
{
public:
    void hi()
    {
        cout << "Hello";
    }
};

int main()
{
    Hello h[3];

    h[0].hi();
    h[1].hi();
    h[2].hi();

    return 0;
}