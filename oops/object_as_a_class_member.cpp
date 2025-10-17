#include<iostream>
using namespace std;
// Class to store and display birth details
class Birth {
public:
    int dd, mm, yy;
    Birth() {
        dd = 0;
        mm = 0;
        yy = 0;
    }
    void show() {
        cout << "Enter day, month, year: ";
        cin >> dd >> mm >> yy;
        cout << "Date of Birth = " << dd << "-" << mm << "-" << yy << endl;
    }
};
 // Class to store and display student details
class Student {
public:
    string name;
    Birth dob;   
   



 char gender;
    void print() {
        cout << "Enter name and gender: ";
     cin >> name >> gender;
   cout << "Name = " << name << endl;
   cout << "Gender = " << gender << endl;
   dob.show();   // Call function to display date of birth
    }
};
 
int main() {
    Student s;   
    s.print();   
}

