#include <iostream>
#define PI 3.14159

using namespace std;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;
    return 0;
}
