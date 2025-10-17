#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	public:
		void get()
		{
			x=40;
		}
        // Declare 'sum' as a friend function this allows 'sum' to access private member 'x'
		friend void sum(Demo &d);
};
// Friend function definition
void sum(Demo &d)
{
	int y=50;
    // Access private member 'x' using object 'd'
	cout<<"Addition of two is:"<<d.x+y;
}
int main()
{
	Demo d;
	d.get();
	sum(d);
	return 0;
}

