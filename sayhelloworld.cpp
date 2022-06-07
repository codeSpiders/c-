#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*int main() {
	cout << "hello world!"<<endl;
	int a = 34;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}*/

//c++定义常量的二种方法：
//1.#define 宏常量
#define MAX 30
/*int main() {
	cout << "这个月有" << MAX << "天。" << endl;
	//MAX=45;//会报错，MAX不能修改
	system("pause");
	return 0;
}*/

//2.const修饰的变量
int main() {
	const int day = 7;
	//day = 10;//修改会报错。不能修改
	cout << "每个星期有" << day << "天" << endl;
	system("pause");
	return 0;
}

//关键字：
/* asm do if return typedef auto double inline short typeid
	bool dynamic_cast int signed typename break else long sizeof
	union case enum mutable static unsigned catch explicit namespace
	static_cast using char export new struct virtual class extern operator
	switch void const false private template volatile const_cast float
	protected this wchar_t continue for public throw while default friend
	register true delete goto reinterpret_cast try
*/



