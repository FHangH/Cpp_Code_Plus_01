//
// Created by Admin on 2021/6/22.
//
#include <iostream>

using namespace std;

class Base
{
public:
    int base_A;
protected:
    int base_B;
private:
    int base_C;
};

class Derived_1 : public Base
{
public:
    int derived_A;
};

void demo1()
{
    Derived_1 derived1{};
    cout << sizeof(derived1) << endl;
}

int main()
{
    demo1();
    return 0;
}