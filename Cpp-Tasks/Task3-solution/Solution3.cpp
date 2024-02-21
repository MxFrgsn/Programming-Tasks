#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) { // Fixed the condition to check for even numbers
            sum += i;
        }
    }
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
