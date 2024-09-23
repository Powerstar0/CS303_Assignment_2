//
// Created by Johnny on 9/22/2024.
//

#ifndef CS303_ASSIGNMENT_2_NODE_H
#define CS303_ASSIGNMENT_2_NODE_H

template <typename Item_type>

// Define what a node is
struct Node {
    // Data
    Item_type data;
    // The pointer to the next node
    Node* nextPtr;
    // Constructor
    //Creates a new Node that points to another Node
    // parameter data_item: the data stored
    // parameter next_ptr Pointer to the NODE that is pointed to by the new Node
    Node(const Item_type& data_item, Node* next_ptr = NULL) : data(data_item), nextPtr(next_ptr) {};
};

#endif //CS303_ASSIGNMENT_2_NODE_H
