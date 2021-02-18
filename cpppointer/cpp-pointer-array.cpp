#include <iostream>
using namespace std;
const int MAX = 3 ;

int main()
{
    int var[MAX]={10,20,30};
    for(int i=0; i<MAX;i++)
    {
        *(var + i ) = i ;  //*操作的必须是指针
        /*
        使用*var[i]就是错误的，
        */
        //var++; //常量不能使用++计算
        cout << "指针所指的数组var["<<i<<"]" << var[i] << endl; 
    }
    return 0;
}