//
// Created by Admin on 2021/6/22.
//
#include <iostream>

using namespace std;

// ����ҳ�� �� ������ҳ�� ����ӵ�е�����
class BasePage
{
public:
    void pageHeader()
    {
        cout << " -��ҳ ������ ��½ ע�� (����)" << endl;
    }

    void pageLeft()
    {
        cout << " -Java C# C/C++ Php Golang (����)" << endl;
    }

    void pageFoot()
    {
        cout << " -�������� �������� ���� (����)" << endl;
    }
};

// ����ҳ�� �̳� ����ҳ������� ͬʱҲ���Զ��� һ������������
class JavaPage : public BasePage
{
public:
    JavaPage()
    {
        cout << "<<-- Java Web Page -->>" << endl;
    }

    ~JavaPage()
    {
        cout << endl;
    }

    void pageBody()
    {
        cout << " -Java_demo1 Java_demo2 Java_demo3 (Java)" << endl;
    }
};

// ����ҳ�� �̳� ����ҳ������� ͬʱҲ���Զ��� һ������������
class CPP : public BasePage
{
public:
    CPP()
    {
        cout << "<<-- C/C++ Web Page -->>" << endl;
    }

    ~CPP()
    {
        cout << endl;
    }

    void pageBody()
    {
        cout << " -C/C++_demo1 C/C++_demo2 C/C++_demo3 (C/C++)" << endl;
    }
};

void java_demo()
{
    JavaPage javaPage;
    javaPage.pageHeader();
    javaPage.pageLeft();
    javaPage.pageBody();
    javaPage.pageFoot();
}

void cpp_demo()
{
    CPP cpp;
    cpp.pageHeader();
    cpp.pageLeft();
    cpp.pageBody();
    cpp.pageFoot();
}

int main()
{
    java_demo();
    cpp_demo();
    return 0;
}