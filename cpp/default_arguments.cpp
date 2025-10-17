#include <iostream>
using namespace std;
class Demo {
    string name;   // private data member to store a name
public:
     // Member function with default argument
    // If no value is provided, "Guest" will be used automatically
    void Name(string n="Hema")
	{ 
	name=n;
	}
    // Member function to display the name
    void show()
	{
	cout<<"Name="<<name<<endl;
	}
};
int main(){
    Demo d;
    d.Name();    // No argument passed ? default value "Hema" is used
    d.show();
}

