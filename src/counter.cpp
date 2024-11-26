#include "counter.h"

Counter::Counter() : count(0) {} // Constructor implementation

int Counter::increment() {
    return ++count; // Increment and return the updated count
}

int Counter::getCount() const {
    return count; // Return the current count
}
