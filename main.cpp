#include <iostream>

using namespace std;

/*int a=25;//ȫ�ֱ�����
void test1(){
    int a =509;//�ֲ�����������ͬ������������ͬ��
    cout<<"a= "<<a<<endl;//�ͽ�ԭ������ѡ�þֲ�����
    //::�����������,�������,�������������⡣
    //c����û�У�c++���С�c���Բ��õ�ַ���ﵽ��Ч��
    cout<<"a=  "<<::a<<endl;//ȫ�ֱ���
}
int main(int argc, char *argv[])
{
    test1();
    return 0;
}*/

//�����ռ�
/*namespace A{
    int a=30;
}
namespace B{
    int a=40;
}
//�����ռ�ֻ����ȫ�ַ�Χ�ڶ���
void test( ){
    //a=3;//����aδ����
    cout<<"a= "<<A::a<<endl;//ǰ��������ռ�
    cout<<"a= "<<B::a<<endl;
}

int main(  ){
    test( );
    return 0;
}*/

//�����ռ����Ƕ�������ռ�
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

//�����ռ��ǿ��ŵģ���ʱ���Լ����µĳ�Ա
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

//�����ռ���Լ��뺯��.
//�����ͺ������Էŵ��ṹ�����������ռ���ȡ�
/*namespace F{
    int a=300;//ȫ�ֱ�����������ֵʱ��Ĭ��Ϊ0��
    int b=400;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;//�����a���Բ���F::
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

//�����ռ�ĺ����������������ռ��ⶨ��,�������������ռ�������
/*int a=600;
namespace G{
    int a=300;
    int b=400;
    void fun();
}
void G::fun( ){//�˴�������ǰ�����G::
    cout<<"fun����ȡa="<<a<<endl;//�����a���Բ���G::
}
void test6( ){
    cout<<"a= "<<G::a<<endl;
    G::fun( );
}
int main(  ){
    test6( );
    return 0;
}*/

//�����������ռ�:��ζ�������ռ�ı�ʶ��ֻ���ڱ��ļ��ڷ��ʣ��൱�ڸ���Щ
//��ʶ��������static��ʹ���������Ϊ�ڲ����ӡ������ٶ��������������ռ䡣
/*namespace{
    int a=9000;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;
    }
}
void test7( ){
    cout<<"a= "<<a<<endl;//�����������ռ䣬��aǰ��Ҳ����Ҫд���������ռ�
    fun( );//�����������ռ䣬��funǰ��Ҳ����Ҫд���������ռ�
}
int main(  ){
    test7( );
    return 0;
}*/

//�����ռ����:������c����������#define��
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;
    }
}
void test8( ){
    namespace shortname=verylongname;//"="����������
    cout<<"a= "<<verylongname::a<<endl;
    cout<<"a= "<<shortname::a<<endl;
    verylongname::fun( );
    shortname::fun( );//���������е�����һ��������
}
int main(  ){
    test8( );
    return 0;
}*/

//using��ʹ��
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;
    }
}
void test9( ){
   using namespace verylongname;//ʹ��������󣬿���ʡ��verylongname::
    cout<<"a= "<<verylongname::a<<endl;
    cout<<"a= "<<a<<endl;//���ֵı������ȴ������ռ��ң�
    //�ٵ������ռ��ң��Ҳ����ű���
    verylongname::fun( );
    fun( );
}
int main(  ){
    test9( );
    cout<<"a= "<<verylongname::a<<endl;
   // cout<<"a= "<<a<<endl;//������test9�е�namespace�Դ˲�������
    verylongname::fun( );
    //fun( );
    return 0;
}*/

//usingʹ�õĴ��ۣ����׵��³�ͻ
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;
    }
}
void test10( ){
    int a=700;
   using namespace verylongname;
    cout<<"a= "<<a<<endl;//�ͽ�ԭ��ȡ����700
    cout<<"a= "<<verylongname::a<<endl;//��ͻ��ֻ��ʹ��ԭ���ķ���
    fun( );
    using  verylongname::fun ;//�Ƚ�����
    fun( );
}
int main(  ){
    test10( );
    return 0;
}*/

//usingʹ�õĴ��ۣ����׵��³�ͻ��ȫ�ֱ���ǰĬ�ϼ���::
/*namespace verylongname{
    int a=300;
    void fun( ){
        cout<<"fun����ȡa="<<a<<endl;
    }
}
void test10( ){
   // cout<<"a= "<<a<<endl;//�˴�aδ����
   using  verylongname::a;//using���ܼ�namespace,���˻ᱨ��
     cout<<"a= "<<a<<endl;
    //fun( );//��Աfun���У����verylongname::����
    verylongname::fun();
}
int main(  ){
    test10( );
    return 0;
}*/

//using�����������غ���
/*namespace H{
    void func(  ){  cout<<"func�޲η���\n"; }
    void func(int x){cout<<"funcһ����������\n";}
    void func(int x,int y){cout<<"func������������\n";}
    //c���Բ�֧�����أ�c��������д���ᱨ��c�����У�������������
    //��������ڵ�ַ
    //c++�У��������Ͳ�����ϣ��Ŵ���������ڵ�ַ��c++�������У��Ὣ
    //������ת���ɣ�func_void,func_int,func_int_int��
}
void test11( ){
    using  H::func;//�����Ե�func��������
   //using namespace H;//  Ҳ��������д
   func( );
    func(1);
    func(1,2);

}
int main(  ){
    test11( );
    return 0;
}*/

//using ʹ��ʱ����������ռ�ĳ�ͻ
/*namespace G{
    int a=30;
}
namespace H{
    int a=70;
}
void test12( ){
    using  namespace G;
    using  namespace H;
   //cout<<"a=  "<<a<<endl;//a�����������ռ��ж����ҵ�������֪��
    //ʹ���ĸ������Ա��������������aǰ��������ÿռ䡣
    cout<<"a=  "<<H::a<<endl;
}
int main(  ){
    test12( );
    return 0;
}*/

