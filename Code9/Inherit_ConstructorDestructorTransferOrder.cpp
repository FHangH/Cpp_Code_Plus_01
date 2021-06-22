//
// Created by Admin on 2021/6/22.
//
#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor Transfer" << endl;
    }

    ~Base()
    {
        cout << "Base Destructor Transfer" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor Transfer" << endl;
    }

    ~Derived()
    {
        cout << "Derived Destructor Transfer" << endl;
    }
};

void demo()
{
    Derived derived;
}

int main()
{
    demo();
    return 0;
}