#include<iostream>
using namespace std;
class student
{
	protected:
		string name; 
		int rno; 
		void getst() 
		{
			cout << "Enter Name, Rollno:"; 
			cin >> name >> rno;
		}
		void showst() 
		{
			cout << "Name:" << name << endl;
			cout << "Rollno:" << rno << endl;
		}
};
class marks: public student //single inheritance
{
	protected:
		int m1, m2, m3, m4, m5; 
		void getm() 
		{
			

   
                                 getst(); 
			cout << "Enter 5 subject marks:"; 
			cin >> m1 >> m2 >> m3 >> m4 >> m5;
		}
};
class sabl
{
	protected:
		int a1, a2; 
		void getsa() 
		{
			cout << "Enter 2 sabl activity marks:"; 
			cin >> a1 >> a2;
		}
};
class percentage: public marks, public sabl //multiple inheritance
{
	float per; 
	public:
		
         
          void showp() 
         {
			getm(); 
			getsa(); 
			per = (m1 + m2 + m3 + m4 + m5 + a1 + a2) / 7.0;
			showst(); //display student details
			cout << "percentage=" << per; 
         }
};
int main()
{
	percentage p; 
	p.showp(); 
	return 0; 
}

