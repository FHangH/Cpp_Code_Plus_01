//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int *p_a, int *p_b)
{
    int temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;
}

void swap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

//    swap01(a, b); 值传递，形参不修饰实参
//    swap02(&a, &b); 地址传递，形参修饰实参
    swap03(a, b); // 引用传递，形参修饰实参

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}