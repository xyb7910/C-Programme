#include <iostream>

using namespace std;

class MyClass {
	public:
		static int class_var;
};

int MyClass::class_var = 30;

int main() {
	int a = 10;
	{
		int a = 20;
		std::cout << "This value of block1: " << a << std::endl;
	}
	std::cout << "This value of block2: " << a << std::endl;   


	std::cout << "class's value is " << MyClass::class_var << std::endl;

	return 0;
}
