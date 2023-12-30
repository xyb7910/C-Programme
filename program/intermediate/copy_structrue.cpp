#include <iostream>
using namespace std;

/*
 * 拷贝构造函数：使用同一类中之前创建的对象来初始化新创建的对象，正所谓“复制”。
 * 用处：
 *	1.通过使用另一个同类型的对象来初始化新创建的对象
 *	2.复制对象把它作为参数传递给函数
 *	3.复制对象，并从函数返回这个对象i
 *
 *类中没有定义拷贝函数，编译器会自带一个。如果类中带有指针变量，并且动态内存分配，则它必须有一个拷贝构造函数。
 形式如下：
 classname (const classname &obj) {
  // 构造函数主体
 }
 */
class Line {
	public: 
		int getlength(void);
		Line(int len);
		Line(const Line &obj);
		~Line();
	
	private:
		int *ptr;
};
Line :: Line(int len) {
	cout << "调用构造函数" << endl;
	ptr = new int;
	*ptr = len;
}
Line ::  Line(const Line &obj) {
	cout << "调用拷贝构造函数并为指针 ptr 分配内存	" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}
Line :: ~Line(void) {
	cout << "释放内存" << endl;
	delete ptr;
}
int Line :: getlength(void) {
	return *ptr;
}
void display(Line obj) {
	cout << "Line 大小:" << obj.getlength() << endl;
}

int main() {
	Line line1(10);
	Line line2 = line1;


	display(line1);
	display(line2);

	return 0;
}
