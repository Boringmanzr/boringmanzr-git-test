#include <iostream>
using namespace std;

// 函数声明
int max ( int num1 , int num2);

int main()
{
    int a = 5; 
    int b = 2;
    int final = max(a,b);
    cout << "返回值是" << final << endl;
    return 0;
}

int max ( int num1 , int num2 ) 
{
    //声明局部变量
    int result;
    
    if ( num1 > num2 )
        result = num1;
    else
        result = num2;
    
    return result;
}
