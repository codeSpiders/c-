#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>	
using namespace std;
#include<string>

int main() {
	bool flag = 2;
	cout << flag << endl;
	int a = 0;
	cout << "请输入一个整数\n";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "请输入一个字符串\n";
	string str1="";
	cin >> str1;
	cout << "str1=" << str1 << endl;	
	bool flag2 = false;
	cout << "请输入布尔型数据\n";//输入绝对值不小于1的非零数字，均返回1（true）
	cin >> flag2;   //输入-0.6，或者0.6，则返回0
	cout << "flag2=" << flag2 << endl;
	system("pause");
	return 0;
}