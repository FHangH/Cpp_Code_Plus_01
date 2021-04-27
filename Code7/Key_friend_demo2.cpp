//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

// ������һ�� Service��
class Service;

class User
{
private:
    // ����һ�� ˽�� Service������ָ��
    Service *service;

public:
    // ���캯���ͳ�Ա����д������
    User();
    void access();
};

class Service
{
    // �� User�� ����Ϊ Service�����Ԫ�� ʹ��User��Ķ����� Service��õ���Ԫ���󣬿��Է���˽�г�Ա����������
    friend class User;
private:
    string priContent;

public:
    string pubContent;

    // ���캯����������
    Service();
};

// ͨ��User��������򴴽�һ��User��Ĺ��캯������ʼ��User���еĳ�Ա����������ֵ
User::User()
{
    // ����һ��Service��Ķ���ָ��
    service = new Service;
}

// ͨ��User��������򴴽�һ��User��ĳ�Ա����
void User::access()
{
    cout << "User Access Service: " << service->pubContent << endl;
    // ��User���ΪService�����Ԫ�󣬿�����User�ĺ����ڷ��� Service���е�˽�г�Ա��������
    cout << "User Access Service: " << service->priContent << endl;
}

// ͨ��Service��������򴴽�һ��Service��Ĺ��캯��
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
