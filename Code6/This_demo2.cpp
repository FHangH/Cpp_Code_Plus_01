//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int age;

    Person(int age)
    {
        // this����������ͬ���Ƶı���
        this->age = age;
    }

    //���ص���Person���������
    Person &addPersonAge(Person &p)
    {
        this->age += p.age;
        return *this; // ���ض���Ϊ *this
    }
};

void func1()
{
    Person p1(10);
    cout << "p1 Age: " << p1.age << endl;
}

void func2()
{
    Person p2(20);
    Person p3(20);
    // ��ʽ���˼��
    // p3.addPersonAge(p2) ��ִ�н���Ƿ��� ����ı������Կ�����ʽ���ó�Ա����
    p3.addPersonAge(p2).addPersonAge(p2).addPersonAge(p2);
    cout << "p3 Age: " << p3.age << endl;
}

int main()
{
    func1();
    func2();
    return 0;
}

