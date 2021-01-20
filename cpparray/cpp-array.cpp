#include <iostream>
#include <iomanip>
using std::setw;
using namespace std;

int main()
{
    int n[ 10 ]; //声明一个元素数为10的一维整数数组

    for ( int i = 0; i < 10 ; i++) //初始化数组元素
    {
        n[i]=i+100; 
    }
    cout << "Element" << setw(13) << "value" <<endl;

    for ( int j = 0; j <10 ; j++ )
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
 }