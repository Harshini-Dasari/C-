#include <iostream>
using namespace std; // Inline function: compiler may replace function call
inline int rectangle(int l,int b) // with the actual code to reduce function call overhead
{
 return l*b;
}
int add(int a,int b)
{
 return a+b;
}
double add(double a,double b)
{
return a+b;
}
int main(){
cout<<"Area of Rectangle using inline function :"<<rectangle<<(2,3)<<endl;
cout<<"sum of of two integer values using functionoverloading:"<<add(5,5)<<endl;
cout<<"sum of two double values using functionoverloading:"<<add(2.5,8.5)<<endl;
return 0;
}
