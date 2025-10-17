#include<iostream>
using namespace std;
class Square
{
	private:
		int s;
	public:
		Square()
		{
			
		}
		void show()
		{
			cout<<"enter s value:";
			cin>>s;
			cout<<s*s;
		}
};
int main()
{
	Square s;
	s.show();
	return 0;
}
