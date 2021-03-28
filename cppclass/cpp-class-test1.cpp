#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

class student
{
    public:
        char name[20];
        char sex[10];
        float math;
        float english;
        float cplus;
        void input_name();
        void input_sex();
        void input_math();
        void input_english();
        void input_cplus();
        void input(class student *stu);
        void show_student_massage(class student *stu);
};

void student::input_name()
{
    cout << "输入学生姓名：" << endl;
    cin.getline(name,sizeof(name));
    cout << "学生姓名:" << name << endl;
}
void student::input_sex()
{
    cout << "输入学生性别：" <<endl;
    cin.getline(sex,sizeof(sex));
    cout << "学生性别：" << sex << endl;
}
void student::input_math()
{
    cout << "输入学生数学成绩：" << endl;
    cin >> math;
}
void student::input_english()
{
    cout << "输入学生英语成绩：" << endl;
    cin >> english;
}
void student::input_cplus()
{
    cout << "输入学生c++成绩：" << endl;
    cin >> cplus;
}
void student::input(class student *stu)
{
    stu->input_name();
    stu->input_sex();
    stu->input_math();
    stu->input_english();
    stu->input_cplus();
}
void student::show_student_massage(class student *stu)
{
    cout << "学生姓名：" << stu->name << endl;
    cout << "学生性别：" << stu->sex << endl;
    cout << "学生数学：" << stu->math << endl;
    cout << "学生英语：" << stu->english << endl;
    cout << "学生c++：" << stu->cplus << endl;
}
int main()
{
    student student1;
    student *student1_point = &student1;
    student1.input(student1_point);
    student1.show_student_massage(student1_point);
    return 0;
}