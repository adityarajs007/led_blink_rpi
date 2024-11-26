#ifndef COUNTER_H
#define COUNTER_H

class Counter {
public:
    Counter();           // Constructor
    int increment();     // Increment the counter
    int getCount() const; // Get the current count

private:
    int count;           // Member variable to store the count
};

#endif
