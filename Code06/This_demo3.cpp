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
        // Ϊ��֤��ȫ�ԣ���ֹ����Ŀ�ָ����ó�Ա�������±���
        if (this == NULL)
        {
            return;
        }
        // �˴���this ��==�� this.age this�ǿյģ���ʵ�ʶ����޷�����
        cout << "func2 " << age << endl;
    }
};

void test()
{
    // ����һ������ĵ�ַΪ��
    Demo *d = NULL;
    d->func1();
    d->func2();
}

int main()
{
    test();
    return 0;
}
