#include <iostream>

using namespace std;

//������ʵ������һ�������ڴ�ռ�ı�������һ�����(���ƺ�)��������ͨ��
//���������벢�����ڴ�ռ䡣ͨ�����������ֿ���ʹ�ô洢�ռ䡣�ļ���Ҳһ��
//���ã�reference�����Ǹ����еı������ռ䣩ȡһ��������

/*int main(int argc, char *argv[])
{
    int num=20;
    int &a=num;//�˴���&����ȡ��ַ�������Ǳ���a�����ñ�����a��num
    //�ı�������ϵͳ����Ϊa����ռ䣬a����Ŀռ����num�Ŀռ䣻a��ȫ
    //�ȼ���num��
    //���ñ����ʼ��������ʼ������֪��������˭��һ����ʼ�����Ͳ����޸�
    int data1=50;
    a=data1;//����data1�ı���Ϊa,���ǽ�data1��ֵ��ֵ��a(num)��
    int* p1=&num;//�˴���&��ȡ��ַ��
    cout << "a=" <<a<< endl;
    cout << "num=" <<num<< endl;//ֵ��ȫһ��
    cout << "a�ĵ�ַ��" <<&a<< endl;
    cout << "num�ĵ�ַ��" <<&num<< endl;//��ַҲ��ȫһ��
    return 0;
}*/
//�������ã�������ָ�룻

//��������������
//��ʽһ��
/*int main(int argc, char *argv[]){
    int arr[5]={10,20,30,40,50};//�˴�[]�е�5�����У�������
    int (&myarr)[5]=arr;//��arrȡ��������Ϊ[]���㼶��ߣ������
    //�����ţ�myarr���Ⱥ�[]��ϡ�[]�е�5����ʡ�ԣ�
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
//��ʽ����
/*int main(int argc, char *argv[]){
    int arr[5]={10,20,30,40,50};
   typedef int INT_ARR[5];//typedef������������
    //INT_ARR��һ���������ͣ����Զ���������磻
    INT_ARR arr1={1,2,3,4,5};//�������
    INT_ARR &arr2=arr;//��������
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


//�����ں����е�Ӧ��,������Ϊ�����Ĳ���
/*swap1(int x,int y){//ֵ����
    int tmp=x;
    x=y;
    y=tmp;
}
swap2(int* x,int* y){//��ַ����
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
swap3(int& x,int& y){//����
    int tmp=x;
    x=y;
    y=tmp;
}
int main(int argc, char *argv[])
{
    int a=10;
    int b=20;
    swap1(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//ֵ���ݣ�û�н����ɹ�
    swap2(&a,&b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//��ַ���ݣ������ɹ�
    swap3(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;//���ã������ɹ�
    return 0;
}*/

//�����ں����е�Ӧ��,������Ϊ�����ķ���ֵ
/*int& func1(void){
    int num1=20;
    return num1;//�����ķ���ֵ�����õ�ʱ�򣬲�Ҫ���ؾֲ�����
    //���򣬵�������������󣬾��ͷ������Ŀռ䣬�����������е�
    //���û��������ѱ��ͷŵĿռ䣬��ͷǷ������ˣ��ǳ�Σ�ա�
}
int& func2(void){
    static int num=30;
    return num;
}
int main(int argc, char *argv[])
{
    //int& a=0;//err�����ñ����ڶ���ʱ�ͳ�ʼ��,��ָ����˭�ı�����
   //int& a=func1();//err.a��num1�ı�������num1�ѱ��ͷ���
   // cout<<"a="<<a<<endl;
    int& b=func2();//b��func2������num�ı���
        cout<<"b="<<b<<endl;//���С�
    return 0;
}*/

//�������ķ���ֵ��Ϊ��ֵ����ô�����ķ���ֵ���ͱ��������ã�
//�������ֵ���Ͳ������ã���ô�������ص���һ��ֵ�����ǲ�����Ϊ��ֵ�ġ�
/*int& func3(void){
    static int num=20;
    cout<<"num="<<num<<endl;//cout��ʵ���Ƿ���ֵ�����õġ�
    return num;
}
int main(int argc, char *argv[])
{
    func3()=2000;//func3()����num�ı��������ԣ����︳ֵ�͸���num��
    func3();
    return 0;
}*/

//���õı��ʣ���c++�ڲ�ʵ����һ��ָ�볣����Type& ref=val;
//Type*const ref=&val;
//c++�������ڱ�������У�ʹ�ó�ָ����Ϊ���õ��ڲ�ʵ�֣���ˣ�������ռ��
//�Ŀռ��С��ָ����ͬ��ֻ����������Ǳ������ڲ�ʵ�֣��û����ɼ���
 /*int data=10;
   int &a=data;//a��data�ı�����
    �������ڲ�ת����int * const a= &data;//aֻ��ָ��data������ָ��
    ���������ˡ�
    a=100;
    �������ڲ�ת����*a=100��//*a�ȼ���num��
*/

//ָ������
#include <string.h>
/*void my_str1(char** p){//c���
    *p=(char *)calloc(1,32);
    strcpy(*p,"hello world");
}
void my_str2(char* &p){//���÷��,����ʱ��*&���ܵ�������Ϊ����ͬ����˼.
    //����ʱ���Ե�����
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

//�����ã�const �������á�const���ε����ã������޸�;
//�����ʽ��const type& ref=val;
//ע�⣺���������ܸ������ã����ǿ��Ը��� const ����
/*typedef struct {
    int num;
    char name[32];
}STU;
void pfun1(STU tmp){//��ͨ�ṹ�����βΣ�����̫��
    cout<<sizeof(tmp)<<endl;
    cout<<"������"<<tmp.name<<" ѧ�ţ�"<<tmp.num<<endl;
}
void pfun2(const STU& tmp){

    cout<<sizeof(tmp)<<endl;//tmpû�����¿��ٿռ䣬tmp�ռ����mary�ռ�
  // tmp.num=100;//����const���εĻ������Ը���mary�е�ֵ
    cout<<"������"<<tmp.name<<" ѧ�ţ�"<<tmp.num<<endl;
}
int main(int argc, char *argv[])
{
    STU mary={34,"sharlotte"};
    pfun1(mary);
    pfun2(mary);
   // pfun1({34,"sharlotte"});//err.
    return 0;
}*/

//���������ã�
/*int main(int argc, char *argv[])
{
    //������10ȡ������
    //int& num=10;//err��10��const int ���ͣ���Ϊ���Ǹ�ֻ���ĳ���
    //int& ��Ե���int ���͡�
    const int& num=10;
    cout<<"num="<<num<<endl;
    return 0;
}*/
