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
