#include <iostream>
using namespace std;
int main()
{
    int salary,grade;
    cout<<"Enter the value of salary:";
    cin >>salary;
    cout<<"Enter the value of grade:";
    cin >>grade;
    if (grade>15)
    {salary += 0.5*salary;}
    else
    {salary += 0.25*salary;}
    cout <<salary;
    return 0;
}