//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    // mutable 修饰的成员变量
    mutable int id;

    // this指针是指针常量，指针的指向不可修改
    // const Person *const this；
    // 常量函数的const 修饰的this指针 让this指针指向的值也不可修改
    void printAge() const
    {
        // this->age = 10;

        // 常函数可以修改 mutable的值
        this->id = 10;
    }

    void printID()
    {

    }
};

void demo()
{
    // 常对象
    const Person p{};

    p.printAge();
    //p.printID(); // 常对象只能调用 常函数

    //p.age = 100; // 常对象内的成员变量属性值不能修改
    p.id = 100; // 常对象内的mutable成员变量属性值能修改
}

int main()
{
    demo();
    return 0;
}
