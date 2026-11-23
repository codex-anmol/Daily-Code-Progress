//Protected Access Specifier
#include <iostream>
using namespace std;

class Parent
{
protected:
    int id;
};

class Child : public Parent
{
public:
    void setId(int x)
    {
        id = x;
    }

    void show()
    {
        cout << "ID = " << id;
    }
};

int main()
{
    Child c;

    c.setId(81);
    c.show();

    return 0;
}