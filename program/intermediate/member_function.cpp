#include <iostream>

using namespace std;


//成语函数在类内定义时和普通函数的定义类似
//成语函数在类外部定义的时候必须使用范围解析符::定义该函数
class Box {
	public:
		double length;
		double width;
		double height;

		double getVolume(void);
		void setlength(double lenm);
		void setwidth(double wid);
		void setheight(double hei);
};

double Box::getVolume(void) {
	return length * width * height;
}

void Box::setlength(double len) {
	length = len;
}
void Box::setwidth(double wid) {
	width = wid;
}
void Box::setheight(double hei) {
	height = hei;
}

int main() {
	Box Box1;
	Box Box2;
	Box Box3;
	double volume = 0.0;

	Box1.setlength(6.0);
	Box1.setwidth(1.0);
	Box1.setheight(2.0);

	volume = Box1.getVolume();
	cout << "The volume of Box1 is: " << volume << endl;
	return 0;
}

	
