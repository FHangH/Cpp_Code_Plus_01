//
// Created by FHang on 2020/8/5.
//
#include <iostream>

using namespace std;

//创建一个返回int类型的地址函数
int *newKeyDemo()
{
    //new操作符开辟的数据会返回一个指针
    int *p_a = new int(10);
    //返回指针
    return p_a;
}

void printDemo1Info()
{
    //创建一个指针接受返回值
    int *Info1 = newKeyDemo();
    cout << *Info1 << endl;
    //delete 操作符会释放 new在堆中的数据
    delete Info1;
    cout << *Info1 << endl;
}

//利用new操作符创建数组
void printDemo2Info()
{
    int *p_arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        p_arr[i] = i + 1;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << p_arr[j] << " ";
    }

    delete[] p_arr;

    cout << endl;

    for (int j = 0; j < 10; j++)
    {
        cout << p_arr[j] << " ";
    }
}

int main()
{
    printDemo1Info();
    printDemo2Info();
    return 0;
}