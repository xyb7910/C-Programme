#include <iostream>

using namespace std;

class Box {
	public:
		double height;
		double length;
		double width;

		//声明成员函数
		double get(void);

		void set(double len, double wid, double hei);
};

//定义成员函数
double Box::get(void) {
	return height * length * width;
}

void Box::set(double len, double wid, double hei) {
	length = len;
	width = wid;
	height = hei;
}

int main() {
	Box Box1;
	Box Box2;
	Box Box3;

	double volume = 0.0;
	// box 1 详述
    Box1.height = 5.0; 
    Box1.length = 6.0; 
    Box1.width = 7.0;
 
    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.width = 13.0;	
	
	volume = Box1.height * Box1.length * Box1.width;
	cout << "The volume of Box1 is: " << volume  << endl;
	volume = Box2.get();
	cout << "The volume of Box2 is: " << volume  << endl;
	
	Box3.set(1, 2, 4);
	volume = Box3.get();
	cout << "The volume of Box3 is: " << volume  << endl;

	return 0;
}

