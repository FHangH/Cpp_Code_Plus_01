//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    // mutable ���εĳ�Ա����
    mutable int id;

    // thisָ����ָ�볣����ָ���ָ�򲻿��޸�
    // const Person *const this��
    // ����������const ���ε�thisָ�� ��thisָ��ָ���ֵҲ�����޸�
    void printAge() const
    {
        // this->age = 10;

        // �����������޸� mutable��ֵ
        this->id = 10;
    }

    void printID()
    {

    }
};

void demo()
{
    // ������
    const Person p{};

    p.printAge();
    //p.printID(); // ������ֻ�ܵ��� ������

    //p.age = 100; // �������ڵĳ�Ա��������ֵ�����޸�
    p.id = 100; // �������ڵ�mutable��Ա��������ֵ���޸�
}

int main()
{
    demo();
    return 0;
}
