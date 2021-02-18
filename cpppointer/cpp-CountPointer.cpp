#include <iostream>
using namespace std;

const int MAX = 3 ;

int main()
{
    int var[MAX]={ 10 , 20 , 30 };
    int *pointer = NULL;
    int var1[MAX]={ 99, 8 , 7 };
    int *poi = NULL;
    int *test = NULL;

//指针中的数组地址
    test = &var[0];
    pointer = var;  //数组是一个常量指针，所以将常量赋值给变量指针来做递增
    /*
    var = &var[0]都是第一个元素
    &var是直接对数组名进行取地址，
    这个时候就是取的是var整个数组的地址，
    指向包含3个元素的int型数组，是一个地址范围
    */
    cout << "数组的指针：" << pointer << endl;
    cout << "数组的指针：" << test << endl;
    cout << "&用在数组名上：" << &var << endl;
    
    for( int i=0 ; i < MAX ; i++)
    {
        cout << "变量var["<< i <<"]地址：" << pointer << endl;
        cout << "变量var["<< i <<"]实值：" << *pointer << endl;
        //移动到下一个地址
        pointer++;
    }
//指针中最后一个元素的地址
    poi = &var[MAX-1];//将最后一个元素的地址赋值给指针变量
    for(int i=MAX ; i > 0 ; i--)
    {
        cout << "变量var2["<<i<<"]的地址；" << poi << endl;
        cout << "变量var2["<<i<<"]的实值；" << *poi << endl;
        //移动到下一个地址
        poi--;
    }
//指针的比较
    int j = 0 ;
    while ( poi <= &var[MAX-1])
    {
        cout << "变量["<<j<<"]指针的地址：" << poi << endl;
        cout << "变量["<<j<<"]指针的实值：" << *poi << endl;

        poi++;
        j++;
    } 
    
    return 0; 
}