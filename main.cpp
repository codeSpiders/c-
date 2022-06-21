#include <iostream>
//c头文件在C++中运用时，前面加c，后面去掉.h,
//如：string.h改成cstring。也可以直接写出:string.h;
#include<string.h>//旧风格
#include<cstring>//新风格
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello 你好!" << endl;
    char buf[50]={0};
    strcpy(buf,"wonderful!");
    cout<<buf<<endl;//endl，换行并刷新缓存区
    return 0;
}
//c语言是弱语法语言，有些警告可以忽略；
//c++语言是强语法语言，很多在c语言中的警告，在C++中直接报错。
