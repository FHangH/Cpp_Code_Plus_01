//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

void printInfo(const int &ref_b)
{
    //�������õ�ֵ�������޸�
    //ref_b = 1000;
    cout << "ref_b = " << ref_b << endl;
}

int main()
{
    // �༭�� ת��Ϊ int temp = 10;   const int &a = temp;
    //const int &ref_a = 10;
    // ref_a �� const ���κ�ֵ���ܱ��޸�
    //ref_a = 20;

    int a = 100;
    printInfo(a);
    cout << "a = " << a << endl;
    return 0;
}
