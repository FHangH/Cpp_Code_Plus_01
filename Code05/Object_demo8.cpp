//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    static int p_num; // 静态成员变量 类内声明

    static void func() // 静态成员函数
    {
        p_num = 100;
        cout << "num: " << p_num << endl;
    }

private: // 静态成员变量的访问权限可以为私密 类外无法访问
    static void func2()
    {
        cout << "private func2" << endl;
    }
};

int Person::p_num = 0; // 静态成员变量 类外初始化

int main()
{
    // 通过对象访问
    Person p;
    p.func();

    // 通过类名访问 （静态成员函数可以直接通过类的作用域直接调用）
    Person::func();

    return 0;
}
