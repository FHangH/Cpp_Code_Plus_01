//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

// 占位参数可以有默认值
void func1(int a, int = 10)
{
    cout << "Func1 Test" << endl;
}

int main()
{
    // 有默认值可以不传实参，否则占位参数也要传实参
    func1(10, 10);
    return 0;
}
