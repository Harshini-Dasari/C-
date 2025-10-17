#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length,breadth;
		public:
			void get(int length,int breadth)
			{
				this->length=length;
				this->breadth=breadth;
			}
			void area()
			{
				cout<<"Area of rectangle is:"<<length*breadth;
			}
};
int main()
{
	Rectangle r;
	r.get(20,10);
	r.area();
	return 0;
}
