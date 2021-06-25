//
// Created by FHang on 2021/6/24 11:11
//
#include <iostream>

using namespace std;

class Animal
{
public:
    int age;

    Animal()
    {
        age = 10;
    }
};

// 利用 虚继承 解决菱形继承的问题
// 使用 关键字 virtual ，两个派生类继承同一个父类时，两个派生类 可虚拟共享同一个 父类中继承来的成员
// Animal 类，称为 虚基类
class Tiger : virtual public Animal{};

class Lion : virtual public Animal{};

class LionTiger : public Tiger, public Lion{};

void demo1()
{
    LionTiger lionTiger;

    // 菱形继承，两个父类拥有相同的数据，通过作用域区分，同时造成资源浪费，通过 虚继承 解决问题
    lionTiger.Tiger::age = 20;
    lionTiger.Lion::age = 30;

    cout << "Tiger Age = " << lionTiger.Tiger::age << endl;
    cout << "Lion Age = " << lionTiger.Lion::age << endl;
}

int main()
{
    demo1();
    return 0;
}