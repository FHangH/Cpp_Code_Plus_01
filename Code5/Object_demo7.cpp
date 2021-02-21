//
// Created by FHang on 2020/8/10.
//
#include <iostream>

using namespace std;

class Phone
{
public:
    string p_Name;

    Phone(string name)
    {
        cout << "Phone 构造函数调用 (先构造)" << endl;
        p_Name = name;
    }

    ~Phone()
    {
        cout << "Phone 析构函数调用" << endl;
    }
};

class Human
{
public:
    string h_Name;
    Phone h_Phone;

    Human(string name, string phone) : h_Name(name), h_Phone(phone)
    {
        cout << "Human 构造函数调用" << endl;
    }

    ~Human()
    {
        cout << "Human 析构函数调用 (先析构)" << endl;
    }

};

void demo()
{
    Human h("FH", "Apple");
    cout << "Name: " << h.h_Name << " Phone: " << h.h_Phone.p_Name << endl;
}

int main()
{
    demo();
    return 0;
}
