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

    void setName(string name)
    {
        stu_Name = name;
    }

    void setID(int id)
    {
        stu_ID = id;
    }

    void printStudentInfo()
    {
        cout << "Student Info : " << endl;
        cout << "Name: " << stu_Name << "  ID: " << stu_ID << endl;
    }
};


int main()
{
    Student s1;
    s1.setName("FH");
    s1.setID(123456);
    s1.printStudentInfo();

    Student s2;
    s2.setName("CYL");
    s2.setID(666666);
    s2.printStudentInfo();

    return 0;
}

