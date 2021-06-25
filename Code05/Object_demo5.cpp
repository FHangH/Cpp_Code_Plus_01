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
        cout << "Person无参构造函数" << endl;
    }

    Person(int a, int height)
    {
        cout << "Person有参构造函数" << endl;
        p_age = a;
        p_height = new int(height);
    }

    // 通过深拷贝的方法解决浅拷贝带来的问题 深拷贝定义后，编译器默认执行该构造函数
    Person(const Person &person)
    {
        cout << "Person拷贝构造函数" << endl;
        p_age = person.p_age;
        p_height = new int(*person.p_height); // 自定义的赋值方式，堆中开辟空间
        //p_height = person.p_height; // 编译器默认的赋值方式
    }

// 浅拷贝时，p2 内的 p_height 被释放，p1 无可释放，程序执行非法操作（报错）
// 深拷贝时，p2 内的 p_height 是单独的堆区空间被释放，不影响 p1 的 p_height 内存释放（正确）
    ~Person()
    {
        cout << "Person析构函数" << endl;
        if (p_height != NULL)
        {
            delete p_height;
            p_height = NULL;
        }
    }
};

void demoTest() // 栈区内存释放的顺序是先进后出，所以析构函数 释放内存是从 p2 开始
{
    Person p1(10, 170);
    cout << "p1 age: " << p1.p_age << " p1 height: " << *p1.p_height << endl;
    Person p2(p1); // 编译器提供的浅构造函数，解析的是p1指针指向的内存空间
    cout << "p2 age: " << p2.p_age << " p2 height: " << *p2.p_height << endl;
}

int main()
{
    demoTest();
    return 0;
}
