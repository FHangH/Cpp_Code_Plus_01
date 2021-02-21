//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class C1
{
    int a;
};

struct C2
{
    int a;
};

int main()
{
    C1 c1;
    C2 c2;

    //c1.a = 10; // class默认私有，无法访问
    c2.a = 10; // struct默认公开，可以访问

    return 0;
}

