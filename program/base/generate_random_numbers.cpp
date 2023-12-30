#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int i, j;

	//设置种子
	srand( (unsigned) time (NULL) );

	// 生成 10 个随机数字
	
	for ( int i = 0; i < 10; i ++ ) {
		//生成谁记得随机数
		j = rand();
		cout << "随机数：" << j << endl;
	}
	return 0;
}
