//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

// 类名 （圆）
class Circle
{
    // 权限（公开）
public:
    // 属性
    const double Pi = 3.14;
    double cir_R;

    // 计算圆周长的函数
    double calculatePerimeter()
    {
        return  2 * Pi * cir_R;
    }
};

int main()
{
    // 通过Circle类创建一个实例（对象） c1
    Circle c1;
    // 通过对象，对类中的属性 cir_R 进行赋值
    c1.cir_R = 10.0;
    double value = c1.calculatePerimeter();
    cout << "Circle perimeter : " << value << endl;

    return 0;
}
