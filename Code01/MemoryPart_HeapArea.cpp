//
// Created by FHang on 2020/8/5.
//
#include <iostream>

using namespace std;

int *demoFunc()
{
    //通过指针地址存放 new 关键字对int类型的值在堆中开辟的内存所在的地址
    //这个 int的值存放在堆中，改函数执行结束后，依然存在
    int *p_a = new int(10);
    return p_a;
}

int main()
{
    int *p_a = demoFunc();
    cout << *p_a << endl;
    cout << *p_a << endl; //函数执行结束后，指针指向的指针内存空间依然存在，所以可以正常得到内存中的值
    return 0;
}