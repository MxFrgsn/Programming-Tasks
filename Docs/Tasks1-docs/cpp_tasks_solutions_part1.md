
# C++ Programming Tasks and Solutions

This document provides a collection of programming tasks ranging from beginner to complex levels, intended for practice and learning in C++. Each task is accompanied by a detailed explanation of its intended functionality, issues present, and the solution applied to address these issues.

## 1. Fix the Syntax Errors - Beginner

### Intended Functionality
This program calculates and displays the area of a rectangle. It prompts the user to enter the width and height, which are then used in the area calculation.

### Issues
- Missing semicolon (`;`) after `cin >> width`.
- Incorrect concatenation in the `cout` statement for displaying the area, missing the `<<` operator.

### Solution
```cpp
#include <iostream>
using namespace std;

int main() {
  int width, height;
  cout << "Enter width: ";
  cin >> width; // Fixed: Added missing semicolon
  cout << "Enter height: ";
  cin >> height;

  int area = width * height;
  cout << "The area of the rectangle is: " << area << endl; // Fixed: Correct concatenation
  return 0;
}
```

## 2. Implement the Function - Easy

### Intended Functionality
Calculates the area of a circle based on user-input radius. It involves implementing a missing function `calculateArea`.

### Issues
- The `calculateArea` function is declared but not implemented.

### Solution
```cpp
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
```

## 3. Debug the Loop - Moderate

### Intended Functionality
Calculates the sum of all even numbers between 1 and 100, inclusive.

### Issues
- Logical error in identifying even numbers with `i % 2 = 1`.

### Solution
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) { // Fixed: Correct condition to identify even numbers
            sum += i;
        }
    }
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
```

## 4. Complete the Class - Moderate to Difficult

### Intended Functionality
Models a `Book` class for creating book objects with properties and capabilities.

### Issues
- Missing constructor and method to display book details.

### Solution
```cpp
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string t, string a, int p) {
            title = t;
            author = a;
            pages = p;
        }

        void display() {
            cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
        }
};

int main() {
    Book book1("C++ Programming", "Bjarne Stroustrup", 832);
    book1.display();
    return 0;
}
```
