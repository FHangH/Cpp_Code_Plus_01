//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

int &demo1()
{
    int a = 10; //函数体内定义的局部变量，函数执行完后，系统自动回收
    return a;
}

int &demo2()
{
    static int b = 20; //static 修饰的静态变量，存储在全局区，整个程序执行完后，系统自动回收
    return b;
}

int main()
{
    int &ref_a = demo1();
    int &ref_b = demo2();
    cout << "ref_a = " << ref_a << endl;
    cout << "ref_a = " << ref_a << endl;

    cout << "ref_b = " << ref_b << endl;
    cout << "ref_b = " << ref_b << endl;

    demo2() = 1000; //函数的调用是引用，可以作为左值
    cout << "ref_b = " << ref_b << endl;
    cout << "ref_b = " << ref_b << endl;

    return 0;
}
