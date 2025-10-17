#include<iostream>
using namespace std;
template<class T>
class sample
{
	private:
	    T x;
	public:
		void get()
		{
			cout<<"Enter x value:";
			cin>>x;
		}
		void show()
		{
			cout<<"X="<<x<<endl;
		}
};
int main()
{
	sample<int>s1;
	s1.get();
	s1.show();
	sample<char>s2;
	s2.get();
	s2.show();
	return 0;
}

