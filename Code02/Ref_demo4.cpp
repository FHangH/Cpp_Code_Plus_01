//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

int &demo1()
{
    int a = 10; //�������ڶ���ľֲ�����������ִ�����ϵͳ�Զ�����
    return a;
}

int &demo2()
{
    static int b = 20; //static ���εľ�̬�������洢��ȫ��������������ִ�����ϵͳ�Զ�����
    return b;
}

int main()
{
    int &ref_a = demo1();
    int &ref_b = demo2();
    cout << "ref_a = " << ref_a << endl;
    cout << "ref_a = " << ref_a << endl;

    cout << "ref_b = " << ref_b << endl;
    cout << "ref_b = " << ref_b << endl;

    demo2() = 1000; //�����ĵ��������ã�������Ϊ��ֵ
    cout << "ref_b = " << ref_b << endl;
    cout << "ref_b = " << ref_b << endl;

    return 0;
}
