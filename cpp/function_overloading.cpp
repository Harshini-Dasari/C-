#include<iostream>
using namespace std;
class multiplication
{
	public:
		void show(int a,int b)
		{
			cout<<"multiplication of two numbers="<<a*b<<endl;
		}
			void show(float a,double b)
		{
			cout<<"multiplication of two numbers="<<a*b<<endl;
		}
			float show(double a)
		{
			int b=10;
			return a*b;
		}

};
int main()
{
	multiplication m;
	m.show(10,20);
	m.show(2.4f,1.5);
	cout<<"multiplication of two numbers="<<m.show(2.15);
	return 0;
}
