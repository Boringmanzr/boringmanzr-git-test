#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[] = "google";
    char str2[] = "apple";
    char str3[13]; 
    int len;
    int result;
//复制，str1->str3
    strcpy(str3,str1);
    cout << "strcpy()复制str1到str3：" << str3 << endl;
//拼接str1和str2
    strcat(str1,str2);
    cout << "strcat()拼接str1和str2：" << str1  << endl;
//获取拼接后字符串str1的长度
    len = strlen(str1);
    cout << "strlen()输出字符串长度：" << len << endl; 
//比较字符串是否相同
    result = strcmp(str1,str2);
    cout << "strcmp()比照str1和str2的结果：" << result << endl;
    
    return 0; 
}