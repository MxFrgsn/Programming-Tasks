#include <iostream>
using namespace std;


// Difficult

// Recursive function to calculate factorial
int factorial(int n) {
    double sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *=i;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
