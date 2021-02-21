//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

// 转换为 int *const ref_b = &a
void demo1(int &ref_b)
{
    ref_b = 100;
}

int main()
{
    int a = 10;

    // 自动转换为 int *const ref_a = &a; << = >> 指针常量；因为指针的指向（地址）不可改变，所以引用的初始化后不可更改
    int &ref_a = a;
    // ref是引用，自动转换成 *ref = 20；
    ref_a = 20;

    cout << "a = " << a << endl;
    cout << "ref_a = " << ref_a << endl;

    demo1(ref_a);

    return 0;
}
