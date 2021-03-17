#include <iostream>

using namespace std;

double vals[] = {10.1,10.2,10.3,10.4,10.5};
double& setValues(int i)
{
    double& ref= vals[i];
    return ref; //返回第i个元素的引用，ref 是一个引用变量，ref应用val[i]，最后在返回shit；
}

int main()
{
    cout << "改变前的值" << endl;
    for ( int i = 0; i< 5;i++)
    {
        cout << "vals[" << i << "] =  ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23; //改变第2 个元素
    setValues(3) = 70.8;  //改变第4个元素

    cout << "改变后的值" << endl;
    for (int i = 0 ; i< 5 ; i++)
    {
        cout << "vals[" << i << "] =  ";
        cout << vals[i] << endl;       
    }
    return 0;
}