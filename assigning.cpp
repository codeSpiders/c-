#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>	

using namespace std;

int main() {
	int a = 12;
	cout << "a=" << a << endl;
	a = 33;
	cout << "a=" << a << endl;

	int b = 30;
	b += 4;
	cout << "b=" << b << endl;

	int c = 30;
	c -= 4;
	cout << "c=" << c << endl;

	int d = 30;
	d *= 4;
	cout << "d=" << d << endl;

	int e = 30;
	e /= 2;
	cout << "e=" << e << endl;

	int f = 30;
	f %= 4;
	cout << "f=" << f << endl;

	return 0;
}