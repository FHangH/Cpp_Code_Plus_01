//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int age;

    Person(int age)
    {
        // this可以区分相同名称的变量
        this->age = age;
    }

    //返回的是Person对象的引用
    Person &addPersonAge(Person &p)
    {
        this->age += p.age;
        return *this; // 返回对象为 *this
    }
};

void func1()
{
    Person p1(10);
    cout << "p1 Age: " << p1.age << endl;
}

void func2()
{
    Person p2(20);
    Person p3(20);
    // 链式编程思想
    // p3.addPersonAge(p2) 的执行结果是返回 对象的本身，所以可以链式调用成员函数
    p3.addPersonAge(p2).addPersonAge(p2).addPersonAge(p2);
    cout << "p3 Age: " << p3.age << endl;
}

int main()
{
    func1();
    func2();
    return 0;
}

