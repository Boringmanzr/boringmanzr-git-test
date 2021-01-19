#include <iostream>
using namespace std;

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
int main()
{
    int a=5; int b=2;
    max(a,b);
    cout << "返回值是" << max(a,b) << endl;
    return 0;
}