#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>	
using namespace std;
#include<string>

int main() {
	bool flag = 2;
	cout << flag << endl;
	int a = 0;
	cout << "������һ������\n";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "������һ���ַ���\n";
	string str1="";
	cin >> str1;
	cout << "str1=" << str1 << endl;	
	bool flag2 = false;
	cout << "�����벼��������\n";//�������ֵ��С��1�ķ������֣�������1��true��
	cin >> flag2;   //����-0.6������0.6���򷵻�0
	cout << "flag2=" << flag2 << endl;
	system("pause");
	return 0;
}