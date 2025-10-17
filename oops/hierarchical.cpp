#include <iostream>
using namespace std;
// Parent class
class details {
protected:
    string name;
    int age;
public:
    void getdetails() {
        cout<<"Enter name and age: ";
        cin>>name>>age;
    }

    void showdetails() {
        cout<<"Name: " << name << endl;
        cout<<"Age: " << age << endl;
    }
};

// Derived class:student
class student : public details {
    string branch;
    float perc;

public:
    void getsd() {
        getdetails(); 
        cout<<"Enter branch: ";
        cin>>branch;
       cout << "Enter percentage: ";
        cin>>perc;
    }
void showsd() {
        cout<<"\nStudent Details:" <<endl;
        showdetails(); 
        cout<<"Branch: " << branch<<endl;
        cout<<"Percentage: "<<perc<<endl;
    }
};

//Derived class:Employee
class employee : public details{
   


 string designation;
    float salary;

public:
    void geted() {
      
  getdetails();
        cout<<"Enter designation: ";
         cin>>designation;
        cout<<"Enter salary: ";
        cin>>salary;
    
    }
void showed() {
        cout<<"\nEmployee Details"<<endl;
        showdetails(); 
        cout<<"Designation: " << designation << endl;
        cout<<"Salary: " << salary <<endl;
    }
};

int main() {
    student s;
    employee e;
    cout <<"Enter student information:" << endl;
    s.getsd();
    cout <<"\nEnter employee information:" << endl;
    e.geted();
    s.showsd();
    e.showed();
    return 0;
}



