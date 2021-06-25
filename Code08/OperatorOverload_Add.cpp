//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Num
{
public:
    int num1;
    int num2;

    // 类中 成员函数 实现的 重载运算‘+’
    Num operator+(Num &n) const
    {
        Num my_n{};
        my_n.num1 = this->num1 + n.num1;
        my_n.num2 = this->num2 + n.num2;
        return my_n;
    }
};

// 全局函数 运算符重载的默认写法
Num operator+(Num &n1, Num &n2)
{
    Num my_n{};
    my_n.num1 = n1.num1 + n2.num1;
    my_n.num2 = n1.num2 + n2.num2;
    return my_n;
}

// 运算符函数 重载
Num operator+(Num &n, int num)
{
    Num my_n{};
    my_n.num1 = n.num1 + num;
    my_n.num2 = n.num2 + num;
    return my_n;
}

void demo1()
{
    Num n1{};
    n1.num1 = 10;
    n1.num2 = 10;

    Num n2{};
    n2.num1 = 5;
    n2.num2 = 5;

    Num n3{};
    // 重载后的简化写法
    n3 = n1 + n2;

    // 成员函数 重载的默认写法
    // n3 = n1.operator+(n2);

    // 全局函数 重载的默认写法
    // n3 = operator+(n1, n2);

    cout << "Operator: n3 = n1 + n2 = " << n3.num1 << endl;
    cout << "Operator: n3 = n1 + n2 = " << n3.num2 << endl;
}

void demo2()
{
    Num n4{};
    n4.num1 = 20;

    int num2 = 10;

    // 重载运算符函数的 重载写法 （Num类型 + int类型）
    Num n5 = n4 + num2;

    cout << "Operator: n5 = n4 + num2 = " << n5.num1 <<endl;
    cout << "Operator: n5 = n4 + num2 = " << n5.num2 <<endl;
}

int main()
{
    demo1();
    demo2();

    return 0;
}