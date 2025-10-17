#include<iostream>
using namespace std;
int a=500;
int main()
{
	int a=50;
	cout<<"local variable is "<<a<<endl;
	cout<<"global variable is "<<::a;
	return 0;
}
