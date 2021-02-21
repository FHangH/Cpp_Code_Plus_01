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

//1. 使用一个已经创建的对象来初始化一个新对象
void demo1()
{
    Person p1(10); // 有参构造
    Person p2(p1); // 拷贝构造
    cout << "p2 age: " << p2.p_age << endl;
}

//2. 值传递的方式给函数参数传值
void test2(Person person)
{

}

void demo2()
{
    Person p3; // 默认构造
    test2(p3); // 拷贝构造 - 此处 p3 为p3对象的副本（拷贝）
}

//3. 以值方式返回局部对象
Person test3()
{
    Person p4; // 默认构造
    cout << "p4 address: " << (int *) &p4 << endl;
    return p4; // 此处 p4 为p4对象的副本（拷贝）
}

void demo3()
{
    Person p5 = test3(); // 拷贝构造 - 得到 p4 的对象副本
    cout << "p5 address: " << (int *) &p5 << endl;
}

int main()
{
    //demo1();
    //demo2();
    demo3();
    return 0;
}
