#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*int main() {
	int a = 10;
	int b = 13;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;//��������������Ϊ��������ȥС�����֣�
	cout << a % b << endl;	//����С��������ȡģ����
	double c = 0.5;
	double d = 0.25;
	double f = c / d;//��Ϊdouble����
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