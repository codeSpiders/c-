#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//bool，只占一个字节(byte)大小，注意，不是一bit;
//true,本质是1；
//false,本质是0；
int main() {
	cout << "bool类型所占空间大小"<<sizeof(true) << endl;//只占一个字节
	cout << "bool类型所占空间大小" << sizeof(bool) << endl;//只占一个字节
	int i = (int)true;
	cout << i << endl;//本质是1；
	int j = (int)false;
	cout << j << endl;//本质是0；
	bool flag = true;
	cout << flag << endl;
	bool flag2 = false;
	cout << flag2 << endl;
	bool flag3 = 2;
	cout << flag3 << endl;//赋值为2，即为真，输出真，即1。
	system("pause");
	return 0;
}
