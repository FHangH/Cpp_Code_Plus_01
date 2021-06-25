//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class Person
{
public:
    string my_Name;
    int my_Age;

    Person(string name, int age)
    {
        my_Name = std::move(name);
        my_Age = age;
    }

    // ���� ��ϵ����� ����ֵ���Ϳ���Ϊ��int���� 0/1������ bool����
    // �˴� ���صĹ�ϵ�����Ϊ ==���������磺!=, <, > ...ͬ��
    int operator==(Person &person) const
    {
        if (this->my_Name == person.my_Name && this->my_Age == person.my_Age)
        {
            return 1;
        }
        return 0;
    }
};

void demo1()
{
    Person p1("FH", 24);
    Person p2("HF", 24);

    // �˴� �� p1 == p2 �� p1.operator==(p2), ����һ�� bool���� ���� 0/1��int���ͣ�����if����ж�
    if (p1 == p2)
    {
        cout << "P1 = P2" << endl;
    }
    else
    {
        cout << "P1 != P2" << endl;
    }

    // �˴� �õ��ķ���ֵΪ int���͵� 0/1��������ɲ��� switch�����xie
    switch (p1 == p2)
    {
        case 0:
            cout << "P1 != P2" << endl;
            break;

        case 1:
            cout << "P1 = P2" << endl;
    }
}

int main()
{
    demo1();
    return 0;
}