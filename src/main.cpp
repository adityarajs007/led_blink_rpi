#include <iostream>
#include <thread>       // For std::this_thread::sleep_for
#include <chrono>       // For std::chrono::milliseconds
#include "counter.h"

int main() {
    Counter counter;

    // Loop to increment the counter with a 200ms delay
    for (int i = 0; i < 20; i++) {
        std::cout << "Count is: " << counter.increment() << std::endl;

        // Introduce a 200ms delay
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}
