#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int* p= &a;

    cout << p << '\t' << *p << endl;
    p = NULL;
    cout << p << '\t' << *p << endl;
    return 0;
/*     int *ptr = NULL;
    cout << "prt 的值是 " << ptr << endl;
    cout << "NULL的值是 " << NULL << endl;
    return 0; */
}