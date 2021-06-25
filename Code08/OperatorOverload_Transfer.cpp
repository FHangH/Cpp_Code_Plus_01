//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class FPrint
{
public:
    void operator()(const string &text)
    {
        cout << text << endl;
    }
};

class FAdd
{
public:
    void operator()(int num1, int num2)
    {
        cout << num1 + num2 << endl;
    }
};

void demo1()
{
    FPrint fPrint;
    fPrint("Hello World !");
}

void demo2()
{
    FAdd fAdd;
    fAdd(10, 20);

    // 匿名函数对象
    FAdd()(20, 40);
}

int main()
{
    demo1();
    demo2();
    return 0;
}