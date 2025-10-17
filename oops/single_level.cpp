#include <iostream>
using namespace std;
class person
{
	  protected:
		string name;
		int age;
		//parent class member function
		void getparent() 
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
		}
};
class student : public person
{
	private:
		int pin,branch;
	public:
		//child class member function
		void getchild()  
		{
			//accessing parent member function in child 
			getparent(); 
			cout<<"enter pin :";
			cin>>pin;
			cout<<"enter branch:";
			cin>>branch;
		}
	void display()
	{
		cout<<"Name="<<name<<endl;
		cout<<"Age="<<age<<endl;
		cout<<"Branch="<<branch<<endl;
		cout<<"pinno="<<pin<<endl;
	}
	
};
int main()
{
	student s;
s.getchild();
s.display();
}

