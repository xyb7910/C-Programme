#include <iostream>

using namespace std;

class Box {
	public:
		Box() {
			cout << "调用构造函数" << endl;
		}
		~Box() {
			cout << "调用析构函数" << endl;
		}
};

int main() {

	Box* myBoxArray = new Box[4];
	delete [] myBoxArray;

	double *pvalue = NULL;
	pvalue = new double;

	*pvalue = 19288.997;
	cout << "Value of pvalue: " << *pvalue << endl;

	delete pvalue;

	int **p;
	p = new int *[4];
	for (int i = 0; i < 4; i ++) {
		 p[i] = new int[8];
	 }
	for (int i = 0; i < 4; i ++) {
		for (int j = 0; j < 8; j ++) {
				p[i][j] = i * j;
		}
	}
	
	for (int i = 0; i < 4; i ++) {
		for (int j = 0; j < 8; j ++) {
			if(j == 0) cout << endl;
			cout << p[i][j] << "\t";
		}
	}
	
	for (int i = 0; i < 4; i ++) {
		delete [] p[i];
	}
	delete [] p;
	return 0;
}	
	
