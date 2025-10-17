#include <iostream>
using namespace std;
// Base class
class ClassA {
public:
    void showA() {
        cout << "show of ClassA" << endl;
    }
};

// ClassB inherits virtually
class ClassB : virtual public ClassA {
public:
    void showB() {
        cout << "show of ClassB" << endl;
    }
};

// ClassC inherits virtually
class ClassC : virtual public ClassA {
public:
    void showC() {
        cout << "show of ClassC" << endl;
    }
};

// ClassD inherits from ClassB and ClassC
class ClassD : public ClassB, public ClassC {
public:
    void showD() {
        cout << "show of ClassD" << endl;
    }
};

int main() {
    ClassD obj;
    obj.showD();
    obj.showB();
    obj.showC();
    obj.showA();
return 0;
}


