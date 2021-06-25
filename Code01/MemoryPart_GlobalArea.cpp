//
// Created by FHang on 2020/8/5.
//
#include <iostream>

using namespace std;

//Global variable outside Function
int g_a = 10;
int g_b = 20;

//Global constant variable outside Function
const int g_c_a = 10;
const int g_c_b = 20;

int main()
{
    //Local variable inside Function
    int l_a = 10;
    int l_b = 20;

    //Static variable
    static int s_a = 10;
    static int s_b = 20;

    //Constant Local variable inside Function
    const int l_c_a = 10;
    const int l_c_b = 20;

    //Debug local variable
    cout << "Local Area_Local variable l_a: " << (long long) &l_a << endl;
    cout << "Local Area_Local variable l_b: " << (long long) &l_b << endl;

    //Debug constant local variable
    cout << "Local Area_Constant local variable l_c_a:" << (long long) &l_c_a << endl;
    cout << "Local Area_Constant local variable l_c_b:" << (long long) &l_c_b << endl;

    //Debug global variable
    cout << "Global Area_Global variable g_a: " << (long long) &g_a << endl;
    cout << "Global Area_Global variable g_b: " << (long long) &g_b << endl;

    //Debug static variable
    cout << "Global Area_Static variable s_a: " << (long long) &s_a << endl;
    cout << "Global Area_Static variable s_b: " << (long long) &s_b << endl;

    //Debug string constant
    cout << "Global Area_String constant str_c_a:" << (long long) &"Hello World" << endl;

    //Debug global constant variable
    cout << "Global Area_global constant variable g_c_a:" << (long long) &g_c_a << endl;
    cout << "Global Area_global constant variable g_c_b:" << (long long) &g_c_b << endl;

    return 0;
}
