#include <iostream>

using namespace std;

/*int a=25;//全局变量；
void test1(){
    int a =509;//局部变量。可以同名，尽量避免同名
    cout<<"a= "<<a<<endl;//就近原则，优先选用局部变量
    //::作用域运算符,表达数据,方法归属性问题。
    //c语言没有，c++独有。c可以采用地址来达到此效果
    cout<<"a=  "<<::a<<endl;//全局变量
}
int main(int argc, char *argv[])
{
    test1();
    return 0;
}*/

//命名空间
/*namespace A{
    int a=30;
}
namespace B{
    int a=40;
}
//命名空间只能在全局范围内定义
void test( ){
    //a=3;//错误，a未定义
    cout<<"a= "<<A::a<<endl;//前面加命名空间
    cout<<"a= "<<B::a<<endl;
}

int main(  ){
    test( );
    return 0;
}*/

//命名空间可以嵌套命名空间
/*namespace C{
    int a=50;
    namespace D{
        int a=60;
    }
}
void test3( ){
    cout<<"a= "<<C::a<<endl;
    cout<<"a= "<<C::D::a<<endl;
}
int main(  ){
    test3( );
    return 0;
}*/

//命名空间是开放的，随时可以加入新的成员
/*namespace E{
    int a=300;
    int b=400;
    void fun( ){
        cout<<"hello  "<<endl;
    }
}
namespace E{
    int c=500;
}
void test4( ){
    cout<<"a= "<<E::a<<endl;
    cout<<"c= "<<E::c   <<endl;
    E::fun( );
}
int main(  ){
    test4( );
    return 0;
}*/

//命名空间可以加入函数.
//变量和函数可以放到结构体里、类里、命名空间里等。
/*namespace F{
    int a=300;//全局变量，不赋初值时，默认为0；
    int b=400;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;//这里的a可以不加F::
    }
}
void test5( ){
    cout<<"a= "<<F::a<<endl;
    F::fun( );
}
int main(  ){
    test5( );
    return 0;
}*/

//命名空间的函数，可以在命名空间外定义,但必须在命名空间内声明
/*int a=600;
namespace G{
    int a=300;
    int b=400;
    void fun();
}
void G::fun( ){//此处函数名前必须加G::
    cout<<"fun方法取a="<<a<<endl;//这里的a可以不加G::
}
void test6( ){
    cout<<"a= "<<G::a<<endl;
    G::fun( );
}
int main(  ){
    test6( );
    return 0;
}*/

//无名的命名空间:意味着命名空间的标识符只能在本文件内访问，相当于给这些
//标识符加上了static，使得其可以作为内部连接。尽量少定义无名的命名空间。
/*namespace{
    int a=9000;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;
    }
}
void test7( ){
    cout<<"a= "<<a<<endl;//无名的命名空间，那a前面也不需要写所属命名空间
    fun( );//无名的命名空间，那fun前面也不需要写所属命名空间
}
int main(  ){
    test7( );
    return 0;
}*/

//命名空间别名:并不是c语言那样用#define。
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;
    }
}
void test8( ){
    namespace shortname=verylongname;//"="可能重载了
    cout<<"a= "<<verylongname::a<<endl;
    cout<<"a= "<<shortname::a<<endl;
    verylongname::fun( );
    shortname::fun( );//别名和已有的名字一样可以用
}
int main(  ){
    test8( );
    return 0;
}*/

//using的使用
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;
    }
}
void test9( ){
   using namespace verylongname;//使用了这个后，可以省略verylongname::
    cout<<"a= "<<verylongname::a<<endl;
    cout<<"a= "<<a<<endl;//出现的变量，先从命名空间找，
    //再到其他空间找，找不到才报错
    verylongname::fun( );
    fun( );
}
int main(  ){
    test9( );
    cout<<"a= "<<verylongname::a<<endl;
   // cout<<"a= "<<a<<endl;//定义在test9中的namespace对此不起作用
    verylongname::fun( );
    //fun( );
    return 0;
}*/

//using使用的代价：容易导致冲突
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;
    }
}
void test10( ){
    int a=700;
   using namespace verylongname;
    cout<<"a= "<<a<<endl;//就近原则，取到了700
    cout<<"a= "<<verylongname::a<<endl;//冲突后，只能使用原来的方法
    fun( );
    using  verylongname::fun ;//比较少用
    fun( );
}
int main(  ){
    test10( );
    return 0;
}*/

//using使用的代价：容易导致冲突。全局变量前默认加上::
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun方法取a="<<a<<endl;
    }
}
void test10( ){
   // cout<<"a= "<<a<<endl;//此处a未定义
   using  verylongname::a;//using后不能加namespace,加了会报错
     cout<<"a= "<<a<<endl;
    //fun( );//成员fun不行，需把verylongname::加上
    verylongname::fun();
}
int main(  ){
    test10( );
    return 0;
}*/

//using声明遇到重载函数
/*namespace H{
    void func(  ){  cout<<"func无参方法\n"; }
    void func(int x){cout<<"func一个参数方法\n";}
    void func(int x,int y){cout<<"func两个参数方法\n";}
    //c语言不支持重载，c语言这样写，会报错。c语言中，函数名代表着
    //函数的入口地址
    //c++中，函数名和参数组合，才代表函数的入口地址。c++编译器中，会将
    //函数名转换成：func_void,func_int,func_int_int。
}
void test11( ){
    using  H::func;//对所以的func都起作用
   //using namespace H;//  也可以这样写
   func( );
    func(1);
    func(1,2);

}
int main(  ){
    test11( );
    return 0;
}*/

//using 使用时，多个命名空间的冲突
/*namespace G{
    int a=30;
}
namespace H{
    int a=70;
}
void test12( ){
    using  namespace G;
    using  namespace H;
   //cout<<"a=  "<<a<<endl;//a在两个命名空间中都能找到，程序不知道
    //使用哪个，所以报错。解决方案，在a前面加上作用空间。
    cout<<"a=  "<<H::a<<endl;
}
int main(  ){
    test12( );
    return 0;
}*/

