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
    // Default Constructor
    LinkedList();
    // Pushes a Node into the front of the linked list
    void push_front(const Item_type& item);
    // Pushes a Node into the back of the linked list
    void push_back(const Item_type& item);
    // Deletes the Node at the front of the linked list
    void pop_front();
    // Deletes the Node at the back of the linked list
    void pop_back();
    // Returns the data for the head pointer
    const Item_type& front() const;
    // Returns the data for the tail pointer
    const Item_type& back() const;
    // Returns whether the linked list is empty
    bool empty();
    // Inserts a node at the selected index
    void insert(size_t index, const Item_type& item);
    // Removes a node at the selected index
    bool remove(size_t index);
    // Finds the location of the selected item/data
    size_t find(const Item_type& item);
    void list();
    


};



#endif //CS303_ASSIGNMENT_2_SINGLELINKEDLIST_H
