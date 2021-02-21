//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Student
{
public:
    string stu_Name;
    int stu_ID;

    void printStudentInfo()
    {
        cout << "Student Info : " << endl;
        cout << "Name: " << stu_Name << "  ID: " << stu_ID << endl;
    }
};


int main()
{
    Student s1;
    s1.stu_ID = 123456;
    s1.stu_Name = "FH";
    s1.printStudentInfo();

    return 0;
}
