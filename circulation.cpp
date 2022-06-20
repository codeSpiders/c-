#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctime>

//while
/*int main() {
	int num = 0;
	while (num < 10) {
		cout << "num=" << num << endl;
		num++;
	}
	return 0;
}*/

//猜数字游戏
/*int main() {
	int num = 0;
	srand((unsigned int) time(NULL));
	num = rand()%100 +1;
	int input = 0;
	cout << "请猜0-100之间的数字\n";
	cin >> input;
	while (input != num) {
		if (input > num)
			cout << "您猜的数字大了，请重猜。\n";
		else
			cout<< "您猜的数字小了，请重猜。\n";
		cout << "请猜0-100之间的数字\n";
		cin >> input;
	}
	cout << "恭喜您，您猜对了\n";
	return 0;
}*/

//do while
/*int main() {
	int num = 0;
	do {
		cout << "num=" << num << endl;
		num++;
	} while (num < 10);
	return 0;
}*/

//水仙花数
/*int main() {
	int num = 100;
	do {
		int a = num % 10;
		int b = (num / 10) % 10;
		int c = num / 100;
		if (a*a*a+b*b*b+c*c*c==num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	return 0;
}*/

//for
int main() {
	int i = 0;
	for (i = 0; i < 10; i++)
		cout << "i=" << i << endl;
	return 0;
}
