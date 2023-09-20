#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    cout << "Sum of squares from 1 to " << n << ": " << sum << endl;

    return 0;
}
