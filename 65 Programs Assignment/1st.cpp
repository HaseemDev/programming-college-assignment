/*
@ Written By : Syed Muhammad Haseem
@ Title : Write a program that inputs miles from the user and converts miles into kilometers. One mile is equal to 1.609km.
*/
#include <iostream>
using namespace std;

int main()
{
    float miles, kilometer;
    cout << "Enter distance in miles" << endl;
    cin >> miles;

    kilometer = miles * 1.609;

    cout << miles << " miles in kilometers is equal to = " << kilometer << endl;
    return 0;
}