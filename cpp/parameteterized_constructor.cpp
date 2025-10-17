#include<iostream>
using namespace std;
class Square
{
	private:
		int s;
	public:
		Square(int a)
		{
			s=a;
			cout<<"Area of square="<<s*s;	
		}
};
int main()
{
	int side;
	cout<<"enter side value:";
	cin>>side;
	Square s(side);
	return 0;
}
