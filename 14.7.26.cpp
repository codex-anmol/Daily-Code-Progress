//#include <iostream>
//using namespace std;

//class hello 
//{
//public: 
    //string username="anmol";
    
	//int pass=12345; 
//};
//int main()
//{
    //hello s1;
    //string a,b;
    //cout<<"enter username and pass:"<<endl;
    //cin>>a>>b;
    //if(s1.username == a && s1.pass == b)
	//	{
    //		cout<<"login successful "<<endl;}
    //else
  //  	{
//			cout<<"invalid name and pass "<<endl;}
//}
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
    hello s1;
    string a;
    int b;

    cout << "Enter username and password: " << endl;
    cin>>a>>b;
	if (s1.username == a && s1.pass == b)
    	{
        cout << "Login successful" << endl;}
    else
    	{
        cout << "Invalid username or password" << endl;}
}
