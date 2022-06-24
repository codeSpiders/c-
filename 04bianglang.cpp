//const修饰的全局变量，默认是内部链接，只在当前源文件有效，不能
//直接用于其他源文件。跟c刚好相反。
const int gnum=500;

//如果必须用在其他源文件，使用只读的全局变量，则必须加extern转换成
//外部链接
extern const int gnum2=600;
