//
// Created by FHang on 2021/6/24 19:15
//
#include <iostream>

using namespace std;

// 抽象类
class Base
{
public:
    // 纯虚函数
    virtual void func() = 0;
};

class Derived : public Base
{
public:
    virtual void func()
    {
        cout << "Derived Function" << endl;
    }
};

void demo()
{
    Base *base = new Derived;
    base->func();
}

int main()
{
    demo();
    return 0;
}