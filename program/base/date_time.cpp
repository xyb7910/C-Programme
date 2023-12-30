#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main() {
	// 相关类型：clock_t, time_t, size_t 和 tm
	// clock_t, time_t, size_t 把系统时间和日期表示为某种整数
	// tm为一结构类型
	
	// 基于当前系统的时间
	time_t now = time(0);
	cout << "1970 到目前经过的秒数：" << now << endl;

	tm *ltm = localtime(&now);

	cout << "年：" << 1900 + ltm -> tm_year << endl;
	cout << "月：" << 1 + ltm -> tm_mon << endl;
	cout << "日：" << ltm -> tm_mday << endl;
	cout << "时间：" << ltm -> tm_hour << " : " << ltm -> tm_min << " : " << ltm -> tm_sec << endl;

	char* dt = ctime(&now);
	cout << "本地日期和时间为：" << dt << endl;

	//把 now 转换为 tm 结构
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC 时期和时间: " << dt << endl;
	return 0;
}
