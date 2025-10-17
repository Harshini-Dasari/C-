#include<iostream>
using namespace std;
class Base
{
	public:
		void show() // function of base class
		{
			cout << "Show() of base class" << endl;
		}
};
class Derived: public Base
{
	public:
		void print() // function of derived class
		{
			cout << "print() of derived class" << endl;
		}
};
int main()
{
	Derived d, *dptr; // derived class object and pointer
	dptr = &d; // pointer points to derived class object
	dptr->show();
	dptr->print(); 
	

return 0;
}

