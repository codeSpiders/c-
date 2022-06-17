#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//! && ||
//!
/*int main() {
	int a = 10;
	int b = 0;
	cout << !a << endl;
	cout << !!a << endl;
	cout << !b << endl;
	return 0;
}*/

// &&
/*int main() {
	int a = 3;
	int b = 4;
	int c = 0;
	cout << (a && b) << endl;//¼ÓÀ¨ºÅ
	cout << (a && c) << endl;//¼ÓÀ¨ºÅ
	return 0;
}*/

//||
int main() {
	int a = 0;
	int b = 4;
	int c = 0;
	cout << (a || b) << endl;//¼ÓÀ¨ºÅ
	cout << (a || c) << endl;//¼ÓÀ¨ºÅ
	cout << (b || c) << endl;//¼ÓÀ¨ºÅ
	return 0;
}

