//
// Created by FHang on 2021/6/24 19:29
//
#include <iostream>

using namespace std;

class AbstractMakeDrinks
{
public:
    virtual void boilWater() = 0;
    virtual void brew() = 0;
    virtual void pourIntoCup() = 0;
    virtual void addAccessories() = 0;

    void makeDrinks()
    {
        boilWater();
        brew();
        pourIntoCup();
        addAccessories();
    }

    ~AbstractMakeDrinks()
    {
        cout << endl;
    }
};

class MakeCoffee : public AbstractMakeDrinks
{
public:
    MakeCoffee()
    {
        cout << "< -- Make Coffee -->" << endl;
    }
    virtual void boilWater()
    {
        cout << "BoilWater" << endl;
    }
    virtual void brew()
    {
        cout << "Brew Coffee" << endl;
    }
    virtual void pourIntoCup()
    {
        cout << "Pour Coffee Into The Cup" << endl;
    }
    virtual void addAccessories()
    {
        cout << "Add Accessories Like Milk" << endl;
    }
};

class MakeTea : public AbstractMakeDrinks
{
public:
    MakeTea()
    {
        cout << "< -- Make Tea -->" << endl;
    }
    virtual void boilWater()
    {
        cout << "BoilWater" << endl;
    }
    virtual void brew()
    {
        cout << "Brew Tea" << endl;
    }
    virtual void pourIntoCup()
    {
        cout << "Pour Tea Into The Cup" << endl;
    }
    virtual void addAccessories()
    {
        cout << "Add Accessories Like Sugar" << endl;
    }
};

// 参数是 指针地址 的写法
void makeDrinks(AbstractMakeDrinks *abstractMakeDrinks)
{
    abstractMakeDrinks->makeDrinks();
    delete abstractMakeDrinks;
}

void makeDrinks_Coffee()
{
    makeDrinks(new MakeCoffee);
}

void makeDrinks_Tea()
{
    makeDrinks(new MakeTea);
}

// 参数是 对象引用 的写法
//void makeDrinks(AbstractMakeDrinks &abstractMakeDrinks)
//{
//    abstractMakeDrinks.makeDrinks();
//    delete &abstractMakeDrinks;
//}
//
//void makeDrinks_Coffee()
//{
//    makeDrinks(*new MakeCoffee);
//}
//
//void makeDrinks_Tea()
//{
//    makeDrinks(*new MakeTea);
//}

int main()
{
    makeDrinks_Coffee();
    makeDrinks_Tea();
    return 0;
}