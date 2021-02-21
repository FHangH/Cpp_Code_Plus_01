//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

void func()
{
    cout << "func()" << endl;
}

void func(int &a)
{
    cout << "func(int &a)" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)" << endl;
}

void func(int &a, int &b)
{
    cout << "func(int &a, int &b)" << endl;
}

void func2(int a)
{
    cout << "func2(int a)" << endl;
}

void func2(int a, int b = 10)
{
    cout << "func(int a, int b = 10)" << endl;
}


int main()
{
    int a = 10;
    int b = 20;

    func();
    func(a);
    func(10);
    func(a, b);

    // func2 函数有重载，且其中一个参数有默认值
    //func2(a);

    return 0;
}
