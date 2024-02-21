
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
...


## 5. Resolve the Segmentation Fault - Difficult

### Intended Functionality
Reverses an array of integers.

### Issues
- Accessing array elements outside its bounds, leading to a segmentation fault.

### Solution
```cpp
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1]; // Fixed: Corrected indexing
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
...

## 6. Optimize the Code - Fairly Difficult

### Intended Functionality
Calculates the factorial of a given number, aiming to improve efficiency over a recursive approach.

### Issues
- Inefficient recursion for large numbers.

### Solution
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
```

## 7. Implement Multithreading - Complex

### Intended Functionality
Executes a long-running task in parallel with other work, showcasing multithreading.

### Issues
- Directly calling `longRunningTask` blocks subsequent execution until the task is complete.

### Solution
```cpp
#include <iostream>
#include <thread>

void longRunningTask() {
    // Simulate a long task
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "Task completed" << std::endl;
}

int main() {
    std::cout << "Starting task" << std::endl;
    std::thread taskThread(longRunningTask); // Run in a separate thread
    std::cout << "Task started, doing other work" << std::endl;
    // Other work simulated by sleep
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Main work completed" << std::endl;
    taskThread.join(); // Wait for the thread to finish
    return 0;
}
```

This collection of tasks and solutions is designed to provide practical, hands-on experience with solving common programming challenges in C++, offering a progression from basic syntax corrections to more complex concepts like multithreading.
}
```

This collection of tasks and solutions is designed to provide practical, hands-on experience with solving common programming challenges in C++, offering a progression from basic syntax corrections to more complex concepts like multithreading.
