//
// Created by Johnny on 9/22/2024.
//

#ifndef CS303_ASSIGNMENT_2_SINGLELINKEDLIST_H
#define CS303_ASSIGNMENT_2_SINGLELINKEDLIST_H

#include <iostream>
#include "Node.h"
using namespace std;

template <typename Item_type>

class LinkedList {
protected:
    // Reference to the head of the list
    Node<Item_type>* headPtr;
    // Reference to the end of the list
    Node<Item_type>* tailPtr;
    // The size of the list
    size_t num_items;
public:
    LinkedList();
    void push_front(const Item_type& item);
    void push_back(const Item_type& item);
    void pop_front();
    void pop_back();
    const Item_type& front() const;
    const Item_type& back() const;
    bool empty();
    void insert(size_t index, const Item_type& item);
    bool remove(size_t index);
    size_t find(const Item_type& item);
    


};
#include "SingleLinkedList.cpp"  // Include the .cpp at the end of the header file

#endif //CS303_ASSIGNMENT_2_SINGLELINKEDLIST_H
