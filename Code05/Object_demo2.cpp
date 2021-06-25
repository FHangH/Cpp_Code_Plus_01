//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Person
{

public:
    // 创建构造函数
    Person()
    {
        cout << "Person无参构造函数" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Person有参构造函数" << endl;
    }

    Person(const Person &p) // 将对象的属性拷贝进来
    {
        age = p.age;
        cout << "Person拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "Person无参析构函数" << endl;
    }

    int age;
};

// 调用构造函数
void demo()
{
    // 括号法调用
    // 注意：无参构造函数不用括号：Person p1(); 编译器会作为 void func(); 声明来处理，调用空实现的构造函数
    Person p1; // 无参构造函数
    Person p2(10); // 有参构造函数
    Person p3(p2); // 拷贝构造函数

    cout << "p2 age: " << p2.age << endl;
    cout << "p3 age: " << p3.age << endl;

    // 显示法调用
    Person p4;
    Person p5 = Person(20);
    Person p6 = Person(p5);
    // 注意 Person(20) 单独写出来为匿名对象，程序中无法使用，执行完会被系统立即回收
    // 注意 不用拷贝函数初始化匿名对象，Person(p6) 编译器等价于 Person p6 , 而 Person p6 已经作为对象被实例化了

    // 隐式转换法调用
    Person p7 = 10; // 等价于 Person p7 = Person(10);
    Person p8 = p7;

    system("pause");
}

int main()
{
    demo();
    return 0;
}
