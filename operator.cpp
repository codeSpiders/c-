#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*int main() {
	int a = 10;
	int b = 13;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;//整数相除，结果仍为整数（舍去小数部分）
	cout << a % b << endl;	//两个小数不能做取模计算
	double c = 0.5;
	double d = 0.25;
	double f = c / d;//仍为double类型
	cout << c / d << endl;
	cout << f << endl;
	cout << sizeof(f) << endl;
	system("pause");
	return 0;
}*/

//++,--
int main() {
	int a = 8;
	a++;
	cout << "a=" << a << endl;
	int b = 8;
	++b;
	cout << "b=" << b << endl;
	int c = 8;
	int d=c++*8;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	int e = 8;
	int f = ++e * 8;
	cout << "e=" << e << endl;
	cout << "f=" << f << endl;
	return 0;
}