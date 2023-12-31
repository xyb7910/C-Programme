#include <iostream>

using namespace std;

/* 
 * 静态成员函数即使在类对象不存在的情况下也能被调用，静态成员函数只要使用类名 + 范围作用符::就可以访问了。
 静态成员函数只能访问静态成员数据，其他静态成员函数和类外部的其他函数。
 静态成员函数不呢个访问类的this指针。所以我们可以使用静态成员函数来判断类的某个对象是否被创建。*/

/*
 *静态成员函数与普通成员函数的区别：
 静态成员函数没有this指针，只能访问静态成员。
 普通成员函数有this指针，可以访问类中的任何成员。
 */

class Box {
	public: 
		static int objCount;

		Box(double l = 2.0, double w = 2.0, double h = 2.0) {
			cout << "Constructor called." << endl;
			length = l;
			width = w;
			height = h;
			
			objCount ++;
		}
		double Volume() {
			return length * width * height;
		}
		static int getCount() {
			return objCount;
		}
	private:
		double length;
		double width;
		double height;
};

int Box::objCount = 0;

int main() {
	cout << "Inital Stage Count: " << Box::getCount() << endl;

	Box box1(1, 1, 1);
	Box box2(2, 2, 2);
	Box box3(, , );
	
	cout << "Final Stage Count: " << Box::getCount() << endl;
	return 0;
}
