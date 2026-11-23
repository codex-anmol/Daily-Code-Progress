#include <iostream>
using namespace std;

class hello
{
public:
    string username = "anmol";
    int pass = 12345;
    
};

int main()
{
    hello s1,s2;
    string a;
    int b;
    int aa,bb,cc,dd;

    cout << "Enter username and password: " << endl;
    cin >> a >> b;

    if (s1.username == a && s1.pass == b)
    {
        cout << "Login successful" << endl;
    }
    else
    {
        cout << "Invalid username or password" << endl;
    }


	int avg;
	cout<<"enter 4 no to be taken avg:"<<endl;
	cin >> aa >> bb >> cc >> dd;
	avg=((aa+bb+cc+dd)/4);
	cout<<"average="<<avg<<endl;
	
    return 0;
}
