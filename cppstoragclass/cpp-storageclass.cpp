#include <iostream>
using namespace std;
//函数声明
void func(void);
extern void write_extern();
 int count = 10;   //

int main()
{
    while (count--)
    {
        func();    /* code */
    }
    write_extern();
    return 0;

}
 void func( void )
 {
     static int i = 5;
     i++;
     std::cout << "变量i为" << i ;
     std::cout << "变量count为" << count << endl;
 }