#include <iostream>
using namespace std;
/*
    C++定义常量两种方法
    1.#define做预处理,定义值后不用分号
    2.使用const关键字，定义后需要分号;
*/
#define Length 20
#define Width 10
#define Press 999
const int Money = 10000 ;

int main()
{
    const int Cards = 5 ;
    int Space = Length * Width;
    int Home = Money / Cards; 
    cout << Home << endl;
    cout << Space << endl;
    cout << Press << endl;
    #undef Press                     //#define定义的常量可以通过#undef来取消某个符号的定义，再重新定义
    #define Press 666 
    cout << Press << endl;
    return 0;
}
