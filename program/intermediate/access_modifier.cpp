#include <iostream>

using namespace std;

// public 共有成员在程序中类的外部是可以访问的

class Line {
	public:
		double length;
		void setlength(double len);
		double getlength(void);
};

double Line::getlength(void) {
	return length;
}

void Line::setlength(double len) {
	length = len;
}

//private 私有成员或者是函数在类的外部是不可以访问的，只有类和友元函数可以访问私有成员
// 成员和类的默认修饰符是private
// 习惯约定：私有区域定义数据，公有区域定义相关函数，在类的外部也可以定义这些函数。

class Box {
	//定义成员函数
	public:
		void setwidth(double wid);
		void setlength(double len);
		double getwidth(void);
		double getlength(void);
		double getarea(void);
	
	//定义属性	
	private:
		double length;
		double width;
};


void Box::setwidth(double wid) { width = wid; }
void Box::setlength(double len) { length = len; }
double Box::getwidth() { return width; }
double Box::getlength() { return length; }
double Box::getarea() { return length * width; }

//protected 受保护与私有成员很相似，但protected可以在派生类中访问
class Box1 {
	protected:
		double width;
};

class Smallbox:Box1 {
	public:
		void setsmallwidth(double wid);
		double getsmallwidth(void);
};
double Smallbox::getsmallwidth(void) {
	return width;
}
void Smallbox::setsmallwidth(double wid) {
	width = wid;
}

int main() {
	Line line;

	line.setlength(6.0);
	cout << "The length of line is: " << line.getlength() << endl;

	line.length = 10.0;
	cout << "The length of line is: " << line.getlength() << endl;
	
	Box box;
	box.setlength(1.0);
	box.setwidth(2.0);
	cout << "The area of box is : " << box.getarea() << endl;
	
	Smallbox sbox;
	sbox.setsmallwidth(1.0);
	cout << "The width of sbox is : " << sbox.getsmallwidth() << endl;
	return 0;
}
