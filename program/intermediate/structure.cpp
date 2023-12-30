#include <iostream>

using namespace std;

/*构造函数：与类的名称完全相同，且不会返回任何类型，也会不void，构造函数可用于某些成员变量设置初始值
 */

class Line {
	public: 
		void setlength(double len);
		double getlength(void);
		Line(double len); //构造函数

	private:
		double length;
};

Line :: Line (double len) : length(len) {

	cout << "Object is being created, length = " << len << endl;
	// length = len;
}
double Line :: getlength(void) {
	return length;
}
void Line :: setlength(double len) {
	length = len;
}

int main() {
	Line line(10.0);
	//获取默认长度
	cout << "Length of line:" << line.getlength() << endl;
	//再次设置长度
	line.setlength(6.0);
	cout << "Length of line:" << line.getlength() << endl;
	return 0;
}
