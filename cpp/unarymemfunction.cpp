#include<iostream>
using namespace std;
class increment {
    int x, y, z;
public:
    void get() {
        x = 5;
        y = 10;
        z = -30;
    }
    void show() {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z;
    }
    // overload prefix ++ operator
    void operator++() {
        ++x;
        ++y;
        ++z;
    }
};
int main() {
    increment i;
    i.get();    // set initial values
    ++i;        // increment all values using overloaded ++
    i.show();   // display updated values
    return 0;
}

