#include <iostream>
using namespace std;
// 变量声明   
/*
C/C++ 编译 cpp 文件是从上往下编译，所以 main 函数里面调用其他函数时，
如果其他函数在 main 函数的下面，则要在 main 函数上面先声明这个函数。
或者把 main 函数放在最下面，
这个不仅限于 main 函数，其他函数的调用都是如此。
被调用的函数要在调用的函数之前声明。
*/
extern int a,b;     //声明不包含变量，只是声明了有一个变量a存在，具体a在哪里定义的，需要编译器编译的时候找到。
extern int c;
extern float f;
int d = 1;            //定义并声明变量d

int main()
{
    //变量定义
    int a,b;
    int c;
    float f;

    //实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;
    
    f = 70.0/3.0;
    cout << f << endl;

    return 0;
}