//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Cube
{
private:
    float c_Length = 1.0;
    float c_Width = 1.0;
    float c_Height = 1.0;

public:
    void setLength(float length)
    {
        c_Length = length;
    }

    float getLength() const
    {
        return c_Length;
    }

    void setWidth(float width)
    {
        c_Width = width;
    }

    float getWidth() const
    {
        return c_Width;
    }

    void setHeight(float height)
    {
        c_Height = height;
    }

    float getHeight() const
    {
        return c_Height;
    }

    float calculateArea() const
    {
        return 2 * c_Length * c_Width + 2 * c_Length * c_Height + 2 * c_Width * c_Height;
    }

    float calculateVolume() const
    {
        return c_Height * c_Width * c_Length;
    }

    // 成员函数判断两个立方体是否相等
    string calculateSameFromClass(Cube &c) const
    {
        if (c.getLength() == c_Length && c.getWidth() == c_Width && c.getHeight() == c_Height)
        {
            return "Class_Same!!!";
        }
        return "Class_No Same!!!";
    }
};

// 全局函数判断两个立方体是否相等
string calculateSameFromGlobal(Cube &c1, Cube &c2)
{
    if (c1.getHeight() == c2.getHeight() && c1.getWidth() == c2.getWidth() && c1.getLength() == c2.getLength())
    {
        return "Global_Same!!!";
    }
    return "Global_No Same!!!";
}

int main()
{
    Cube c1;
    Cube c2;
    Cube c3;

    c1.setHeight(10.0);
    c1.setLength(10.0);
    c1.setWidth(10.0);

    c2.setHeight(10.0);
    c2.setLength(10.0);
    c2.setWidth(10.0);

    c3.setHeight(20.0);
    c3.setLength(20.0);
    c3.setWidth(20.0);

    // 存储立方体的面积以及体积返回的值
    float cube_Area = c1.calculateArea();
    float cube_Volume = c1.calculateVolume();

    // 存储两种函数等到的判断返回结果
    string global_Same = calculateSameFromGlobal(c1, c2);
    string class_Same = c1.calculateSameFromClass(c3);

    cout << "Cube Area: " << cube_Area << endl;
    cout << "Cube Volume: " << cube_Volume << endl;

    cout << "Global_Same: " << global_Same << endl;
    cout << "Class_Same: " << class_Same << endl;

    return 0;
}
