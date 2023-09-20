#include <iostream>
using namespace std;
int main() {
float temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature > 35) {
        cout<< "Hot Day";
    } else if (temperature >= 25 && temperature <= 35) {
        cout<<"Pleasant Day";
    } else {
        cout<< "Cool Day";
    }

    return 0;
}