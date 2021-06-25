//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Service;

class User
{
public:
    Service *service;

    User();

    void access1();

    void access2();
};

class Service
{
    // 通过friend关键字 声明User类中的成员函数access2() 是Service类的友元函数
    friend void User::access2();
private:
    string priContent;

public:
    string pubContent;

    Service();
};

// User类和Service类的构造函数和成员函数在类外创建，类内声明
User::User()
{
    service = new Service;
}

void User::access1()
{
    cout << "Access pubContent: " << service->pubContent << endl;
}

// 访问Service类中的私有成员变量的属性
void User::access2()
{
    cout << "Access priContent: " << service->priContent << endl;
}

Service::Service()
{
    priContent = "priContent";
    pubContent = "pubContent";
}

void demo()
{
    User user;
    user.access1();
    user.access2();
}

int main()
{
    demo();

    return 0;
}
