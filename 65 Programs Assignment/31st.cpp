
#include <iostream>
using namespace std;
int main() {
    int number, reversedNumber = 0;

    cout << "Enter a positive integer: ";
    cin >> number;
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    cout << "Reverse of the number: " << reversedNumber <<endl;

    return 0;
}
