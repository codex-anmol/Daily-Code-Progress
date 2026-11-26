        /*          A
                 /    \
                /      \
                B       C
                \       /
                 \     /
                    D    */
#include <iostream>
using namespace std;
class A {
public:
    int a;
    A() {
        a = 10;
    }
};
class B : public virtual A {
public:
    int b;
    B() {
        b = 20;
    }
};
class C : public virtual A {
public:
    int c;
    C() {
        c = 30;
    }
};
class D : public virtual B, public virtual C {
public:
    int d;
    D() {
        d = 40;
        cout<<"------------------"<<endl;
        cout << "a+b+c+d: " << a + b + c + d <<"     |"<< endl;
        cout<<"------------------"<<endl;
    }
};
int main(){
    D s1;

}