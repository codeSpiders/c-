#include <iostream>
//cͷ�ļ���C++������ʱ��ǰ���c������ȥ��.h,
//�磺string.h�ĳ�cstring��Ҳ����ֱ��д��:string.h;
#include<string.h>//�ɷ��
#include<cstring>//�·��
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello ���!" << endl;
    char buf[50]={0};
    strcpy(buf,"wonderful!");
    cout<<buf<<endl;//endl�����в�ˢ�»�����
    return 0;
}
//c���������﷨���ԣ���Щ������Ժ��ԣ�
//c++������ǿ�﷨���ԣ��ܶ���c�����еľ��棬��C++��ֱ�ӱ���
