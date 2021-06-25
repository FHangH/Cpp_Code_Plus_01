//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

void printInfo(const int &ref_b)
{
    //常量引用的值不可以修改
    //ref_b = 1000;
    cout << "ref_b = " << ref_b << endl;
}

int main()
{
    // 编辑器 转换为 int temp = 10;   const int &a = temp;
    //const int &ref_a = 10;
    // ref_a 用 const 修饰后值不能被修改
    //ref_a = 20;

    int a = 100;
    printInfo(a);
    cout << "a = " << a << endl;
    return 0;
}
