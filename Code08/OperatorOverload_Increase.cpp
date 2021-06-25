//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class MyInt
{
    friend ostream &operator<<(ostream &c, MyInt myInt);
private:
    int my_num;

public:
    MyInt()
    {
        my_num = 0;
    }

    // ���� ǰ�� ++ �����
    // �������õ�Ŀ���� ���Ե�ǰ�Ķ�����м��㣬���Ƿ��ض�����һ�μ����������һ���¶���
    MyInt &operator++()
    {
        my_num++;
        return *this;
    }

    // ���� ���� ++ �����
    // MyInt &operator++(int) => int �� ռλ���������߱��������������֣�ǰ��������
    // �˴� ����ֵ �������������ã��ú����� ���������ָ���ֵ ����ʱ������һ�β����󣬱����գ������������ʹ�� ���� ++�����Ƿ���NULL���Ƿ�����
    MyInt operator++(int)
    {
        MyInt tempInt = *this;
        my_num++;
        return tempInt;
    }
};

// ȫ������ ���������
ostream &operator<<(ostream &c, MyInt myInt)
{
    cout << myInt.my_num;
    return c;
}

void demo1()
{
    cout << "<---------demo1----------->" << endl;
    MyInt myInt;
    cout << myInt << endl;
}

void demo2()
{
    cout << "<---------demo2----------->" << endl;
    MyInt myInt;
    cout << myInt << endl;
    cout << ++myInt << endl;
    cout << ++(++myInt) << endl;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}