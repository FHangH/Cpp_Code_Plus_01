//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int p_age;
    int *p_height;

    Person()
    {
        cout << "Person�޲ι��캯��" << endl;
    }

    Person(int a, int height)
    {
        cout << "Person�вι��캯��" << endl;
        p_age = a;
        p_height = new int(height);
    }

    // ͨ������ķ������ǳ�������������� �������󣬱�����Ĭ��ִ�иù��캯��
    Person(const Person &person)
    {
        cout << "Person�������캯��" << endl;
        p_age = person.p_age;
        p_height = new int(*person.p_height); // �Զ���ĸ�ֵ��ʽ�����п��ٿռ�
        //p_height = person.p_height; // ������Ĭ�ϵĸ�ֵ��ʽ
    }

// ǳ����ʱ��p2 �ڵ� p_height ���ͷţ�p1 �޿��ͷţ�����ִ�зǷ�����������
// ���ʱ��p2 �ڵ� p_height �ǵ����Ķ����ռ䱻�ͷţ���Ӱ�� p1 �� p_height �ڴ��ͷţ���ȷ��
    ~Person()
    {
        cout << "Person��������" << endl;
        if (p_height != NULL)
        {
            delete p_height;
            p_height = NULL;
        }
    }
};

void demoTest() // ջ���ڴ��ͷŵ�˳�����Ƚ������������������ �ͷ��ڴ��Ǵ� p2 ��ʼ
{
    Person p1(10, 170);
    cout << "p1 age: " << p1.p_age << " p1 height: " << *p1.p_height << endl;
    Person p2(p1); // �������ṩ��ǳ���캯������������p1ָ��ָ����ڴ�ռ�
    cout << "p2 age: " << p2.p_age << " p2 height: " << *p2.p_height << endl;
}

int main()
{
    demoTest();
    return 0;
}
