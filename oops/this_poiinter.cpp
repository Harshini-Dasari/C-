#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length, breadth; 
	public:
		void input(int length, int breadth) {
			this->length = length; //using this pointer 
			this->breadth = breadth;
		}
		void area() {
			cout << "Area=" << length * breadth; 
		}
};
int main(){
	Rectangle r; 
	r.input(10,5); 
	r.area(); // calculate and display area
}

