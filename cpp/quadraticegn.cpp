#include<iostream>
#include<cmath> // for sqrt() function
using namespace std;
int main()
{
int a,b,c,d;
float r1,r2;
cout<<"Enter a,b,c values:";
cin>>a>>b>>c;
d=b*b-4*a*c; // Calculate discriminant (d = b^2 - 4ac)
if(d==0) // Case 1: Discriminant is 0 => roots are real and equal
{
r1=r2=(-b)/(2*a);
cout<<"Roots are real and equal"<<endl;
cout<<r1<<" "<<r2;
}
else if(d>0) // Case 2: Discriminant > 0 => roots are real and different
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"Roots are real and different"<<endl;
cout<<r1<<" "<<r2;
}
else // Case 3: Discriminant < 0 => roots are complex (imaginary)
{
cout<<"Roots are imaginary";
}
return 0;
}

