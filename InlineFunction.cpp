// Inline Function

#include <iostream>
using namespace std;
class hello{
    public:
    inline void hi()
    {
        cout << "Inline Function" << endl;
    }
};
int main()
{
    hello h;
    h.hi();
    return 0;
}

//inline fun does not work with
//loop
//goto
//recursion
//switch