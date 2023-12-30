#include <iostream>
using namespace std;

int max(int num1, int num2) {
	int result;

	if(num1 < num2)
		result = num2;
	else 
		result = num1;

	return result;
}


//使用异或的性质：一个数与自己异或等于0，0与一个数异或不改变该数字
//4: 100 5:101 temp：100 ^ 101 = 001 a: 001 ^ 100 = 101 b: 001 ^ 101 = 100
void new_swap(int &a, int &b) {
	int temp;
	temp = a ^ b;
	a = temp ^ a;
	b = temp ^ b;
}

	

//传值调用:函数内的代码不会改变用于调用调用函数的实际参数
//虽然在函数内部改变了a 和 b 的值，但是实际上 a 和 b 的值没有发生任何变化
void swap(int x, int y) {
	
	int temp;

	temp = x;
	x = y;
	y = temp;
}

//指针调用：把参数的地址复制给形式参数，意味着修改形式参数会影响实际参数
void swap1(int *x, int  *y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

//引用传递：把引用的地址复制给形式参数，意味着修改形式参数会影响实际参数的值
void swap2(int &x, int y) {
	int  temp;

	temp = x;
	x = y;
	y = temp;
}


int main() {
	int x = 100;
	int b = 200;
	int ret;

	//ret = max(a, b);

	//cout << "Max value is: " << ret << endl;
	
	//cout << "交换前 a 和 b 的值为： " << a << "," << b << endl;

	//传值调用
	//swap(a, b);
	
	//指针调用
	//swap1(&a, &b);

	//引用调用
	//swap2(a, b);
	//cout << "交换后 a 和 b 的值为： " << a << "," << b << endl;
	

	cout << "OK" << endl;
	
	return 0;
}
