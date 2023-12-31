#include <iostream>

using namespace std;

//在类中定义的函数都是内联的。当对内联函数进行修改的时候都需要重新编译，否则仍会使用旧的函数。

inline int Max(int x, int y) {
	return x> y ? x : y;
}
int main() {
	cout << "Max(10, 20): " << Max(10, 20) << endl;
	return 0;
}
