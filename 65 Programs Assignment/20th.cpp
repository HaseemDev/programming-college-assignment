#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
int main() {
    int choice;
    double radius;
    cout << "Enter 1 to calculate area of circle or 2 to calculate circumference: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << PI * pow(radius, 2) << endl;
            break;
        case 2:
        cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Circumference of the circle: " << 2 * PI * radius <<endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2." <<endl;
            break;
    }

    return 0;
}
