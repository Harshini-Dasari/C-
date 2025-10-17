#include <iostream>
#include <string>
using namespace std;
// Base class A
class A {
protected:
    int n;
    void get() {
        n = 3; 
    }
};
// Derived class B inherits from A
class B : public A {
public:
    void cube() {
        get();  
        cout << "Volume of cube = " << n * n * n;
    }
};
int main() {
    B  b;      
    b.cube(); 
}

