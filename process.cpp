#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//if 
/*int main() {
	int score = 0;
	cout << "请输入您的分数\n";
	cin >> score;
	cout << "您输入的分数是：" << score << endl;
	if (score >= 650)
		cout << "恭喜您，您考上了一本大学\n";		
	return 0;
}*/

// if else
/*int main() {
	int score = 0;
	cout << "请输入您的分数\n";
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score >= 650)
		cout << "恭喜您，您考上了一本大学\n";
	else
		cout << "还有继续努力哦!\n";
	cout << "程序结束\n";
	return 0;
}*/

//if   else if   else if  ------- else
/*int main() {
	int score = 0;
	cout << "请输入您的分数:\n";
	cin >> score;
	cout << "您输入的分数是：" << score << endl;
	if (score >= 650)
		cout << "恭喜您！您考上了一本大学\n";
	else if(score>=550)
		cout << "恭喜您！您考上了二本大学\n";
	else if(score>=450)
		cout << "恭喜您！您考上了三本大学\n";
	else 
		cout << "还有继续努力哦!\n";
	    cout << "程序结束\n";//尽管缩进了，但仍然在主干上，与python不同
	return 0;
}*/

//嵌套if语句
/*int main() {
	int score = 0;
	cout << "请输入您的分数:\n";
	cin >> score;
	cout << "您输入的分数是：" << score << endl;
	if (score >= 650) {
		cout << "恭喜您！您考上了一本大学\n";
		if (score >= 750) {
			cout << "北京大学欢迎您\n";
		}
		else if(score>=700)
			cout << "清华大学欢迎您\n";
		else
			cout << "人民大学欢迎您\n";
	}		
	else if (score >= 550)
		cout << "恭喜您！您考上了二本大学\n";
	else if (score >= 450)
		cout << "恭喜您！您考上了三本大学\n";
	else
		cout << "还有继续努力哦!\n";
	cout << "程序结束\n";
	return 0;
}*/

//三个小猪比体重
/*int main() {
	int a, b, c;
	cout << "请输入三只小猪的体重\n";
	cin >> a >> b >> c;
	cout << a <<"\t"<< b << "\t" << c << "\t" << endl;
	if (a >= b) {
		if (a >= c)
			cout << "第一只小猪最重，重：" << a << "kg\n";
		else
			cout << "第三只小猪最重，重：" << c << "kg\n";
	}
	else {
		if(b >= c)
			cout << "第二只小猪最重，重：" << b << "kg\n";
		else
			cout << "第三只小猪最重，重：" << c << "kg\n";
	}
	return 0;
}*/

//三目运算符
int main() {
	int a = 50;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	(a > b ? a : b )= 100;//注意这里要加括号,不加括号a，b值不会变
	cout << "c=" << c << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}