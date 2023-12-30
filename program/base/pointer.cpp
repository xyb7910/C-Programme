#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 5;

double getAverage(int *arr, int size);

int main() {
	/*
	int var1;
	char var2[10];

	cout << "var1 变量的地址为: " << &var1 << endl;
	
	cout << "bar2 变量的地址为: " << &var2 << endl;

	int var = 20;
	int *ip;

	ip = &var;
	cout << "The value of var is" << var << endl;
	cout << "Address stored in ip varible: " << ip << endl;

	cout << "Value of *ip varible: " << *ip << endl;	
	*/
	
	/*
	int var[MAX] = {1, 2, 3, 4, 5};
	int  *ptr;

	ptr = var;
	for (int i = 0; i < MAX; i ++) {
		cout <<"Address of var["<< i << "] = " << ptr << endl;
		cout <<"Value of var["<< i << "] = " << *ptr << endl;

		ptr ++;
	}
	*/
	
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(balance, 5);


	cout << "Averge value is: " << avg << endl;
	return 0;
}

double getAverage(int *arr, int size) {
	double average;
	int sum = 0;
	for (int i = 0; i < size; i ++) {
		sum += arr[i];
	}
	average = (double)sum / size;

	return average;
}

