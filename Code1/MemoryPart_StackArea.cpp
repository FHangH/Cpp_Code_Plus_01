//
// Created by FHang on 2020/8/5.
//
#include <iostream>

using namespace std;

//����һ������ֵint���͵ĺ���
int *demoFunc()
{
    //����һ���ֲ�����������ջ����
    int a = 10;
    //����һ���ֲ������ĵ�ַ
    return &a;
}

int main()
{
    //���ֲܾ����������ĵ�ַ
    int *p_a = demoFunc();

    cout << *p_a << endl; //��һ���������Ľ�����ַ��Ӧ��ֵ������ִ�н�����ϵͳ����������
    cout << *p_a << endl; //�ڶ��Σ��޷�������������Ӧ��ֵ����Ϊ����ִ��һ�ν�����û�з���ֵ��

    return 0;
}
