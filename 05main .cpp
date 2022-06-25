#include <iostream>

using namespace std;

//变量名实质上是一段连续内存空间的别名，是一个标号(门牌号)。程序中通过
//变量来申请并命名内存空间。通过变量的名字可以使用存储空间。文件名也一样
//引用（reference）就是给已有的变量（空间）取一个别名；

/*int main(int argc, char *argv[])
{
    int num=20;
    int &a=num;//此处，&不是取地址符。而是标明a是引用变量（a是num
    //的别名）。系统不会为a分配空间，a代表的空间就是num的空间；a完全
    //等价于num。
    //引用必须初始化。不初始化，不知道它操作谁。一旦初始化，就不能修改
    int data1=50;
    a=data1;//不是data1的别名为a,而是将data1的值赋值给a(num)。
    int* p1=&num;//此处，&是取地址符
    cout << "a=" <<a<< endl;
    cout << "num=" <<num<< endl;//值完全一样
    cout << "a的地址：" <<&a<< endl;
    cout << "num的地址：" <<&num<< endl;//地址也完全一样
    return 0;
}*/
//能用引用，绝不用指针；

//引用作用于数组
//方式一：
/*int main(int argc, char *argv[]){
    int arr[5]={10,20,30,40,50};//此处[]中的5可以有，可以无
    int (&myarr)[5]=arr;//给arr取别名。因为[]运算级别高，如果不
    //加括号，myarr会先和[]结合。[]中的5不能省略；
    int i=0;
    for(i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<myarr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}*/
//方式二：
/*int main(int argc, char *argv[]){
    int arr[5]={10,20,30,40,50};
   typedef int INT_ARR[5];//typedef定义数据类型
    //INT_ARR是一个数据类型，可以定义变量。如；
    INT_ARR arr1={1,2,3,4,5};//定义变量
    INT_ARR &arr2=arr;//定义引用
    int i=0;
    for(i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<arr1[i]<<"  ";
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<arr2[i]<<"  ";
    }
    cout<<endl;
    return 0;
}*/


//引用在函数中的应用,引用作为函数的参数
/*swap1(int x,int y){//值传递
    int tmp=x;
    x=y;
    y=tmp;
}
swap2(int* x,int* y){//地址传递
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
swap3(int& x,int& y){//引用
    int tmp=x;
    x=y;
    y=tmp;
}
int main(int argc, char *argv[])
{
    int a=10;
    int b=20;
    swap1(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//值传递，没有交换成功
    swap2(&a,&b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//地址传递，交换成功
    swap3(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//引用，交换成功
    return 0;
}*/

//引用在函数中的应用,引用作为函数的返回值
/*int& func1(void){
    int num1=20;
    return num1;//函数的返回值是引用的时候，不要返回局部变量
    //否则，当函数被调用完后，就释放了它的空间，而主调函数中的
    //引用还代表着已被释放的空间，这就非法访问了，非常危险。
}
int& func2(void){
    static int num=30;
    return num;
}
int main(int argc, char *argv[])
{
    //int& a=0;//err。引用必须在定义时就初始化,即指定是谁的别名；
   //int& a=func1();//err.a是num1的别名，但num1已被释放了
   // cout<<"a="<<a<<endl;
    int& b=func2();//b是func2函数中num的别名
        cout<<"b="<<b<<endl;//可行。
    return 0;
}*/

//当函数的返回值作为左值，那么函数的返回值类型必须是引用；
//如果返回值类型不是引用，那么函数返回的是一个值，这是不能作为左值的。
/*int& func3(void){
    static int num=20;
    cout<<"num="<<num<<endl;//cout其实就是返回值是引用的。
    return num;
}
int main(int argc, char *argv[])
{
    func3()=2000;//func3()就是num的别名，所以，这里赋值就给了num。
    func3();
    return 0;
}*/

//引用的本质，在c++内部实现是一个指针常量。Type& ref=val;
//Type*const ref=&val;
//c++编译器在编译过程中，使用常指针作为引用的内部实现，因此，引用所占用
//的空间大小与指针相同，只是这个过程是编译器内部实现，用户不可见。
 /*int data=10;
   int &a=data;//a是data的别名。
    编译器内部转换：int * const a= &data;//a只能指向data，不能指向
    其他变量了。
    a=100;
    编译器内部转换：*a=100；//*a等价于num。
*/

//指针引用
#include <string.h>
/*void my_str1(char** p){//c风格
    *p=(char *)calloc(1,32);
    strcpy(*p,"hello world");
}
void my_str2(char* &p){//引用风格,定义时，*&不能抵消，因为代表不同的意思.
    //运算时可以抵消？
    p=(char *)calloc(1,32);
    strcpy(p,"hello world");
}
int main(int argc, char *argv[])
{
    char* str=NULL;
    my_str1(&str);
    cout<<"str="<<str<<endl;
    free(str);

    char* str1=NULL;
    my_str2(str1);
    cout<<"str1="<<str1<<endl;
    free(str1);
    return 0;
}*/

//常引用：const 修饰引用。const修饰的引用，不能修改;
//定义格式：const type& ref=val;
//注意：字面量不能赋给引用，但是可以赋给 const 引用
/*typedef struct {
    int num;
    char name[32];
}STU;
void pfun1(STU tmp){//普通结构体做形参，开销太大
    cout<<sizeof(tmp)<<endl;
    cout<<"姓名："<<tmp.name<<" 学号："<<tmp.num<<endl;
}
void pfun2(const STU& tmp){

    cout<<sizeof(tmp)<<endl;//tmp没有重新开辟空间，tmp空间就是mary空间
  // tmp.num=100;//不加const修饰的话，可以更改mary中的值
    cout<<"姓名："<<tmp.name<<" 学号："<<tmp.num<<endl;
}
int main(int argc, char *argv[])
{
    STU mary={34,"sharlotte"};
    pfun1(mary);
    pfun2(mary);
   // pfun1({34,"sharlotte"});//err.
    return 0;
}*/

//常量的引用：
/*int main(int argc, char *argv[])
{
    //给常量10取个别名
    //int& num=10;//err。10是const int 类型，因为它是个只读的常量
    //int& 针对的是int 类型。
    const int& num=10;
    cout<<"num="<<num<<endl;
    return 0;
}*/
