#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout << "输入菱形的高度" << endl;
    cin >> n ;

    for (int i = 0 ; i < n ; i++)
    {
        for ( int j = 0; j < n - i - 1;j++)
        {
            cout << " " ;
        }
        for ( int j = 0; j<= 2*i ;j++)
        {
            if( j == 0 or j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl; 
    }

    for (int i= 0 ; i < n ; i++)
    {
        for (int j=0 ; j <= i;j++)
        {
            cout << " ";
        } 
        for (int j = 0;j <= 2 * ( n -  i - 2); j++  )
        {
            if (j == 0 or j == 2 * ( n - i -2 ))
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }   
    return 0;
}