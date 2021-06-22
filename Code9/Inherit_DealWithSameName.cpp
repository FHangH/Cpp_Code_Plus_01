//
// Created by Admin on 2021/6/22.
//
#include <iostream>

using namespace std;

class Base
{
public:
    int num;

    Base()
    {
        num = 100;
    }

    void FPrint()
    {
        cout << "Base Print" << endl;
    }

    void FPrint(int n)
    {
        cout << "Base Print (int n) : Overload Function" << endl;
    }
};

class Derived : public Base
{
public:
    int num;

    Derived()
    {
        num = 200;
    }

    void FPrint()
    {
        cout << "Derived Print" << endl;
    }
};

void demo()
{
    Derived derived;
    cout << "Derived num = " << derived.num << endl;
    cout << "Base num = " << derived.Base::num << endl;
    derived.FPrint();
    derived.Base::FPrint();

    // 当父类和子类中，存在同名成员时，会默认隐藏父类的成员，所以可以直接调用子类成员，而父类成员需要 子类调用父类，在父类作用域下 调用
    // derived.FPrint(10); // 父类被隐藏，所以直接传参也无法找到 重载的函数，因为子类没有 FPrint的重载函数
    derived.Base::FPrint(10); // 加上 父类作用域后 可调用
}

int main()
{
    demo();
    return 0;
}