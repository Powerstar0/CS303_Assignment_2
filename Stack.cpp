//
// Created by Johnny Diep on 9/25/24.
//

#include "Stack.h"
#include "iostream"

void Stack::push(const int &item) {
    // Pushes item to top of stacks
    container.push_back(item);
}

int &Stack::top() {
    // Returns the top of the stack
    return container.back();
}

void Stack::pop() {
    // removes the top of the stack
    container.pop_back();
}

bool Stack::empty() const {
    // Checks to see if stack is empty
    return container.empty();
}

void Stack::print_stack() {
    for (auto i : container) {
        std::cout << i << std::endl;
    }
}

float Stack::average() {
    // Returns the average of the values in stack
    float sum = 0;
    float counter = 0;
    // Adds all the values in stack
    for (auto i : container) {
        sum += i;
        counter++;
    }
    // Divides to find average
    return sum / counter;
}
