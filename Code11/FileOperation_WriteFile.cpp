//
// Created by FHang on 2021/6/25 15:56
//
#include <iostream>
#include <fstream>

using namespace std;

void demo()
{
    ofstream ofs;
    ofs.open(R"(C:\Users\Admin\Desktop\demo.txt)", ios::out);

    ofs << "Hello World" << endl;
    ofs << "Hello FHang" << endl;

    ofs.close();

}

int main()
{
    demo();
    return 0;
}