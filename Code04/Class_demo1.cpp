//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

// ���� ��Բ��
class Circle
{
    // Ȩ�ޣ�������
public:
    // ����
    const double Pi = 3.14;
    double cir_R;

    // ����Բ�ܳ��ĺ���
    double calculatePerimeter()
    {
        return  2 * Pi * cir_R;
    }
};

int main()
{
    // ͨ��Circle�ഴ��һ��ʵ�������� c1
    Circle c1;
    // ͨ�����󣬶����е����� cir_R ���и�ֵ
    c1.cir_R = 10.0;
    double value = c1.calculatePerimeter();
    cout << "Circle perimeter : " << value << endl;

    return 0;
}
