//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class demo1
{
    // 空对象 默认 占内存空间 1
};

class demo2
{
    int num = 0; // 非空对象 占内存空间 依据成员变量
};

class demo3
{
    int num3 = 0;
    static int s_num; // 静态成员变量 不在类的对象上

    void func()
    {
        // 成员函数 不在类的对象上 (无论是否静态)
    }
};

int demo3::s_num = 0;

void Test1()
{
    cout << "Size of demo1: " << sizeof(demo1) << endl;
}

void Test2()
{
    cout << "Size of demo2: " << sizeof(demo2) << endl;
}

void Test3()
{
    cout << "Size of demo3: " << sizeof(demo3) << endl;
}

int main()
{
    Test1();
    Test2();
    Test3();

    return 0;
}