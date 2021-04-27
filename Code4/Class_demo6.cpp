//
// Created by FHang on 2020/8/7.
//
#include <iostream>

using namespace std;

class Person
{
public:
    void setName(string name)
    {
        p_Name = name;
    }
    string getName()
    {
        return p_Name;
    }

    int getAge()
    {
        p_Age = 24;
        return p_Age;
    }

    void setID(int id)
    {
        p_ID = id;
    }

private:
    string p_Name; // �ɶ���д
    int p_Age; // �ɶ�
    int p_ID; // ��д
};

int main()
{
    Person p;
    p.setName("FH");
    p.setID(123455);
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
