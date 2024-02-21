#include <iostream>
using namespace std;

int main() {
	int width, height;
	cout << "Enter width: ";
	cin >> width; // Missing semicolon fixed
	cout << "Enter height: ";
	cin >> height;

	int area = width * height;
	cout << "The area of the rectangle is: " << area << endl; // Missing << fixed
	return 0;
}
