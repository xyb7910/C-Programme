#include <iostream>
using namespace std;

namespace first_space {
	void func() {
		cout << "Inside first_space" << endl;
	}
};

namespace second_space {
	void func() {
		cout << "Inside second_space" << endl;
	}
	namespace third_space {
		void func() {
			cout << "Inside third_space" << endl;
		}
	}
};

using namespace second_space :: third_space;

int main() {
	
	func();

	func();

	return 0;
}
