/*
@ Written By : Syed Muhammad Haseem
@ Title : Write a program that inputs temperature in Fahrenheit and convert it into Celsius.
*/
#include <iostream>
using namespace std;
int main()
{
    int celsius, fahrenheit;
    cout << "The value of fahrenheit is : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The conversion of fahrenheit into celsius scale is : " << celsius;
    return 0;
}