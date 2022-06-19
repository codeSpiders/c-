#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//switch
int main() {
	int score = 0;	
	cout << "请输入您对电影的打分:\n";
	cin >> score;
	switch (score) {
	case 10:
	case 9:
		cout << "电影太经典了!\n";
		break;
	case 8:
	case 7:
		cout << "电影很好看！\n";
		break;
	case 6:
	case 5:
		cout << "电影很 一般！\n";
		break;
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		cout << "这是个烂片！\n";
		break;
	default:
		cout << "您输入的分数不符合要求。";
		break;
	}
	return 0;
}
//if与switch
//switch判断语句只能是一个整型或字符型，不能是区间；结构清晰，执行效率高；