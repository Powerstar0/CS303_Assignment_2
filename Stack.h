//
// Created by Johnny Diep on 9/25/24.
//

#ifndef CS303_ASSIGNMENT_2_STACK_H
#define CS303_ASSIGNMENT_2_STACK_H
#include "vector"

class Stack {
private:
    // Vector container
    std::vector<int> container;
public:
    // Push item to stack
    void push(const int& item);
    // Return top of stack
    int& top();
    // Remove top of stack
    void pop();
    // Checks to see if stack is empty
    bool empty() const;
    void print_stack();
    // Calculates the average of values in the stack
    float average();
};


#endif //CS303_ASSIGNMENT_2_STACK_H
