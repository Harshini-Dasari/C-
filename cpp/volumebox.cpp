#include<iostream>
using namespace std;
class Box
{
public:
		int length,breadth,height;
		void volume_of_box()
		{
			cout<<"Enter length,breadth,height values:";
			cin>>length>>breadth>>height;
			cout<<"Volume of the Box="<<length*breadth*height;
		}
};
int main()
{
	Box b;
	b.volume_of_box();
	return 0;
}

