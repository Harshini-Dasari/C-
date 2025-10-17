//Volume of the Box&The member functions outside of the class
#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
	int volume_of_box(int,int,int);
};
int Box::volume_of_box(int l,int b,int h)
		{
			return(l*b*h);
		}
int main()
{
	Box b;
	int x=b.volume_of_box(1,3,2);
	cout<<"Volume of the Box="<<x;
	return 0;
}

