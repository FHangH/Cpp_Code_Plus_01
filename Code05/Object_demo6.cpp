//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int p_a;
    int p_b;

    // ͨ���вι��캯����ʼ������ֵ
//    Person(int a, int b)
//    {
//        p_a = a;
//        p_b = b;
//    }

// ͨ����ʼ���б�����ʼ������ֵ
    Person(int a, int b) : p_a(a), p_b(b)
    {

    }
};

int main()
{
    Person p1(10, 20);
    cout << "p1 a: " << p1.p_a << endl;
    cout << "p1 b: " << p1.p_b << endl;

    return 0;
}
