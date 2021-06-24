//
// Created by FHang on 2021/6/24 10:23
//
#include <iostream>

using namespace std;

// ����
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

// ����
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

// ͬ����̬��Ա����
void demo1()
{
    Derived derived;
    // ͨ���������
    cout << "ͨ���������" << endl;
    cout << "Derived Num = " << derived.num << endl;
    cout << "Base Num = " << derived.Base::num << endl;

    // ͨ����Ŀ����
    cout << "ͨ����Ŀ����" << endl;
    cout << "Derived Num = " << Derived::num << endl;
    cout << "Base Num = " << Base::num << endl;

    // ��һ�� :: ��ʾʹ���������ʣ��ڶ��� :: ��ʾ������������
    cout << "Base Num = " << Derived::Base::num << endl;
}

// ͬ����̬��Ա����
void demo2()
{
    Derived derived;
    // ͨ���������
    cout << "ͨ���������" << endl;
    derived.func();
    derived.Base::func();

    // ͨ����Ŀ����
    cout << "ͨ����Ŀ����" << endl;
    Derived::func();
    Derived::Base::func();
}

// ������������У�����ͬ����Ա����ʱ����Ĭ�����ظ���ĳ�Ա���������Կ���ֱ�ӵ��������Ա���������Ա��Ҫ ������ø��࣬�ڸ����������� ����
int main()
{
    demo1();
    demo2();
    return 0;
}