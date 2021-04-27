//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int *p_a, int *p_b)
{
    int temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;
}

void swap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

//    swap01(a, b); ֵ���ݣ��ββ�����ʵ��
//    swap02(&a, &b); ��ַ���ݣ��β�����ʵ��
    swap03(a, b); // ���ô��ݣ��β�����ʵ��

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}