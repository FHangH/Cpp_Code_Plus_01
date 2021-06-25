//
// Created by Admin on 2021/6/22.
//
#include <iostream>

using namespace std;

// 公共页面 是 其子类页面 公用拥有的属性
class BasePage
{
public:
    void pageHeader()
    {
        cout << " -首页 公开课 登陆 注册 (公共)" << endl;
    }

    void pageLeft()
    {
        cout << " -Java C# C/C++ Php Golang (公共)" << endl;
    }

    void pageFoot()
    {
        cout << " -帮助中心 交流合作 友链 (公共)" << endl;
    }
};

// 子类页面 继承 公共页面的属性 同时也可自定义 一部分属性内容
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

// 子类页面 继承 公共页面的属性 同时也可自定义 一部分属性内容
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