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
    // ͨ��friend�ؼ��� ����User���еĳ�Ա����access2() ��Service�����Ԫ����
    friend void User::access2();
private:
    string priContent;

public:
    string pubContent;

    Service();
};

// User���Service��Ĺ��캯���ͳ�Ա���������ⴴ������������
User::User()
{
    service = new Service;
}

void User::access1()
{
    cout << "Access pubContent: " << service->pubContent << endl;
}

// ����Service���е�˽�г�Ա����������
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
