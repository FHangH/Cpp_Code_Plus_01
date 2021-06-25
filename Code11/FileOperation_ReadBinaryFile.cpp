//
// Created by FHang on 2021/6/25 17:00
//
#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
    string f_Name;
    int f_Age;
};

void demo()
{
    Person person;
    ifstream ifs;
    ifs.open(R"(C:\Users\Admin\Desktop\Person.txt)", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "Open File Failed" << endl;
        return;
    }

    ifs.read((char *) &person, sizeof(Person));
    cout << "Name = " << person.f_Name << endl;
    cout << "Age = " << person.f_Age << endl;

    ifs.close();
}

int main()
{
    demo();
    return 0;
}