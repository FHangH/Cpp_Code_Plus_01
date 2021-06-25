//
// Created by FHang on 2021/6/25 16:06
//
#include <iostream>
#include <fstream>

using namespace std;

void demo()
{
    ifstream ifs;
    ifs.open(R"(C:\Users\Admin\Desktop\demo.txt)", ios::in);

    if (!ifs.is_open())
    {
        cout << "Open File Failed" << endl;
        return;
    }

    // 读数据，四种
    // 1. 一行行读，不喜欢这个
//    char buf[1024] = {0};
//    while (ifs >> buf)
//    {
//        cout << buf << endl;
//    }

    // 2. 一行行读，感觉一般
//    char buf[1024] = {0};
//    while (ifs.getline(buf, sizeof(buf)))
//    {
//        cout << buf << endl;
//    }

    // 3. 一行行读，个人一般常用
    string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;
    }

    // 4. 一个个读，慢
//    char buf;
//    while ((buf = ifs.get()) != EOF)
//    {
//        cout << buf;
//    }

    ifs.close();
}

int main()
{
    demo();
    return 0;
}