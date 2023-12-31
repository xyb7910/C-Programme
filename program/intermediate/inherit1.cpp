#include <iostream>

using namespace std;

//基类 Shape
class Shape {
	public:
		void setWidth(int w) {
			width = w;
		}
		void setHeight(int h) {
			height = h;
		}
	protected:
		int width;
		int height;
};

//基类 PaintCost
class PaintCost {
	public:
		int getCost(int area) {
			return area * 70;
		}
};

//基类可以访问所有的非私有成员
//派生类不能继承基类：
//	基类的构造函数，析构函数和拷贝构造函数
//	基类的重载运算符
//	基类的友元函数
class Rectangle: public Shape,  public PaintCost {
	public:
		int getArea() {
			return (width * height);
		}
};

int main() {
	Rectangle rect;
	rect.setWidth(5);
	rect.setHeight(7);

	int area = rect.getArea();
	cout << "Total area: " << rect.getArea() << endl;
	cout << "Total paint cost: $ " << rect.getCost(area) << endl;
	return 0;
}

