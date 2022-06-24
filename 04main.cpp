#include <iostream>

using namespace std;

/*int b=60;
//int b;//c++无论是局部变量，还是全局变量，都不行。
int main(int argc, char *argv[])
{
    int a=60;
    //int a;
    cout << "a= "<<a << endl;
    cout << "b= "<<b << endl;
    return 0;
}*/

//对于函数参数没有类型的，c++是不行的。c语言是可以的。
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

//在c++中，不同类型的变量，一般是不能直接赋值的，需要相应的强转。
//c语言是可以的。
/*typedef enum COLOR{GREEN,RED,YELLOW} color;
int main( ){
    color mycolor=GREEN;
    mycolor=10;//整型赋值给了枚举型
    printf("mycolor:%d\n",mycolor);
    char*p = malloc(10 ); //void*赋值给了char*
    return EXIT_SUCCESS;
}*/

//结构体的加强
//c语言中，结构体只能定义成员变量，不能定义成员函数
//c++语言中，结构体既能定义成员变量，又能定义成员函数
/* struct stu{//此处的struct 必须加
    int id;
    char name[30];
    void func(void){//结构体中可以定义函数
        cout<<"ok"<<endl;
    }
};
int main( ){
    struct stu lucy={1592,"lucy"};//c++语言中，可以加struct
     stu ann={4256,"ann"};//c++语言中，也可以不加struct
    cout<<lucy.id<<endl;
    ann.func();//结构体中的函数可以调用
    return 0;
}*/

//c++有bool类型，bool,true,false都是关键字
/*int main( ){
    bool mybool=true;
    cout<<mybool<<endl;
    cout<<"sizeof bool:"<<sizeof(mybool)<<endl;
    cout<<"false="<<false<<endl;
    cout<<"true="<<true<<endl;
    return 0;
}*/

//三目运算符的增强
/*int main(){
    int a=10;
    int b=20;
   cout<<"C语言："<< (a>b?a:b )<<endl;//注意，要加小括号

    a>b?a:b=100;//此语句不会报错；a>b?a:b 返回的是变量本身(b)(引用)
    cout<<"b="<<b<<endl;
    return 0;
}*/
//可以放在赋值符号（=）左边的，叫左值，只能放在赋值符号（=）右边的，叫右值；
//有些变量，既可以当左值（Lvalue），又可以当右值（Rvalue）。
//左值有内存地址，可寻址操作；右值可能没有内存地址，只能读。如int i=10;

//const的增强：const的单词意思是常数，不变的。在c/c++中，它用来限定
//一个变量不允许改变，在c++中，他将一个对象转换成一个常量。

extern const int gnum;
extern const int gnum2;
//extern const int gnum=1000;//此处可以定义gnum。因为它与bianglang
//中的gunm不冲突，各自属于不同的范围。
int main( ){
    //cout<<"全局变量中的gnum="<<gnum<<endl;//err,不识别gnum；
    cout<<"全局变量中的gnum2="<<gnum2<<endl;
    const int num=100;
    //num=200;//const修饰后，这个变量不能改变，是只读变量
    //当对num取地址的时候，系统就会给num开辟空间
    int* p=(int*) &num;//const int*与int*不是一个类型，要强转
    *p=500;
     cout<<"num="<<num<<endl;//仍然是100，通过num时，是从符号
     //常量表来取
     cout<<"*p="<<*p<<endl;//*p 是500.
     return 0;
}
//1.c++中，对于基础类型，系统不会给num开辟空间（是否为它分配空间，依赖
//于如何使用，一般来说，如果一个const仅仅用来把一个名字用一个值来代替，
//像#define一样，那么该存储空间就不必创建），num被放到符号表中;
//此时，num可以看成常量。有点像#define num 10

//const 变量开辟内存空间的情况：
//1.取地址；
//2.当以变量的形式，初始化const修饰的变量，如：int b=300;
//   const int a =b;系统直接为a开辟空间，而不会把a放入符号表中
//3.const修饰的自定义数据类型，系统会开辟空间

//在c++中，尽量用const来代替宏
//const与define的区别：
//1.const有类型，可以进行编译器类型安全检查。#define无类型，不可进行
//  类型检查；
//2.const有作用域，而#define 不重视作用域。默认定义处到文件结尾。如果
//  定义在指定作用域下有效的常量，那么#define就不能用；

//
/*const short max1 =1024;
#define max2 500
void funcc(short i ){
    cout<<"short函数："<<i<<endl;
}
void funcc(int i ){
    cout<<"int函数："<<i<<endl;
}
int main(){
    funcc(max1);
    funcc(max2);//宏在预编译后，被500代替，编译时，500被视为int型；
    return 0;
}*/

//宏的作用域是从定义处到整个文件，const的作用域以定义的情况决定
/*void funcc1( ){
    const int num=60;//作用范围为当前复合语句；
#define NUM3 100//作用范围是从当前开始，到文件结束,除非用#undef取消
}
int main(){
   // cout<<"num="<<num<<endl;//此处超出了num的作用空间，不被识别
    cout<<"NUM3="<<NUM3<<endl;
    return 0;
}*/

//宏不能作为命名空间的成员
/*namespace A{
    const int a=50;
#define NUM4 80//此处的宏属于文件，不属于A；
}
int main(){
    cout<<"A="<<A::a<<endl;
    //cout<<"NUM4="<<A::NUM4<<endl;//ERR,不能这样访问
    cout<<"NUM4="<<NUM4<<endl;//可以这样访问
    return 0;
}*/
