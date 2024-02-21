
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
```

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
