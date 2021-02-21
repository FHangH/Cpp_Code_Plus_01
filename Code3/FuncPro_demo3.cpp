//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

void func()
{
    cout << "func()" << endl;
}

void func(int a)
{
    cout << "func(int a)" << endl;
}

void func(int a, int b)
{
    cout << "func(int a, int b)" << endl;
}

void func(int a, double b)
{
    cout << "func(int a, double b)" << endl;
}

// 返回值不可以作为函数重载的条件
//int func()
//{
//    cout << "func()" << endl;
//}

int main()
{
    func();
    func(10);
    func(10, 20);
    func(10, 20.20);
    return 0;
}
