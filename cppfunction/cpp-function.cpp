#include <iostream>
using namespace std;

// 函数声明,函数必须声明才能使用
int max1 ( int num1 , int num2);
//可以向上面一样单独声明，也可以如下声明后直接定义
int test2 ( int a , int b = 20 )
{
    // 声明局部变量
    int result;

    if ( a > b )
        result = a;
    else
        result = b;
    return result;

}

int main()
{
    int A = 5; 
    int B = 2;
    int a = 100 ;
    int final = max1(A,B); //返回max的值给变量
    cout << "返回值是" << final << endl;
    int final2 = test2(a); //使用默认的 b 的值
    cout << "使用默认b值时，返回的是：" << final2 << endl;
    int final3 = test2(a,200); //使用指定的值，忽略默认值
    cout << "使用指定b值时，返回的是：" << final3 << endl;
    return 0;

}

int max1 ( int num1 , int num2 ) 
{
    //声明局部变量
    int result;
    
    if ( num1 > num2 )
        result = num1;
    else
        result = num2;
    
    return result;
}
