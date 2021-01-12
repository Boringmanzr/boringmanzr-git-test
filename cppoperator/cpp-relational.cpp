#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    int b = 20;
    if ( a == b)
    {
        cout << "a等于b" << endl;
    }
    else
    {
        cout << "a不等于b" << endl;
    }
    
    if ( a != b )
    {
        cout << "a不等于b" << endl;
    }
    else
    {
        cout << "a等于b" << endl;
    }
    if ( a > b )
    {
        cout << "a大于b" << endl;
    }
    else
    {
        cout << "a小于b" << endl;
    }
    if ( a < b )
    {
        cout << "a小于b" << endl;
    }
    else
    {
        cout << "a大于b" << endl;
    }
    a = 20 ;
    b = 10 ;
    if ( a >= b )
    {
        cout << "a大于等于b" << endl;
    }
    else
    {
        cout << "a小于b" << endl;
    }
    
    return 0;
    
}