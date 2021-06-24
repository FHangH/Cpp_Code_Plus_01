//
// Created by FHang on 2021/6/24 20:24
//
#include <iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal Construct Transfer" << endl;
    }
    // 虚析构，此时释放父类时，会调用子类的析构函数
    virtual ~Animal()
    {
        cout << "Animal Destruct Transfer" << endl;
    }
    // 纯虚析构，在类外实现具体
    // virtual ~Animal() = 0;

    // 纯虚函数
    virtual void speak() = 0;
};

// 类外实现的 纯虚析构
//Animal::~Animal()
//{
//    cout << "Animal Destruct Transfer" << endl;
//}

class Cat : public Animal
{
public:
    string *cat_Name;

    Cat(string name)
    {
        cout << "Cat Construct Transfer" << endl;
        cat_Name = new string(name);
    }
    ~Cat()
    {
        if (cat_Name != nullptr)
        {
            cout << "Cat Destruct Transfer" << endl;
            delete cat_Name;
            cat_Name = nullptr;
        }
    }

    virtual void speak()
    {
        cout << *cat_Name << "Cat is Speaking" << endl;
    }
};

void demo()
{
    // 父类指针指向子类调用
    Animal *animal = new Cat("Tom");
    animal->speak();
    // 释放父类对象析构时，不会调用子类的析构函数，出现内存泄露
    // 在基类的析构函数前 加入关键字 virtual，即可解决问题
    delete animal;
}

int main()
{
    demo();
    return 0;
}