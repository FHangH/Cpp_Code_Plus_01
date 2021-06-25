//
// Created by FHang on 2021/6/25 14:06
//
#include <iostream>

using namespace std;

// 抽象 CPU类
class CPU
{
public:
    virtual void calculation() = 0;
};

// 抽象 显卡类
class GraphicsCard
{
public:
    virtual void display() = 0;
};

// 抽象 内存类
class RAM
{
public:
    virtual void storage() = 0;
};

// 电脑类
class Computer
{
private:
    string *name;
    CPU *cpu;
    GraphicsCard *graphicsCard;
    RAM *ram;

public:
    // 电脑零件组装
    Computer(string *name, CPU *cpu, GraphicsCard *graphicsCard, RAM *ram)
    {
        this->name = name;
        this->cpu = cpu;
        this->graphicsCard = graphicsCard;
        this->ram = ram;
        cout << "< --" << *this->name << " Computer Is Start Run" << "-- >" << endl;
    }
    ~Computer()
    {
        if (cpu != nullptr)
        {
            delete cpu;
            cpu = nullptr;
        }
        if (graphicsCard != nullptr)
        {
            delete graphicsCard;
            graphicsCard = nullptr;
        }
        if (ram != nullptr)
        {
            delete ram;
            ram = nullptr;
        }
        cout << "< --" << *this->name << " Computer Is Running Normal" << "-- >" << endl;
        cout << endl;
    }

    // 电脑运行函数
    void computerRun()
    {
        // 电脑零件 接口调用
        cpu->calculation();
        graphicsCard->display();
        ram->storage();
    }
};

// 具体厂商的类
// Inter Class
class Inter_CPU : public CPU
{
public:
    void calculation() override
    {
        cout << "Inter CPU Is Calculation" << endl;
    }
};

class Inter_GraphicsCard : public GraphicsCard
{
public:
    void display() override
    {
        cout << "Inter Graphics Card Is Displaying" << endl;
    }
};

class Inter_RAM : public RAM
{
public:
    void storage() override
    {
        cout << "Inter RAM Is In Storage" << endl;
    }
};

// AMD Class
class AMD_CPU : public CPU
{
public:
    void calculation() override
    {
        cout << "AMD CPU Is Calculation" << endl;
    }
};

class AMD_GraphicsCard : public GraphicsCard
{
public:
    void display() override
    {
        cout << "AMD Graphics Card Is Displaying" << endl;
    }
};

class AMD_RAM : public RAM
{
public:
    void storage() override
    {
        cout << "AMD RAM Is In Storage" << endl;
    }
};

// 组装不同厂商组件的电脑
// Assembling Inter Computer
void assemblingComputer_Inter()
{
    // 准备 Inter Computer 的 Component
    string name = "Inter";
    CPU *interCPU = new Inter_CPU;
    GraphicsCard *interGraphicsCard = new Inter_GraphicsCard;
    RAM *interRAM = new Inter_RAM;

    // Assembling Inter Computer
    Computer *computer = new Computer(&name, interCPU, interGraphicsCard, interRAM);

    // Running Inter Computer
    computer->computerRun();
    delete computer;
}

// Assembling AMD Computer
void assemblingComputer_AMD()
{
    // 准备 AMD Computer 的 Component
    string name = "AMD";
    CPU *amdCPU = new AMD_CPU;
    GraphicsCard *amdGraphicsCard = new AMD_GraphicsCard;
    RAM *amdRAM = new AMD_RAM;

    // Assembling AMD Computer
    Computer *computer = new Computer(&name, amdCPU, amdGraphicsCard, amdRAM);

    // Running AMD Computer
    computer->computerRun();
    delete computer;
}

int main()
{
    assemblingComputer_Inter();
    assemblingComputer_AMD();
    return 0;
}