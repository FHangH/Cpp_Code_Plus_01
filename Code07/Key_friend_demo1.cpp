//
// Created by FHang on 2020/8/11.
//
#include <iostream>

using namespace std;

class Room
{
    // ��һ��ȫ�ֺ��� ������ ͨ��friend�ؼ������� �����󣬸�ȫ�ֺ������Է��� ����˽�еĳ�Ա��������
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
    // ������Ԫ�󣬿��������������е�˽�г�Ա����
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
