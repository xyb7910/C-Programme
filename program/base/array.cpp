#include <iostream>
#include <iomanip>

using namespace std;

//函数返回值为一数组
int* create_array(int size) {
	int* array = new int [size];
	for (int i = 0; i < size; i ++) {
		array[i] = i + 1;
	}
	return array;
}

int main() {
	/*
	int n[10];

	for (int i = 0; i < 10; i ++) {
		n[i] = i + 100;
	}
	cout << "Element" << setw(13) << "Value" << endl;

	for (int j = 0; j < 10; j ++) {
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
	*/


    /*
	int a[5] = {1, 2, 3, 4, 5};
	int *p;

	p = a;
	cout << "使用指针的数组值" << endl;

	for (int i = 0; i < 5; i ++) {
		cout << "*(p + " << i << "):";
		cout << *(p + i) << endl;
	}

	cout << "使用a作为地址的数组值"<< endl;
	for (int i = 0; i < 5; i ++) {
		cout << "*(a + " << i << "):" << endl;
		cout << *(a + i) << endl;
	}
	*/
	int *my_array = create_array(5);

	for (int i = 0; i < 5; i ++) {
		cout << my_array[i] << endl;
	}
	cout << endl;
	delete[] my_array;
	return 0;
}

