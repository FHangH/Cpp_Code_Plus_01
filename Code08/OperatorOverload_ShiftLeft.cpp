//
// Created by Admin on 2021/4/29.
//
#include <iostream>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &c, Person &p);
private:
    string name;
    int age{};

public:
    Person(string name, int age);
};

Person::Person(string newName, int newAge)
{
    name = std::move(newName);
    age = newAge;
}

ostream &operator<<(ostream &c, Person &p)
{
    cout << "Person Name: " << p.name << endl;
    cout << "Person Age: " << p.age << endl;
    return c;
}

void demo()
{
    Person p("FHang", 24);
    cout << p << endl;
}

int main()
{
    demo();
    return 0;
}