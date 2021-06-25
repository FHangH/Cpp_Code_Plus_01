//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int *my_Age;

    explicit Person(int age)
    {
        my_Age = new int(age);
    }

    ~Person()
    {
        if (my_Age != nullptr)
        {
            delete my_Age;
            my_Age = nullptr;
        }
    }

    // ���� ��ֵ����� ��ÿһ������ �����Զ�Ӧһ�����������ǳ���������Ķ������ָ��ͬһ�����������������������£��ظ��ͷŶ���
    Person &operator=(Person &person)
    {
        // ������ Ĭ�� ǳ����
        // my_Age = person.my_Age;

        // 1. �� p2 = p1 �У�p2�ڶ�������������ֵ�������ڽ������֮ǰ�����ͷ� p2 ����
        if (my_Age != nullptr)
        {
            delete my_Age;
            my_Age = nullptr;
        }

        // 2. ���� ���
        my_Age = new int(*person.my_Age);

        return *this;
    }
};

void demo1()
{
    Person p1(18);
    Person p2(24);

    // �� ��ֵ���� Ϊ ǳ����
    p2 = p1;

    // ǳ����ʱ ���� my_Age ռ�� ���ڴ� ���������� �ظ��ͷ�
    cout << *p1.my_Age << endl;
    cout << *p2.my_Age << endl;
}

void demo2()
{
    Person p1(18);
    Person p2(24);
    Person p3(36);

    p3 = p2 = p1;

    cout << *p1.my_Age << endl;
    cout << *p2.my_Age << endl;
    cout << *p3.my_Age << endl;
}

int main()
{
    // demo1();
    demo2();
    return 0;
}