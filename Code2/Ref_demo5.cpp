//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

// ת��Ϊ int *const ref_b = &a
void demo1(int &ref_b)
{
    ref_b = 100;
}

int main()
{
    int a = 10;

    // �Զ�ת��Ϊ int *const ref_a = &a; << = >> ָ�볣������Ϊָ���ָ�򣨵�ַ�����ɸı䣬�������õĳ�ʼ���󲻿ɸ���
    int &ref_a = a;
    // ref�����ã��Զ�ת���� *ref = 20��
    ref_a = 20;

    cout << "a = " << a << endl;
    cout << "ref_a = " << ref_a << endl;

    demo1(ref_a);

    return 0;
}
