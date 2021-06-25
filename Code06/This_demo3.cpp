//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Demo
{
public:
    int age = 10;

    void func1()
    {
        cout << "func1" << endl;
    }

    void func2()
    {
        // 为保证安全性，防止传入的空指针调用成员变量导致崩溃
        if (this == NULL)
        {
            return;
        }
        // 此处的this 《==》 this.age this是空的，无实际对象，无法调用
        cout << "func2 " << age << endl;
    }
};

void test()
{
    // 创建一个对象的地址为空
    Demo *d = NULL;
    d->func1();
    d->func2();
}

int main()
{
    test();
    return 0;
}
