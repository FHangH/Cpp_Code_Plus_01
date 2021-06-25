//
// Created by FHang on 2020/8/7.
//

#include "Circle.h"

void Circle::setRadius(double radius)
{
    c_Radius = radius;
}
double Circle::getRadius()
{
    return c_Radius;
}

void Circle::setCenter(Point &center)
{
    c_Center = center;
}
Point Circle::getCenter()
{
    return c_Center;
}