#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
//sizeof
/*int main() {
	short num1 = 20;
	cout << "�ռ��СΪ��" << sizeof(num1) << endl;
	cout << "�ռ��СΪ��" << sizeof(short) << endl;
	int num2 = 40;
	cout << "�ռ��СΪ��" << sizeof(num2) << endl;
	cout << "�ռ��СΪ��" << sizeof(int) << endl;
	 long num3 = 80;
	cout << "�ռ��СΪ��" << sizeof(num3) << endl;
	cout << "�ռ��СΪ��" << sizeof(long) << endl;
	long long num4 = 20;
	cout << "�ռ��СΪ��" << sizeof(num4) << endl;
	cout << "�ռ��СΪ��" << sizeof(long long) << endl;
	system("pause");
	return 0;
}*/

//float ��double
int main() {
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;
	cout << "�ռ��С" << sizeof(f1) << endl;
	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;
	cout << "�ռ��С" << sizeof(d1) << endl;
	float f2 = 3e2f;
	cout << "f2=" << f2 << endl;
	float f3= -3e-2;
	cout << "f3=" << f3 << endl;
	system("pause");
	return 0;
}

