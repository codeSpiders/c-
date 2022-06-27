#include <iostream>

using namespace std;

//函数的默认（缺省）参数
//c++在声明函数原型的时候，可为一个或多个参数指定默认（缺省）的参数值，
//当函数调用的时候如果没有传参，编译器会自动用默认值代替。
/*int add(int x=10,int y=20){
    return x+y;
}
int main(int argc, char *argv[])
{
    cout << add(300,400) << endl;//700
    cout << add( ) << endl;//10+20=30
    cout << add(100 ) << endl;//100+20=120
   // cout << add(,100 ) << endl;
    return 0;
}*/
//注意：
//1.函数的默认参数从左向右，如果一个参数设置了默认参数，那么这个参数
//  之后的参数都必须设置默认参数；
//2.如果函数声明和函数定义分开写，函数声明和函数定义不能同时设置默认
//  参数。建议函数声明处设置默认参数；
//  分文件的时候，默认参数只在声明处起作用。

//int add1(int x,int y=20,int z){//err
//    return x+y+z;
//}

extern int add2(int,int y=23,int z=64);
extern int add3(int,int y,int z);
/*int main(int argc, char *argv[])
{
    cout << add2(100) << endl;//187,声明处默认参数起作用
    cout << add2(100,200 ) << endl;//364,声明处默认参数起作用
    //cout << add3(100 ) << endl;//err，声明处没有默认参数
    return 0;
}*/

//同一个文件，定义和声明只能一处设置默认参数
/*int add4(int x=10 ,int y=20 ){
    return x+y;
}
int add4(int x,int y);//同一个文件，定义和声明只能一处设置默认参数
int main(int argc, char *argv[])
{
    cout << add4(300,400) << endl;
    cout << add4( ) << endl;
    cout << add4(100 ) << endl;
    return 0;
}*/

//函数的占位参数
//c++在声明函数的时候，可以设置占位参数，占位参数只有参数类型声明，而没有
//参数名声明。一般情况下，由于没有形参名，在函数体内部无法使用占位参数；
//而由于有类型名，函数调用时，必须给其传参,而且参数类型必须一致。
/*void prt(int x,int y,int){
    cout<<"x="<<x<<" y="<<y<<endl;
}
int main(int argc, char *argv[])
{
    prt(20,30,40);
    //prt(20,30);//err
    return 0;
}*/

//函数的重载（overload） c++的多态特性
//能使名字方便使用。同一个函数名在不同场景下可以具有不同的含义。
//c语言中，函数名必须是唯一的，程序中不允许出现同名的函数。
//c++中，允许出现同名的函数。函数重载的目的是为了方便使用函数名。
//实现函数重载的条件：同一作业域，参数个数不同，参数类型不同，参数顺序不同

//注意：返回值类型不能作为函数重载的依据。
//一个函数为void func(int x);另一个为int func(int x);当我们直接
//调用func（10）时，可以是调用第一个函数，也可以是调用第二个函数（不接
//它的返回值）。所以，编译器就不能确定调用哪个函数了。所以，返回值类型
//不能作为函数重载的依据。

//注意：函数重载和默认参数一起使用，需要额外注意二义性问题的产生。
/*void prt1(int x){
    cout<<"int函数的调用"<<endl;
}
void prt1(int x,int y=10){
    cout<<"int,int函数的调用"<<endl;
}
int main(int argc, char *argv[])
{
   // prt1(20);//err，ambiguous
    prt1(20,30);
    return 0;
}*/

//函数重载实现原理: 编译器用不同的参数类型（注意，不是形参名）来修饰
//函数名。如：void func (int x),编译器可能会将函数名改为funcint。
//linux中，void func(){}函数名改为_Z4funcv;
//       void func(int x){}函数名改为_Z4funci;
//  void func(int x,char y){}函数名改为_Z4funcic;

//c++和c混合编程：芯片厂一般提供c库,c++调用c库
//由于c编译器和c++编译器对函数名的处理方式不一样，所以，当混合编程时；
//
/*#include"func.h"
int main(int argc, char *argv[])
{
    cout<<addc(100,200)<<endl;
    cout<<subc(100,200)<<endl;
    return 0;
}*/

//ubuntu:
//main.cpp,func.c,func.h
//混合编译步骤：
//1.gcc -c func.c -o func.o  生成func.o文件
//2.g++ main.cpp fun.o -o main  生成main文件





