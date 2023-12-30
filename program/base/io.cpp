#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	
	//标准输入输出流
	int a;
	cin >> a;
	cout << "The value of a is: " << a << endl;

	string str = "Hello, c++";
	std::cout << "Value of str is: " << str << endl;

	//标准错误流
	string error =  "Unable to read ...";

	cerr << "Error message: " << error << endl;

	//标准日志流
	clog << "Error message: " << error << endl;
	
	return 0;
}

