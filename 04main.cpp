#include <iostream>

using namespace std;

/*int b=60;
//int b;//c++�����Ǿֲ�����������ȫ�ֱ����������С�
int main(int argc, char *argv[])
{
    int a=60;
    //int a;
    cout << "a= "<<a << endl;
    cout << "b= "<<b << endl;
    return 0;
}*/

//���ں�������û�����͵ģ�c++�ǲ��еġ�c�����ǿ��Եġ�
/*void fun1(i){
    printf("i=%d\n",i);
    return;
}
void fun2(i){
    printf("i=%s\n",i);
}
int main(int argc, char *argv[])
{
    fun1(600);
    fun2("no way");
    return 0;
}*/

//��c++�У���ͬ���͵ı�����һ���ǲ���ֱ�Ӹ�ֵ�ģ���Ҫ��Ӧ��ǿת��
//c�����ǿ��Եġ�
/*typedef enum COLOR{GREEN,RED,YELLOW} color;
int main( ){
    color mycolor=GREEN;
    mycolor=10;//���͸�ֵ����ö����
    printf("mycolor:%d\n",mycolor);
    char*p = malloc(10 ); //void*��ֵ����char*
    return EXIT_SUCCESS;
}*/

//�ṹ��ļ�ǿ
//c�����У��ṹ��ֻ�ܶ����Ա���������ܶ����Ա����
//c++�����У��ṹ����ܶ����Ա���������ܶ����Ա����
/* struct stu{//�˴���struct �����
    int id;
    char name[30];
    void func(void){//�ṹ���п��Զ��庯��
        cout<<"ok"<<endl;
    }
};
int main( ){
    struct stu lucy={1592,"lucy"};//c++�����У����Լ�struct
     stu ann={4256,"ann"};//c++�����У�Ҳ���Բ���struct
    cout<<lucy.id<<endl;
    ann.func();//�ṹ���еĺ������Ե���
    return 0;
}*/

//c++��bool���ͣ�bool,true,false���ǹؼ���
/*int main( ){
    bool mybool=true;
    cout<<mybool<<endl;
    cout<<"sizeof bool:"<<sizeof(mybool)<<endl;
    cout<<"false="<<false<<endl;
    cout<<"true="<<true<<endl;
    return 0;
}*/

//��Ŀ���������ǿ
/*int main(){
    int a=10;
    int b=20;
   cout<<"C���ԣ�"<< (a>b?a:b )<<endl;//ע�⣬Ҫ��С����

    a>b?a:b=100;//����䲻�ᱨ��a>b?a:b ���ص��Ǳ�������(b)(����)
    cout<<"b="<<b<<endl;
    return 0;
}*/
//���Է��ڸ�ֵ���ţ�=����ߵģ�����ֵ��ֻ�ܷ��ڸ�ֵ���ţ�=���ұߵģ�����ֵ��
//��Щ�������ȿ��Ե���ֵ��Lvalue�����ֿ��Ե���ֵ��Rvalue����
//��ֵ���ڴ��ַ����Ѱַ��������ֵ����û���ڴ��ַ��ֻ�ܶ�����int i=10;

//const����ǿ��const�ĵ�����˼�ǳ���������ġ���c/c++�У��������޶�
//һ������������ı䣬��c++�У�����һ������ת����һ��������

extern const int gnum;
extern const int gnum2;
//extern const int gnum=1000;//�˴����Զ���gnum����Ϊ����bianglang
//�е�gunm����ͻ���������ڲ�ͬ�ķ�Χ��
int main( ){
    //cout<<"ȫ�ֱ����е�gnum="<<gnum<<endl;//err,��ʶ��gnum��
    cout<<"ȫ�ֱ����е�gnum2="<<gnum2<<endl;
    const int num=100;
    //num=200;//const���κ�����������ܸı䣬��ֻ������
    //����numȡ��ַ��ʱ��ϵͳ�ͻ��num���ٿռ�
    int* p=(int*) &num;//const int*��int*����һ�����ͣ�Ҫǿת
    *p=500;
     cout<<"num="<<num<<endl;//��Ȼ��100��ͨ��numʱ���Ǵӷ���
     //��������ȡ
     cout<<"*p="<<*p<<endl;//*p ��500.
     return 0;
}
//1.c++�У����ڻ������ͣ�ϵͳ�����num���ٿռ䣨�Ƿ�Ϊ������ռ䣬����
//�����ʹ�ã�һ����˵�����һ��const����������һ��������һ��ֵ�����棬
//��#defineһ������ô�ô洢�ռ�Ͳ��ش�������num���ŵ����ű���;
//��ʱ��num���Կ��ɳ������е���#define num 10

//const ���������ڴ�ռ�������
//1.ȡ��ַ��
//2.���Ա�������ʽ����ʼ��const���εı������磺int b=300;
//   const int a =b;ϵͳֱ��Ϊa���ٿռ䣬�������a������ű���
//3.const���ε��Զ����������ͣ�ϵͳ�Ὺ�ٿռ�

//��c++�У�������const�������
//const��define������
//1.const�����ͣ����Խ��б��������Ͱ�ȫ��顣#define�����ͣ����ɽ���
//  ���ͼ�飻
//2.const�������򣬶�#define ������������Ĭ�϶��崦���ļ���β�����
//  ������ָ������������Ч�ĳ�������ô#define�Ͳ����ã�

//
/*const short max1 =1024;
#define max2 500
void funcc(short i ){
    cout<<"short������"<<i<<endl;
}
void funcc(int i ){
    cout<<"int������"<<i<<endl;
}
int main(){
    funcc(max1);
    funcc(max2);//����Ԥ����󣬱�500���棬����ʱ��500����Ϊint�ͣ�
    return 0;
}*/

//����������ǴӶ��崦�������ļ���const���������Զ�����������
/*void funcc1( ){
    const int num=60;//���÷�ΧΪ��ǰ������䣻
#define NUM3 100//���÷�Χ�Ǵӵ�ǰ��ʼ�����ļ�����,������#undefȡ��
}
int main(){
   // cout<<"num="<<num<<endl;//�˴�������num�����ÿռ䣬����ʶ��
    cout<<"NUM3="<<NUM3<<endl;
    return 0;
}*/

//�겻����Ϊ�����ռ�ĳ�Ա
/*namespace A{
    const int a=50;
#define NUM4 80//�˴��ĺ������ļ���������A��
}
int main(){
    cout<<"A="<<A::a<<endl;
    //cout<<"NUM4="<<A::NUM4<<endl;//ERR,������������
    cout<<"NUM4="<<NUM4<<endl;//������������
    return 0;
}*/
