//
// Created by FHang on 2021/6/24 18:46
//
#include <iostream>

using namespace std;

class AbstractCalculator
{
public:
    int num1;
    int num2;

    virtual float getResult()
    {
        return 0.0;
    }
};

class SumCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return float (num1 + num2);
    }
};

class SubCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return float (num1 - num2);
    }
};

class MulCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return float (num1 * num2);
    }
};

void demo()
{
    // 父类指针或引用指向子类执行
    AbstractCalculator *abs;
    // Sum
    abs = new SumCalculator;
    abs->num1 = 10;
    abs->num2 = 15;
    cout << abs->num1 << " + " << abs->num2 << " = " << abs->getResult() << endl;
    delete abs;

    // Sub
    abs = new SubCalculator;
    abs->num1 = 10;
    abs->num2 = 15;
    cout << abs->num1 << " - " << abs->num2 << " = " << abs->getResult() << endl;
    delete abs;

    // Mul
    abs = new MulCalculator;
    abs->num1 = 10;
    abs->num2 = 15;
    cout << abs->num1 << " * " << abs->num2 << " = " << abs->getResult() << endl;
    delete abs;
}

int main()
{
    demo();
    return 0;
}