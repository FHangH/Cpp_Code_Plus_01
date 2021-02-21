//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Room
{
    // 将一个全局函数 在类中 通过friend关键在修饰 声明后，该全局函数可以访问 类中私有的成员变量属性
    friend void Func_Friend(Room *room);
private:
    string privateRoom;

public:
    string publicRoom;

    Room()
    {
        privateRoom = "privateRoom Access Succeeded";
        publicRoom = "publicRoom Access Succeeded";
    }
};

void Func_Friend(Room *room)
{
    cout << "Friend Function Access: " << room->publicRoom << endl;
    // 声明友元后，可以正常访问类中的私有成员变量
    cout << "Friend Function Access: " << room->privateRoom << endl;
}

void Test()
{
    Room room;
    Func_Friend(&room);
}

int main()
{
    Test();
    return 0;
}
