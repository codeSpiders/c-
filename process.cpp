#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//if 
/*int main() {
	int score = 0;
	cout << "���������ķ���\n";
	cin >> score;
	cout << "������ķ����ǣ�" << score << endl;
	if (score >= 650)
		cout << "��ϲ������������һ����ѧ\n";		
	return 0;
}*/

// if else
/*int main() {
	int score = 0;
	cout << "���������ķ���\n";
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score >= 650)
		cout << "��ϲ������������һ����ѧ\n";
	else
		cout << "���м���Ŭ��Ŷ!\n";
	cout << "�������\n";
	return 0;
}*/

//if   else if   else if  ------- else
/*int main() {
	int score = 0;
	cout << "���������ķ���:\n";
	cin >> score;
	cout << "������ķ����ǣ�" << score << endl;
	if (score >= 650)
		cout << "��ϲ������������һ����ѧ\n";
	else if(score>=550)
		cout << "��ϲ�����������˶�����ѧ\n";
	else if(score>=450)
		cout << "��ϲ������������������ѧ\n";
	else 
		cout << "���м���Ŭ��Ŷ!\n";
	    cout << "�������\n";//���������ˣ�����Ȼ�������ϣ���python��ͬ
	return 0;
}*/

//Ƕ��if���
/*int main() {
	int score = 0;
	cout << "���������ķ���:\n";
	cin >> score;
	cout << "������ķ����ǣ�" << score << endl;
	if (score >= 650) {
		cout << "��ϲ������������һ����ѧ\n";
		if (score >= 750) {
			cout << "������ѧ��ӭ��\n";
		}
		else if(score>=700)
			cout << "�廪��ѧ��ӭ��\n";
		else
			cout << "�����ѧ��ӭ��\n";
	}		
	else if (score >= 550)
		cout << "��ϲ�����������˶�����ѧ\n";
	else if (score >= 450)
		cout << "��ϲ������������������ѧ\n";
	else
		cout << "���м���Ŭ��Ŷ!\n";
	cout << "�������\n";
	return 0;
}*/

//����С�������
/*int main() {
	int a, b, c;
	cout << "��������ֻС�������\n";
	cin >> a >> b >> c;
	cout << a <<"\t"<< b << "\t" << c << "\t" << endl;
	if (a >= b) {
		if (a >= c)
			cout << "��һֻС�����أ��أ�" << a << "kg\n";
		else
			cout << "����ֻС�����أ��أ�" << c << "kg\n";
	}
	else {
		if(b >= c)
			cout << "�ڶ�ֻС�����أ��أ�" << b << "kg\n";
		else
			cout << "����ֻС�����أ��أ�" << c << "kg\n";
	}
	return 0;
}*/

//��Ŀ�����
int main() {
	int a = 50;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	(a > b ? a : b )= 100;//ע������Ҫ������,��������a��bֵ�����
	cout << "c=" << c << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}