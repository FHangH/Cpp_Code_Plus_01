//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int c = 10;
    //int &b; 引用必须初始化
    int &b = a;
    //int &b = c; 引用初始化后不可更改
    return 0;
}
