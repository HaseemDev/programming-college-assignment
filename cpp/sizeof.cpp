/*
@title : Find the size of datatype in cpp
@written By : Haider Ali Amjad
*/
#include <iostream>
using namespace std;
int main()
{
    // we can find the size of any datatype in cpp using sizeof() operator
    cout << "the size of int is " << sizeof(int) << " bytes" << endl;
    cout << "the size of bool is " << sizeof(bool) << " bytes" << endl;
    cout << "the size of float is " << sizeof(float) << " bytes" << endl;
    cout << "the size of double is " << sizeof(double) << " bytes" << endl;
    cout << "the size of char is " << sizeof(char) << " bytes" << endl;

    return 0;
}