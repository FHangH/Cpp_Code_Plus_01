//
// Created by FHang on 2020/8/6.
//
#include <iostream>

using namespace std;

// 无默认值参数，通过调用函数传入参数值
int func01(int a, int b, int c)
{
    return a + b + c;
}

// 有默认值参数，可以通过调用函数传入参数值，也可以不传参数值
int func02(int a = 10, int b = 20, int c = 30)
{
    return a + b + c;
}

// 当函数定义中，有默认参数值的一项形参，其之后的其他形参也要有形参
//int func03(int a = 10, int b, int c)
//{
//    return a + b + c;
//}

// 函数在声明时，形参有默认值，定义时，形参不得定义默认值
int func04(int a = 10, int b = 20);

//int func04(int a = 20, int b = 10)
//{
//    return a + b;
//}


int main()
{
    cout << "Func01: " << func01(10, 20, 30) << endl;
    cout << "Func02: " << func02() << endl;
    return 0;
}