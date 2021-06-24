//
// Created by FHang on 2021/6/24 16:39
//
#include <iostream>

using namespace std;

class Calculator
{
public:
    int num1;
    int num2;

    float getResult(string f_operator)
    {
        if (f_operator == "+")
        {
            return num1 + num2;
        }
        if (f_operator == "-")
        {
            return num1 - num2;
        }
        if (f_operator == "*")
        {
            return num1 * num2;
        }
    }
};

void demo()
{
    Calculator calculator{};
    calculator.num1 = 10;
    calculator.num2 = 15;

    cout << calculator.num1 << " + " << calculator.num2 << " = " << calculator.getResult("+") << endl;
    cout << calculator.num1 << " - " << calculator.num2 << " = " << calculator.getResult("-") << endl;
    cout << calculator.num1 << " * " << calculator.num2 << " = " << calculator.getResult("*") << endl;
}

int main()
{
    demo();
    return 0;
}