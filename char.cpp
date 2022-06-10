
#include <iostream>	

using namespace std;

//char
/*int main() {
	char ch1 = 's';
	cout << "ch1=" << ch1 << endl;
	cout << "大小为" << sizeof(ch1) << endl;
	//char ch2 = "d";//不能用双引号；
	char ch3 ='abd';//只截取最后一个字符，前面的丢弃了
	cout << "ch3=" << ch3 << endl;
	cout << (int)ch1 << endl;//强转
	char ch4 = (char)97;
	cout << "ch4=" << ch4 << endl;
	system("pause");
	return 0;
}*/

//转义字符
/*int main() {
	cout << "hello,world\n";
	cout << "\\" << endl;
	cout << "abc\thello,world\n";
	int a = 6 / 2;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}*/

//c风格字符串
/*int main() {
	char str1[] = "abdefegleg";//与c语言一样;
	cout << str1 << endl;	
	system("pause");
	return 0;
}*/

//c++风格字符串
#include<string> //C++风格的字符串，需要包含这个头文件
int main() {	
	string str2 = "wonderful!";
	cout << str2 << endl;
	system("pause");
	return 0;
}