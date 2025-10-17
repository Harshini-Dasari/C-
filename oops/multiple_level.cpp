#include <iostream>
using namespace std;
//base class 1
class studentdetails { 
protected:
    int rollno;
    string name;

    void getst() {
        cout << "Enter name and roll number: ";
        cin >> name >> rollno;
    }

    void showst() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
    }
};
//base class 2
class marks {
protected:
    int m1, m2, m3, m4, m5;

    void getm() {
        cout << "Enter marks for 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void showm() {
        float total = m1 + m2 + m3 + m4 + m5;
        cout << "Total marks: " << total << endl;
   
    }
};
//derived class
class student : public studentdetails, public marks {
public:
     void getdetails() { 
       getst();  //base class 1 member function
        getm();  //base class 2 member function
    }
	
    


void showdetails() {
        showst(); 
        showm();  
    }
};

int main() {
    student s;
    s.getdetails();
    cout << "Student Details:\n";
    s.showdetails();
    return 0;
}

