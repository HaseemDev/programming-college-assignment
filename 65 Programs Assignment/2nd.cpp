/*
@ Written By : Syed Muhammad Haseem
@ Title : Write a program that finds area of triangle when three sides a, b and c of the triangle are given. It inputs values of a, b and c. Formula for the area of triangle is Area = √(s(s-a)(s-b0(s-c)).
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, s, Area;
    cout << "Enter a,b,c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    s = a + b + c / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Trianle is " << Area;
    return 0;
}
