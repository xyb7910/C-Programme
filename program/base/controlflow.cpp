#include <iostream>

using namespace std;

int main() {
	char grade = 'D';

	switch(grade)
	{
		case 'A':
			cout << "很棒" << endl;
			break;
		case 'B':
		case 'C':
			cout << "做得好" << endl;
			break;
		case 'D':
			cout << "你通过了" << endl;
			break;
		default :
			cout << "成绩无效" << endl;
	}
	cout << "你的成绩是:" << grade << endl;
	return 0;
}
