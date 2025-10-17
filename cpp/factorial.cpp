#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==1)
     return 1;
     else 
     return(n*factorial(n-1));
}
int main()
{
int x;
cout<<"Enter x value:";
cin>>x;	
cout<<"factorial of "<<x<<" "<<"is:"<<" "<<factorial(x);
return 0;
}
