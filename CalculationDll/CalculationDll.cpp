// CalculationDll.cpp : Defines the exported functions for the DLL application.
//
#include"pch.h"
#include"CalculationDll.h"
#include<iostream>
using namespace std;
void CalculationApi::Addition(void)
{
    int x = 0;
    int y = 0;
    cout << "Enter the numbers" << endl;
    cin >> x >> y;
    cout << (x + y) << endl;
}
void CalculationApi::Subtraction(void)
{
    int x = 0;
    int y = 0;
    cout << "Enter the numbers" << endl;
    cin >> x >> y;
    cout << (x - y) << endl;
}
void CalculationApi::Multiply(void)
{
    int x = 0;
    int y = 0;
    cout << "Enter the numbers" << endl;
    cin >> x >> y;
    cout << (x * y) << endl;
}