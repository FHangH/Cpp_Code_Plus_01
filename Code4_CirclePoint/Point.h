//
// Created by FHang on 2020/8/7.
//

#ifndef CODEDEMO_POINT_H
#define CODEDEMO_POINT_H
#include <iostream>

using namespace std;

class Point
{
private:
    // ��X����
    double p_X;
    // ��Y����
    double p_Y;

public:
    void set_X(double x);

    double get_X();

    void set_Y(double y);

    double get_Y();
};


#endif //CODEDEMO_POINT_H
