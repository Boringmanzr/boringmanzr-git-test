#include <iostream>
using namespace std;

int main()
{
    int a = 10; 
    int b = 20;
    int c;

    c = a + b;
    cout << "c的值是" << c << endl;
    c = a - b;
    cout << "c的值是" << c << endl;
    c = a * b;
    cout << "c的值是" << c << endl;
    c = b / a;
    cout << "c的值是" << c << endl;
    c = b % a;
    cout << "c的值是" << c << endl;
    
    //测试自增，自减
    int d = 20;
    c = d++;
    cout << "c的值是" << c << endl;
    cout << "d的值是" << d << endl;
    d = 20;
    c = d--;
    cout << "c的值是" << c << endl;
    cout << "d的值是" << d << endl;
    return 0;
}