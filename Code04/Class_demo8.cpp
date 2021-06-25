//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

// 点类
class Point
{
private:
    // 点X坐标
    double p_X;
    // 点Y坐标
    double p_Y;

public:
    void set_X(double x)
    {
        p_X = x;
    }
    double get_X() const
    {
        return p_X;
    }

    void set_Y(double y)
    {
        p_Y = y;
    }
    double get_Y() const
    {
        return p_Y;
    }
};

// 圆类
class Circle
{
private:
    // 圆的半径
    double c_Radius;
    // 圆心的坐标
    Point c_Center;

public:
    void setRadius(double radius)
    {
        c_Radius = radius;
    }
    double getRadius() const
    {
        return c_Radius;
    }

    void setCenter(Point &center)
    {
        c_Center = center;
    }
    Point getCenter()
    {
        return c_Center;
    }
};

// 计算圆与点之间的关系
void calculateCircleAndPoint(Circle &c, Point &p)
{
    // 圆心点X - 点X
    double ppDistanceX = c.getCenter().get_X() - p.get_X();
    // 圆心点Y - 点Y
    double ppDistanceY = c.getCenter().get_Y() - p.get_X();
    // 圆的半径
    double rDistanceR = c.getRadius();

    // 分别计算：圆心X到点X的平方值，圆心Y到点Y的平方值，圆半径的平方值
    double powX = pow(ppDistanceX, 2);
    double powY = pow(ppDistanceY, 2);
    double powR = pow(rDistanceR, 2);

    // 等到判断关系值 （x - x1）^2 + (y - y1)^2 = r^2
    double ppDistance = powX + powY;
    double rDistance = powR;


    if (ppDistance == rDistance)
    {
        cout << "Point On The Circle" << endl;
    }
    else if (ppDistance < rDistance)
    {
        cout << "Point Within The Circle" << endl;
    }
    else if (ppDistance > rDistance)
    {
        cout << "Point Outside The Circle" << endl;
    }
}

int main()
{
    // 实例化一个圆
    Circle c{};
    // 实例化一个圆心的坐标 和 点的坐标
    Point p_center{};
    Point p{};

    p_center.set_X(10.0);
    p_center.set_Y(0);
    p.set_X(10.0);
    p.set_Y(10.0);
    c.setRadius(10.0);
    c.setCenter(p_center);

    calculateCircleAndPoint(c, p);

    return 0;
}
