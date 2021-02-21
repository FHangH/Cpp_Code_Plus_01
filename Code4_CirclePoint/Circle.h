//
// Created by FHang on 2020/8/7.
//

#ifndef CODEDEMO_CIRCLE_H
#define CODEDEMO_CIRCLE_H
#include <iostream>
#include "Point.h"

using namespace std;

class Circle
{
private:
    // 圆的半径
    double c_Radius;
    // 圆心的坐标
    Point c_Center;

public:
    void setRadius(double radius);

    double getRadius();

    void setCenter(Point &center);

    Point getCenter();

};


#endif //CODEDEMO_CIRCLE_H
