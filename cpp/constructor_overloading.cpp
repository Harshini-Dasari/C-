#include<iostream>
using namespace std;
class Rectangle{
private:
int length,breadth;
public:
Rectangle(){
length=2; breadth=4;
}
Rectangle(int l,int b){
length=l;
breadth=b;
}
Rectangle(float l,float b){
length=l;
breadth=b;
}
void area(){
cout<<"Area of the rectangle is:"<<length*breadth<<endl;
}};
int main()
{
Rectangle r;
Rectangle r1(2,2);
Rectangle r2(2.4f,6.3f);
r.area();
r1.area();
r2.area();
return 0;
}

