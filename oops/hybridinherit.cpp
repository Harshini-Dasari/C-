#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int rollno;
			void getst()
			{
				cout<<"Enter name,rollno:";
				cin>>name>>rollno;
			}
			void showst()
			{
				cout<<"Name="<<name<<endl;
				cout<<"Rollno="<<rollno<<endl;
			}
};
class marks:public student
{
	protected:
		int m1,m2,m3;
		void getm()
		{
			getst();
			cout<<"Enter 3 sybject marks:";
			cin>>m1>>m2>>m3;
		}		
};
class sabl
{
    public:
	int a1,a2,a3;
	void getsa()
	{
		cout<<"Enter 3 activity marks:";
		cin>>a1>>a2>>a3;
		}	
};
class percentage:public marks,public sabl
{
	public:
		int perm,pers;
		void per()
		{
			getm();
			perm=(m1+m2+m3)/3;
			getsa();
			pers=(a1+a2+a3)/3;
			showst();
			cout<<"Percentage for marks="<<perm<<endl;
			cout<<"Percentage for sabl="<<pers<<endl;
		}
};
int main()
{
	percentage p;
	p.per();
}
