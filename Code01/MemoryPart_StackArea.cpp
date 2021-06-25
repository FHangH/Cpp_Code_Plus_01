//
// Created by FHang on 2020/8/5.
//
#include <iostream>

using namespace std;

//定义一个返回值int类型的函数
int *demoFunc()
{
    //定义一个局部变量，存在栈区中
    int a = 10;
    //返回一个局部变量的地址
    return &a;
}

int main()
{
    //接受局部变量传来的地址
    int *p_a = demoFunc();

    cout << *p_a << endl; //第一次能正常的解析地址对应的值，函数执行结束，系统回收了数据
    cout << *p_a << endl; //第二次，无法正常解析到对应的值，因为函数执行一次结束后，没有返回值了

    return 0;
}
