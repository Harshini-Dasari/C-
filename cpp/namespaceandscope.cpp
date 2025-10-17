#include<iostream>
using namespace std;
int num =10;         // Global variable
namespace Example {          // Namespace declaration
    int num =20;
}
int main() {
    int num = 50;           // Local variable inside main()
    cout << "Local num: " << num << endl;
    cout << "Global num: " << ::num << endl; 
    cout << "Namespace num: " << Example::num<<endl;      
    return 0;
}

