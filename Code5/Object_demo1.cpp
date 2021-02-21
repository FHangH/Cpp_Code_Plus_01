//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test构造函数" << endl;
    }
    ~Test()
    {
        cout << "Test析构函数" << endl;
    }
};

void demo()
{
    Test t1;
}

int main()
{
    demo(); // 函数执行时调用构造函数，结束时调用析构函数
    Test t2; // 函数执行时调用构造函数
    system("pause"); // 程序在此处暂停，析构函数为被调用，按任意键后执行析构函数
    return 0;
}
