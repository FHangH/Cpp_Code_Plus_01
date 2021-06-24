//
// Created by FHang on 2021/6/24 14:56
//
#include <iostream>

using namespace std;

class Animal
{
public:
    // 使用关键字 virtual，使得变成虚函数
    virtual void speak()
    {
        cout << "Animal Speaking" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog Speaking" << endl;
    }
};

// 该函数内传入引用对象调用的speak()函数的地址是早绑定，编译阶段确定引用的 Animal类的对象地址，后面调用时，传入Cat对象，不改变结果（静态多态）
// 将基类Animal中的 函数 speak() 设为虚函数，运行时才确定地址，后面调用时，传入Cat对象，引用的便是Cat的对象地址（动态多态）
void doSpeak(Animal &animal)
{
    // speak()早绑定时，默认是传入基类Animal的引用对象地址
    // speak()使用virtual后是晚绑定时，传入指定引用对象地址
    animal.speak();
}

void demo()
{
    Cat cat;
    Dog dog;
    doSpeak(cat);
    doSpeak(dog);
}

int main()
{
    demo();
    return 0;
}