#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class square:public shapes
{
	public:
		void area()
		{
			int s;
			cout<<"Enter side value:";
			cin>>s;
			cout<<"Area of square : "<<s*s<<endl;
		}
};
class rectangle:public shapes
{
	public:
		void area()
		{
			int l,b;
			cout<<"Enter length,breadth values:";
			cin>>l>>b;
			cout<<"Area of rectangle : "<<l*b<<endl;
		}
};
int main()
{
	shapes *sp;
	rectangle r;
	square s;
	sp=&r;
	sp->area();
	sp=&s;
	sp->area();
	return 0;
}
