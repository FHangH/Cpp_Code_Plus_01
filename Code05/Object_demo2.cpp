//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Person
{

public:
    // �������캯��
    Person()
    {
        cout << "Person�޲ι��캯��" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Person�вι��캯��" << endl;
    }

    Person(const Person &p) // ����������Կ�������
    {
        age = p.age;
        cout << "Person�������캯��" << endl;
    }

    ~Person()
    {
        cout << "Person�޲���������" << endl;
    }

    int age;
};

// ���ù��캯��
void demo()
{
    // ���ŷ�����
    // ע�⣺�޲ι��캯���������ţ�Person p1(); ����������Ϊ void func(); �������������ÿ�ʵ�ֵĹ��캯��
    Person p1; // �޲ι��캯��
    Person p2(10); // �вι��캯��
    Person p3(p2); // �������캯��

    cout << "p2 age: " << p2.age << endl;
    cout << "p3 age: " << p3.age << endl;

    // ��ʾ������
    Person p4;
    Person p5 = Person(20);
    Person p6 = Person(p5);
    // ע�� Person(20) ����д����Ϊ�������󣬳������޷�ʹ�ã�ִ����ᱻϵͳ��������
    // ע�� ���ÿ���������ʼ����������Person(p6) �������ȼ��� Person p6 , �� Person p6 �Ѿ���Ϊ����ʵ������

    // ��ʽת��������
    Person p7 = 10; // �ȼ��� Person p7 = Person(10);
    Person p8 = p7;

    system("pause");
}

int main()
{
    demo();
    return 0;
}
