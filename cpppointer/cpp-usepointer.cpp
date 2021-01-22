#include <iostream>
using namespace std;

int main()
{
    int var = 1111; //声明实际变量
    int *pointer; //指针变量的声明

    pointer = &var; //讲变量地址赋值给指针

    cout << "实际变量的值：" << var << endl;
    cout << "访问指针变量中可用的地址:" << pointer << endl;
    cout << "访问指针变量中地址的值：" << *pointer << endl; 
    return 0;
}