#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	private:
	    T1 x;
		T2 y;
	public:
		void get()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
		}
};
int main()
{
	sample<int,float>s1;
	cout<<"Enter integer,float values:";
	s1.get();
	s1.show();
	sample<char,int>s2;
	cout<<"Enter character,int values:";
	s2.get();
	s2.show();
	return 0;
}
