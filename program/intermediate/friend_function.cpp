#include <iostream>

using namespace std;

/*
 * 友元函数定义在类的外部，但有权访问类的所有私有成员和保护成员，友元函数并不是类的成员函数。
 */
class Box {
	public:
		friend class BigBox;
		friend void printwidth(Box box);
		void setwidth(double wid);

	double width;
};

class BigBox {
	public: 
		void Print(int wid, Box box) {
			box.setwidth(wid);
			cout << "The width of box is: " << box.width << endl;
		}
};

void Box :: setwidth(double wid) {
	width = wid;
}
//友元函数的实现与普通函数一样
void printwidth(Box box) {
	cout << "The width of box is: " << box.width << endl;
}

int main() {
	Box box;
	BigBox big;

	box.setwidth(10.0);
	printwidth(box);

	big.Print(20, box);

	return 0;
}

