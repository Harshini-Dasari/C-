#include<iostream>
using namespace std;
// Base class A
class A {
public:
    void show() {
        cout << "show() of class A" << endl;
    }
};
// Base class B
class B {
public:
    void show() {
        cout << "show() of class B" << endl;
    }
};
// Derived class C inherits from both A and B
class C : public A, public B {
public:
    void showC() {
        cout << "showC() of class C" << endl;
    }
};
int main() {
    C c;          // Create object of derived class C
    c.showC();    // Call function from derived class C
    c.A::show();  // Call show() from class A
    c.B::show();  // Call show() from class B
}

