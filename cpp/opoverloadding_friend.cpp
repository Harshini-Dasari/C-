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
		friend void operator ++(increment &i);
	};
		void operator ++(increment &i)
		{
			++i.x;
			cout<<"X="<<i.x<<endl;	
		}
int main()
{
	increment i;
	i.get();
	++i;
	return 0;
}
