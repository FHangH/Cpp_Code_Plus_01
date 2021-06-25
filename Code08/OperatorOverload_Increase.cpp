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
        my_num = 0;
    }

    // 重载 前置 ++ 运算符
    // 返回引用的目的是 仅对当前的对象进行计算，若是返回对象，则一次计算后，生成另一个新对象
    MyInt &operator++()
    {
        my_num++;
        return *this;
    }

    // 重载 后置 ++ 运算符
    // MyInt &operator++(int) => int 是 占位参数，告诉编译器，用于区分，前后置重载
    // 此处 返回值 不返回自身引用，该函数内 自身的引用指向的值 是临时变量，一次操作后，被回收，若是连续多次使用 后置 ++，便是访问NULL，非法操作
    MyInt operator++(int)
    {
        MyInt tempInt = *this;
        my_num++;
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
    cout << ++myInt << endl;
    cout << ++(++myInt) << endl;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}