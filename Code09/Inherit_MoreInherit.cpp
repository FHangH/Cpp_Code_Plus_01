//
// Created by FHang on 2021/6/24 11:03
//
#include <iostream>

using namespace std;

class Base1
{
public:
    int num;

    Base1()
    {
        num = 100;
    }
};

class Base2
{
public:
    int num;

    Base2()
    {
        num = 200;
    }
};

class Derived : public Base1, public Base2
{
public:
    int num;

    Derived()
    {
        num = 300;
    }
};

void demo()
{
    Derived derived;
    cout << "Sizeof derived = " << sizeof(derived) << endl;
    cout << "Derived Num = " << derived.num << endl;
    cout << "Base1 Num = " << derived.Base1::num << endl;
    cout << "Base2 Num = " << derived.Base2::num << endl;
}

int main()
{
    demo();
    return 0;
}