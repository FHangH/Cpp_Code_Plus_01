//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

// ��Ĭ��ֵ������ͨ�����ú����������ֵ
int func01(int a, int b, int c)
{
    return a + b + c;
}

// ��Ĭ��ֵ����������ͨ�����ú����������ֵ��Ҳ���Բ�������ֵ
int func02(int a = 10, int b = 20, int c = 30)
{
    return a + b + c;
}

// �����������У���Ĭ�ϲ���ֵ��һ���βΣ���֮��������β�ҲҪ���β�
//int func03(int a = 10, int b, int c)
//{
//    return a + b + c;
//}

// ����������ʱ���β���Ĭ��ֵ������ʱ���ββ��ö���Ĭ��ֵ
int func04(int a = 10, int b = 20);

//int func04(int a = 20, int b = 10)
//{
//    return a + b;
//}


int main()
{
    cout << "Func01: " << func01(10, 20, 30) << endl;
    cout << "Func02: " << func02() << endl;
    return 0;
}