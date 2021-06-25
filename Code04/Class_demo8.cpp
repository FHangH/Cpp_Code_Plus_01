//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

// ����
class Point
{
private:
    // ��X����
    double p_X;
    // ��Y����
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

// Բ��
class Circle
{
private:
    // Բ�İ뾶
    double c_Radius;
    // Բ�ĵ�����
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

// ����Բ���֮��Ĺ�ϵ
void calculateCircleAndPoint(Circle &c, Point &p)
{
    // Բ�ĵ�X - ��X
    double ppDistanceX = c.getCenter().get_X() - p.get_X();
    // Բ�ĵ�Y - ��Y
    double ppDistanceY = c.getCenter().get_Y() - p.get_X();
    // Բ�İ뾶
    double rDistanceR = c.getRadius();

    // �ֱ���㣺Բ��X����X��ƽ��ֵ��Բ��Y����Y��ƽ��ֵ��Բ�뾶��ƽ��ֵ
    double powX = pow(ppDistanceX, 2);
    double powY = pow(ppDistanceY, 2);
    double powR = pow(rDistanceR, 2);

    // �ȵ��жϹ�ϵֵ ��x - x1��^2 + (y - y1)^2 = r^2
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
    // ʵ����һ��Բ
    Circle c{};
    // ʵ����һ��Բ�ĵ����� �� �������
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
