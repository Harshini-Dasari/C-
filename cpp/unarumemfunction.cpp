#include<iostream>
using namespace std;
class complex {
    int real, imag;
public:
    void get() {
        cout << "Enter real, imag values: ";
        cin >> real >> imag;
    }
    // overload + operator to add two complex numbers
    void operator+(complex c2) {
        cout << real + c2.real << "+" << imag + c2.imag << "i";
    }
};
int main() {
    complex c1, c2;
    c1.get(); 
    c2.get(); 
    c1 + c2;   // calls overloaded + operator
    return 0;
}
