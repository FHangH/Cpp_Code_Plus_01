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
        cout << "Person无参构造函数" << endl;
    }

    Person(int a)
    {
        p_age = a;
        cout << "Person有参构造函数" << endl;
    }

    Person(const Person &person)
    {
        p_age = person.p_age;
        cout << "Person拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "Person无参析构函数" << endl;
    }
};

//1. 如果自定义有参构造函数，编译器不提供默构造函数，但提供默认拷贝构造函数
void demo1() // 默认构造函数不会被调用
{
    Person p1(10);
    Person p2(p1);
}

//2. 如果自定义拷贝构造函数，编译器不提供其他构造函数
void demo2() // 自定义拷贝构造函数后，其他构造函数需自己添加
{
 Person p3;
 Person p4(p3);
}

int main()
{
    demo1();
    demo2();
    return 0;
}
