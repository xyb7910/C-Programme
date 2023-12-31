#include <iostream>

using namespace std;


/* C++中，this指针是一个特殊的指针，用来指向当前对象的实例。
 * C++中，每个对象都能通过this指针来访问自己的地址。
 * 可以在类的成员函数中使用，也可以用来指向调用对象。
 * ！！！友元函数没有this指针，因为不是类的成员，只有成员函数才有this指针。
 */

class MyClass {
	private:
		int value;
	public:
		void setValue(int value) {
			this -> value = value;
		}
		void printValue() {
			cout << " Value: " << this -> value << endl;
		}
};

class Box {
	private:
		double length;
		double width;
		double height;

	public:
		Box (double l = 2.0, double w = 2.0, double h = 2.0) {
			cout << "调用构造函数" << endl;
			length = l;
			width = w;
			height = h;
		}
		double Volume() {
			return length * width * height;
		}
		int compare(Box box) {
			return this -> Volume() > box.Volume();
		}	
};	

int main() {
	MyClass obj;
	obj.setValue(42);
	obj.printValue();

	Box box1(1, 1, 1);
	Box box2(2, 2, 2);
	if(box1.compare(box2)) {
			cout << "box1's volume > box2's volume" << endl;
		} else {
			cout << "box1's volume < or = box2's volume" << endl;
		}
	return 0;
}

