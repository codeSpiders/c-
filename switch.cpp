#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//switch
int main() {
	int score = 0;	
	cout << "���������Ե�Ӱ�Ĵ��:\n";
	cin >> score;
	switch (score) {
	case 10:
	case 9:
		cout << "��Ӱ̫������!\n";
		break;
	case 8:
	case 7:
		cout << "��Ӱ�ܺÿ���\n";
		break;
	case 6:
	case 5:
		cout << "��Ӱ�� һ�㣡\n";
		break;
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		cout << "���Ǹ���Ƭ��\n";
		break;
	default:
		cout << "������ķ���������Ҫ��";
		break;
	}
	return 0;
}
//if��switch
//switch�ж����ֻ����һ�����ͻ��ַ��ͣ����������䣻�ṹ������ִ��Ч�ʸߣ�