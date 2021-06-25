//
// Created by FHang on 2021/6/25 16:34
//
#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
    string f_Name;
    int f_Age;
};

void demo()
{
    Person person = {"FHang", 24};
    ofstream ofs;
    ofs.open(R"(C:\Users\Admin\Desktop\Person.txt)", ios::out | ios::binary);
    ofs.write((const char *) &person, sizeof(Person));
    ofs.close();
}

int main()
{
    demo();
    return 0;
}