//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class demo1
{
    // �ն��� Ĭ�� ռ�ڴ�ռ� 1
};

class demo2
{
    int num = 0; // �ǿն��� ռ�ڴ�ռ� ���ݳ�Ա����
};

class demo3
{
    int num3 = 0;
    static int s_num; // ��̬��Ա���� ������Ķ�����

    void func()
    {
        // ��Ա���� ������Ķ����� (�����Ƿ�̬)
    }
};

int demo3::s_num = 0;

void Test1()
{
    cout << "Size of demo1: " << sizeof(demo1) << endl;
}

void Test2()
{
    cout << "Size of demo2: " << sizeof(demo2) << endl;
}

void Test3()
{
    cout << "Size of demo3: " << sizeof(demo3) << endl;
}

int main()
{
    Test1();
    Test2();
    Test3();

    return 0;
}