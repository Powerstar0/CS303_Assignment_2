//
// Created by Johnny on 9/22/2024.
//

#include "SingleLinkedList.h"

template<typename Item_type>
LinkedList<Item_type>::LinkedList() {
    headPtr = NULL;
    tailPtr = NULL;
    num_items = 0;
}


template<typename Item_type>
// Push Front
void LinkedList<Item_type>::push_front(const Item_type &item) {
    // Step 1: Make new head pointer
    Node tempPtr = new Node(item, NULL);
    // If there are more than 1 item in list
    if (headPtr != nullptr) {
        // Set next pointer of previous head to new head pointer
        headPtr->nextPtr = tempPtr;
    }
    // List was Empty.
    if (tailPtr == NULL) {
        tailPtr = headPtr;
    }
    // Set Head Pointer to new pointer
    headPtr = tempPtr;

    num_items++;
}