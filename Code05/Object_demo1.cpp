//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test���캯��" << endl;
    }
    ~Test()
    {
        cout << "Test��������" << endl;
    }
};

void demo()
{
    Test t1;
}

int main()
{
    demo(); // ����ִ��ʱ���ù��캯��������ʱ������������
    Test t2; // ����ִ��ʱ���ù��캯��
    system("pause"); // �����ڴ˴���ͣ����������Ϊ�����ã����������ִ����������
    return 0;
}
