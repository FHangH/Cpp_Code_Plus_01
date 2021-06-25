//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class MyInt
{
    friend ostream &operator<<(ostream &c, MyInt myInt);
private:
    int my_num;

public:
    MyInt()
    {
        my_num = 10;
    }

    // 重置 前置 -- 返回引用
    MyInt &operator--()
    {
        my_num--;
        return *this;
    }

    // 重置 后置 -- 返回值
    MyInt operator--(int)
    {
        MyInt tempInt = *this;
        my_num--;
        return tempInt;
    }
};

// 全局重载 左移运算符
ostream &operator<<(ostream &c, MyInt myInt)
{
    cout << myInt.my_num;
    return c;
}

void demo1()
{
    cout << "<---------demo1----------->" << endl;
    MyInt myInt;
    cout << myInt << endl;
}

void demo2()
{
    cout << "<---------demo2----------->" << endl;
    MyInt myInt;
    cout << myInt << endl;
    cout << --myInt << endl;
    cout << --(--myInt) << endl;
    cout << myInt-- << endl;
    cout << myInt << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}