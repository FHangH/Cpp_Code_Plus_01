//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Person
{
public:
    string name;

protected:
    string car;

private:
    int password;

private:
    void func()
    {
        name = "FH";
        car = "XXX";
        password = 123456;
    }
};


int main()
{
    Person p1;
    p1.name = "CYL";

    //p1.car = "YYY"; // 保护权限内容，类外不可访问和修改
    //p1.password = 999999; // 私有权限内容，类外不可访问和修改
    return 0;
}

