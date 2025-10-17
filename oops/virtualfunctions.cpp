#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"show() of base class"<<endl;
		}
};
class Derived:public Base
{
	public:
		void show()
		{
		  cout<<"show() of derived class";	
		}
};
int main()
{
	Base b,*bp;
	Derived d;
	bp=&b;
	bp->show();
	bp=&d;
	bp->show();
	return 0;
}
