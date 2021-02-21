//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

// 先声明一个 Service类
class Service;

class User
{
private:
    // 定义一个 私有 Service类对象的指针
    Service *service;

public:
    // 构造函数和成员函数写在类外
    User();
    void access();
};

class Service
{
    // 将 User类 声明为 Service类的友元类 使得User类的对象是 Service类得到友元对象，可以访问私有成员变量的属性
    friend class User;
private:
    string priContent;

public:
    string pubContent;

    // 构造函数声明在外
    Service();
};

// 通过User类的作用域创建一个User类的构造函数，初始化User类中的成员变量的属性值
User::User()
{
    // 创建一个Service类的对象指针
    service = new Service;
}

// 通过User类的作用域创建一个User类的成员函数
void User::access()
{
    cout << "User Access Service: " << service->pubContent << endl;
    // 当User类成为Service类的友元后，可以在User的函数内访问 Service类中的私有成员变量属性
    cout << "User Access Service: " << service->priContent << endl;
}

// 通过Service类的作用域创建一个Service类的构造函数
Service::Service()
{
    this->priContent = "priContent";
    this->pubContent = "pubContent";
}

void demo()
{
    User user;
    user.access();
}

int main()
{
    demo();
    return 0;
}
