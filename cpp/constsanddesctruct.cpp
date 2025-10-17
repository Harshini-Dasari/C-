 #include <iostream>
using namespace std;
class Demo {
private:
    string name;
public:
    // Constructor: automatically called when object is created
    Demo(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }
    // Destructor: automatically called when object goes out of scope
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }};
int main() {
    // Object creation ? constructor is called
    Demo obj1("Hema");
    Demo obj2("Harshini");
    cout << "Inside main function" << endl;
   // At the end of main(), destructors are called automatically
    return 0;
}

