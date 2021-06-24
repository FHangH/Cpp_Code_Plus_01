//
// Created by FHang on 2021/6/24 10:23
//
#include <iostream>

using namespace std;

// 基类
class Base
{
public:
    static int num;

    static void func()
    {
        cout << "Base-Static Func" << endl;
    }

    ~Base()
    {
        cout << endl;
    }
};

int Base::num = 100;

// 子类
class Derived : public Base
{
public:
    static int num;

    static void func()
    {
        cout << "Derived-Static Func" << endl;
    }
};

int Derived::num = 200;

// 同名静态成员属性
void demo1()
{
    Derived derived;
    // 通过对象访问
    cout << "通过对象访问" << endl;
    cout << "Derived Num = " << derived.num << endl;
    cout << "Base Num = " << derived.Base::num << endl;

    // 通过类目访问
    cout << "通过类目访问" << endl;
    cout << "Derived Num = " << Derived::num << endl;
    cout << "Base Num = " << Base::num << endl;

    // 第一个 :: 表示使用类名访问；第二个 :: 表示父类作用域下
    cout << "Base Num = " << Derived::Base::num << endl;
}

// 同名静态成员变量
void demo2()
{
    Derived derived;
    // 通过对象访问
    cout << "通过对象访问" << endl;
    derived.func();
    derived.Base::func();

    // 通过类目访问
    cout << "通过类目访问" << endl;
    Derived::func();
    Derived::Base::func();
}

// 当父类和子类中，存在同名成员变量时，会默认隐藏父类的成员变量，所以可以直接调用子类成员，而父类成员需要 子类调用父类，在父类作用域下 调用
int main()
{
    demo1();
    demo2();
    return 0;
}