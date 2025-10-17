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
// Derived class:employee
class employee : public details {
protected:
    string designation;
public:
    void geted() {
        getdetails();
        cout<<"Enter designation: ";
        cin>>designation;
    }

void showed() {
        showdetails();
      
cout<<"Designation: " << designation << endl;
    }
};
class professor:public employee {  // Derived class:professor(multilevel) 
    float salary;
public:
    void getpdetails() {
        geted();
        cout<<"Enter salary: ";
        cin>>salary;
    }
void showpdetails() {
        cout<<"\nProfessor Details:"<<endl;
        showed();
        cout<<"Salary: "<< salary<<endl;
    }
};
int main() {
    professor p;
    cout<<"Enter professor information:" << endl;
    p.getpdetails();
    p.showpdetails();
    return 0;
}

