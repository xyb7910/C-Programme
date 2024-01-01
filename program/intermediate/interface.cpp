#include <iostream>

using namespace std;

class Shape {
	public: 
		virtual int getArea() = 0;
		void setwidth(int w) {
			width = w;
		}
		void setheight(int h) {
			height = h;
		}
	protected:
		int width;
		int height;
};

class Rectangle : public Shape {
	public:
		int getArea() {
			return (width * height);
		}
};

class Triangle : public Shape {
	public:
		int getArea() {
			return (width * height) / 2;
		}
};

int main() {
	Rectangle rect;
	Triangle tri;

	rect.setwidth(5);
	rect.setheight(10);

	cout << "Total Rectangle area: " << rect.getArea() << endl;

	tri.setwidth(5);
	tri.setheight(10);

	cout << "Total Triangle area: " << tri.getArea() << endl;
	return 0;
}
