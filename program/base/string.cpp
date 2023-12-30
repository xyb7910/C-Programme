#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	/*
	char str1[20] = "beautiful";
	char str2[20] = "girls";
	char str3[20];
	int len;

	strcpy(str3, str1);
	cout << "strcpy(str3, str1):" << str3 << endl;

	strcat(str1, str2);
	cout << "strcat(str1, str2):" << str1 << endl;

	len = strlen(str1);
	cout << "strlen(str1)" << len << endl;
	*/

	string str1 = "beautiful";
	string str2 = "girls";
	string str3;
	int len;

	str3 = str1;
	cout << "str3: " << str3 << endl;

	str3 = str1 + str2;
	cout << "str1 + str2: " << str3 << endl;

	len = str3.size();
	cout << "str3.size()" << len << endl;
	
	return 0;
}
