#include <iostream>
#include <ctime>
#include "windows.h"
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main()
{
    clock_t time1 = clock();
    //基于当前系统的当前日期/时间
    time_t now = time(NULL);

    cout << "自1970到目前的秒数:" << now << endl;

    tm *ltm = localtime(&now);

    // 输出tm结构的各个组成部分
    cout << "年：" << 1900 +ltm->tm_year << endl;
    cout << "月：" << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_mday << endl;
    cout << "时间：" << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl; 
    Sleep(5000);
    cout << time1 << endl;
}