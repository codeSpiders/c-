#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//bool��ֻռһ���ֽ�(byte)��С��ע�⣬����һbit;
//true,������1��
//false,������0��
int main() {
	cout << "bool������ռ�ռ��С"<<sizeof(true) << endl;//ֻռһ���ֽ�
	cout << "bool������ռ�ռ��С" << sizeof(bool) << endl;//ֻռһ���ֽ�
	int i = (int)true;
	cout << i << endl;//������1��
	int j = (int)false;
	cout << j << endl;//������0��
	bool flag = true;
	cout << flag << endl;
	bool flag2 = false;
	cout << flag2 << endl;
	bool flag3 = 2;
	cout << flag3 << endl;//��ֵΪ2����Ϊ�棬����棬��1��
	system("pause");
	return 0;
}
