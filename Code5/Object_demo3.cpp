//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int p_age;

    Person()
    {
        cout << "Person�޲ι��캯��" << endl;
    }

    Person(int a)
    {
        p_age = a;
        cout << "Person�вι��캯��" << endl;
    }

    Person(const Person &person)
    {
        p_age = person.p_age;
        cout << "Person�������캯��" << endl;
    }

    ~Person()
    {
        cout << "Person�޲���������" << endl;
    }
};

//1. ʹ��һ���Ѿ������Ķ�������ʼ��һ���¶���
void demo1()
{
    Person p1(10); // �вι���
    Person p2(p1); // ��������
    cout << "p2 age: " << p2.p_age << endl;
}

//2. ֵ���ݵķ�ʽ������������ֵ
void test2(Person person)
{

}

void demo2()
{
    Person p3; // Ĭ�Ϲ���
    test2(p3); // �������� - �˴� p3 Ϊp3����ĸ�����������
}

//3. ��ֵ��ʽ���ؾֲ�����
Person test3()
{
    Person p4; // Ĭ�Ϲ���
    cout << "p4 address: " << (int *) &p4 << endl;
    return p4; // �˴� p4 Ϊp4����ĸ�����������
}

void demo3()
{
    Person p5 = test3(); // �������� - �õ� p4 �Ķ��󸱱�
    cout << "p5 address: " << (int *) &p5 << endl;
}

int main()
{
    //demo1();
    //demo2();
    demo3();
    return 0;
}
