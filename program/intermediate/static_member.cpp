#include <iostream>

using namespace std;

class Box {
	public:
		static int objectCount;

		Box(double l = 2.0, double w = 2.0, double h = 2.0) {
			cout << "Constructor called." << endl;
			length = l;
			width = w;
			height = h;
		objectCount ++;
		}
	double Volume() {
	return length * width * height;
	}
	private:
		double length;
		double width;
		double height;
};	
//静态成员的初始化不能放在类的定义中，但可以在类的外部通过使用作用范围解析运算符::来重新声明静态变量并且实现初始化
int Box::objectCount = 0;

int main() {
	Box box1(2, 2, 2);
	Box box2(3, 3, 3);

	cout << "Total objects: " << Box::objectCount << endl;
	return 0;
}
