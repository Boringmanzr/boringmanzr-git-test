#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "type : \t\t" << "***************size**************"<< endl;   // “\t”表示水平制表符，跳到下一个Tab的位置
    cout << "bool : \t\t" << "所占字节数：" << sizeof(bool);                //sizeof()函数用来获取各种数据类型的大小 
    cout << "\t 最大值：" << (numeric_limits<bool>::max)();                 //<<运算符用于向屏幕传多个值
    cout << "\t\t 最小值：" << (numeric_limits<bool>::min)()<< endl;        // 使用endl将在每一行插入一个换行符
}