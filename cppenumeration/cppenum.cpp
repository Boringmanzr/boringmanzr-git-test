#include <iostream>
using namespace std;

int main()
{
    enum days{one, two, three}day;
    day = one;
    switch (day)
    {
    case one:/* constant-expression */
        cout << "one day" << endl; /* code */
        break;
    case two:
        cout << "two day" << endl; /* code */
        break;
    default:
        cout << "three day" << endl; /* code */
        break;
    }
    return 0;
}