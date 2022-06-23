#include <iostream>
//使用标准的命名空间std。std中的所以成员名，都可以直接使用。
//如：cout,endl;

using namespace std;

//using使用命名空间

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    std::cout << "Hello World!" << std::endl;
    return 0;
}
