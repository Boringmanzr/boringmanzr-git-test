#include <iostream>
using namespace std;

class Box
{
    public:
        double length;  //长度
        double breadth; //宽度
        double height; //高度
    //成员函数说明
    double get(void);
    void set( double len, double bre, double hei);
};

//成员函数定义
double Box::get(void)
{
    return length * breadth * height;
}

void Box::set(double len,double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0 ;//用于存储体积
    //Box1详述
    Box1.breadth = 5.0;
    Box1.length = 6.0;
    Box1.height = 2.0;

    //Box2详述
    Box2.breadth= 9.0;
    Box2.length = 8.0;
    Box2.height = 7.0; 

    //Box1的详述使用函数
    Box1.set(Box1.breadth,Box1.length,Box1.height);
    volume = Box1.get(); 
    cout << "Box1的体积" << volume <<endl;
    return 0;

}