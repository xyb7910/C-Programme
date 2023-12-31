#include <iostream>
using namespace std;

/* 重载声明是指一个与之前已经在该作用域内声明过的函数或者方法具有相同名称的声明，但他们的参数列表和定义不同。
 * 重载决策是指编译器根据所使用的参数类型与定义中的参数类型进行比较，决定选用哪个最为合适的定义。选择最为合适的重载函数或者重载运算符的过程。
 */
class PrintData {
	public:
		void print(int i) {
			cout << "整数为: " << i << endl;
		}
		void print(double f) {
			cout << "浮点数为：" << f << endl;
		}
		void print(char c[]) {
			cout << "字符串为: " << c << endl;
		}
};

class Box {
	public:
		double getVolume() {
			return length * width * height;
		}
		void setlength(double len) {
			length = len;
		}
		void setwidth(double wid) {
			width = wid;
		}
		void setheight(double hei) {
			height = hei;
		}

		Box operator+(const Box& b) {
			Box box;
			box.length = this -> length + b.length;
			box.width = this -> width + b.width;
			box.height = this -> height + b.height;
			return box;
		}
	private:
		double length;
		double width;
		double height;
};

int main() {
	PrintData pd;

	pd.print(5);

	pd.print(6.0);

	char c[] = "Hello, World!";
	pd.print(c);

	Box Box1;
	Box Box2;
	Box Box3;
	double volume = 0.0;

	Box1.setlength(6.0);
	Box1.setwidth(5.0);
	Box1.setheight(1.0);

	Box2.setlength(4.0);
	Box2.setwidth(5.0);
	Box2.setheight(9.0);

	volume = Box1.getVolume();
	cout << "Volume of Box1 is: " << volume << endl;

	volume = Box2.getVolume();
	cout << "Volume of Box2 is: " << volume << endl;

	Box3 = Box1 + Box2;
	volume = Box3.getVolume();
	cout << "Volume of Box3 is: " << volume << endl;
	return 0;
}
