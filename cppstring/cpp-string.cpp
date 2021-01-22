#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    char test[7] = { 'R', 'u' , 'n' , 'o', 'o', 'b','\0' };
    char test2[] = "Runoob";
    //如上两种声明方式都可以，而且实际上第一种不需要把null字符放在末尾，编译时自动放进去
    cout << "输出字符串：" << test << endl; 
    cout << "输出字符串2："<< test2 << endl; 
    cout << "输出字符串中第3位：" << test[2] << endl;
    cout << "输出字符串中第4位：" << test2[3] << endl;
    return 0;

}