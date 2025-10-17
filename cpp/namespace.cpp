#include<iostream>
namespace one
{
	int display()
	{
		int a=5;
		return a;
	}
}
namespace two
{
	int display()
	{
		int m=50;
		return m;
	}
}
int main()
{
cout<<two::display();
cout<<one::display();
return 0;
}
