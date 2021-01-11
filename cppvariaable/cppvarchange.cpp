#include <iostream>
using namespace std;

int a=1;
double b=2.5;

int main()
{
    a = b;     //赋值运算中，赋值号两边的数据类型不同时，右边的转为左边的类型
    cout << a << endl; //输出结果为3

    cout << "a + b = " << a + b << endl; //自动转换，两种类型不同时，转换为字节数高的类型

    cout << "(强制转换)a + b =" << a + (int)b << endl; 

    return 0;
    
}