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

    // 重载 赋值运算符 让每一个对象 都各自对应一块堆区，避免浅拷贝带来的多个对象指向同一堆区，在析构函数的作用下，重复释放堆区
    Person &operator=(Person &person)
    {
        // 编译器 默认 浅拷贝
        // my_Age = person.my_Age;

        // 1. 在 p2 = p1 中，p2在堆区中已有属性值，所以在进行深拷贝之前，先释放 p2 堆区
        if (my_Age != nullptr)
        {
            delete my_Age;
            my_Age = nullptr;
        }

        // 2. 进行 深拷贝
        my_Age = new int(*person.my_Age);

        return *this;
    }
};

void demo1()
{
    Person p1(18);
    Person p2(24);

    // 该 赋值操作 为 浅拷贝
    p2 = p1;

    // 浅拷贝时 堆区 my_Age 占有 的内存 被析构函数 重复释放
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