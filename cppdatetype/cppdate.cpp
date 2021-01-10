#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "type : \t\t" << "***************size**************"<< endl;    // “\t”表示水平制表符，跳到下一个Tab的位置
    cout << "bool : \t\t" << "所占字节数：" << sizeof(bool);   
    cout << "\t 最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t 最小值：" << (numeric_limits<bool>::min)();
    return 0;
}