#include <iostream>

using namespace std;

static int count = 10;

void fun(void) {
	static int i = 5;
	i ++;
	std::cout << "The value of i is " << i << std::endl;
	std::cout << "The value of count is " << count << std::endl;
}

int main() {
	while(count --) {
		fun();
	}
	return 0;
}

		
