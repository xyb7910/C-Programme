#include <iostream>

using namespace std;
/*
 * 继承关系有三种：public， private， protected
 * public继承： 基类public -> 派生类public
 *				基类protected -> 派生类protected
 *				基类private -> 派生类private
 *
 * protected继承：基类public -> 派生类protected
 *				  基类protected -> 派生类protected
 *				  基类private -> 派生类private
 *
 * private继承：基类public -> 派生类private
 *				基类protect -> 派生类private
 *				基类private -> 派生类private
 *无论哪种继承，以下两原则不变：
 * 1.private成员只能被本类成员（类内）和友元访问，不能被派生类访问；
 * 2.protected成员可以被派生类访问
 */

//public继承
class A {
	public: 
		int a;
		A(){
			a1 = 1;
			a2 = 2;
			a3 = 3;
			a = 4;
		}
		void fun() {
		   cout << a << endl;
		   cout << a1 << endl;
		   cout << a2 << endl;
		   cout << a3 << endl;
		}
	public:
		int a1;
	protected:
		int a2;
	private:
		int a3;
};

class B : public A {
	public:
		int a;
		B(int i ) {
			A();
			a = i;
		}
		void fun() {
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			cout << a3 << endl;
		}
};

int main() {
	B b(10);
	cout << b.a << endl;
	cout << b.a1 << endl;
	cout << b.a2 << endl;
	cout << b.a3 << endl;
	return 0;
}




