#include<iostream>
using namespace std;
class increment
{
	private:
		int x;
	public:
		void get()
		{
			cout<<"Enter x value:";
			cin>>x;
		}
		void operator ++()
		{
			++x;
			cout<<"X="<<x<<endl;	
		}
};
int main()
{
	increment i;
	i.get();
	++i;
	return 0;
}
