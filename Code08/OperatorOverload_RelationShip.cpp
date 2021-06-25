//
// Created by Admin on 2021/6/20.
//
#include <iostream>

using namespace std;

class Person
{
public:
    string my_Name;
    int my_Age;

    Person(string name, int age)
    {
        my_Name = std::move(name);
        my_Age = age;
    }

    // 重载 关系运算符 返回值类型可以为：int类型 0/1；或者 bool类型
    // 此次 重载的关系运算符为 ==，其他例如：!=, <, > ...同理
    int operator==(Person &person) const
    {
        if (this->my_Name == person.my_Name && this->my_Age == person.my_Age)
        {
            return 1;
        }
        return 0;
    }
};

void demo1()
{
    Person p1("FH", 24);
    Person p2("HF", 24);

    // 此处 的 p1 == p2 是 p1.operator==(p2), 返回一个 bool类型 或者 0/1的int类型，进行if语句判断
    if (p1 == p2)
    {
        cout << "P1 = P2" << endl;
    }
    else
    {
        cout << "P1 != P2" << endl;
    }

    // 此次 得到的返回值为 int类型的 0/1，所以亦可采用 switch语句来xie
    switch (p1 == p2)
    {
        case 0:
            cout << "P1 != P2" << endl;
            break;

        case 1:
            cout << "P1 = P2" << endl;
    }
}

int main()
{
    demo1();
    return 0;
}