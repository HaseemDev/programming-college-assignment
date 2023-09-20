#include <iostream>
using namespace std;
int main()
{
    int a, sum;
    sum = 0;
    a = 1;
    while (a < 6)
    {
        cout << a << endl;
        sum = sum + a;
        a++;
    }
    cout << "Sum of first five numbers is = " << sum << endl;
    return 0;
}
