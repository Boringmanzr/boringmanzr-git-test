#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // 基于当前系统时间的时间
    time_t now = time(0);
    // 把now转换位字符串的形式
    char* dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把now 转换位tm结构的
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC日期和时间：" << dt << endl;
}