#include <iostream>

using namespace std;

//析构函数：在每次删除所创建的对象时执行，析构函数有助于跳出程序前释放资源。

class Line {
	public:
		void setlength(double len);
		double getlength(void);
		Line();
		~Line();

	private:
		double length;
};

Line :: Line(void) {
	cout << "Object is being created" << endl;
};
Line :: ~ Line(void) {
	cout << "Object is being deleted" << endl;
}
void Line :: setlength(double len) {
	length = len;
}
double Line :: getlength(void) {
	return length;
}
int main() {
	Line line;

	line.setlength(6.0);
	cout << "length of line: " << line.getlength() << endl;
	
	return 0;
}

