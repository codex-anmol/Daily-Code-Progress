#import <iostream>
using namespace std;
class hello{
	public:
		int a;
		void hi()
		{
			cout<<"member function"<<endl;
		}
};
int main()
{
	hello s1;
	s1.a=20;
	cout<<s1.a<<endl;
	s1.hi();
}




