//
// Created by Johnny on 9/22/2024.
//


#include "SingleLinkedList.h"

template<typename Item_type>
void LinkedList<Item_type>::list() {
    Node<Item_type>* temp = headPtr;
    for (int i = 0; i < num_items; i++) {
        cout << temp->data << endl;
        temp = temp->nextPtr;
    }
}

template<typename Item_type>
LinkedList<Item_type>::LinkedList() {
    //Default Constructor
    headPtr = NULL;
    tailPtr = NULL;
    num_items = 0;
}


template<typename Item_type>
// Push Front
void LinkedList<Item_type>::push_front(const Item_type &item) {
    // Step 1: Make new head pointer
    Node<Item_type>* tempPtr = new Node<Item_type>(item, NULL);
    // If there are more than 1 item in list
    if (headPtr != nullptr) {
        // Set the pointer of new head to point to the old head
        tempPtr->nextPtr = headPtr;
    }
    // Set Head Pointer to new pointer
    headPtr = tempPtr;
    // List was Empty.
    if (tailPtr == NULL) {
        tailPtr = headPtr;
    }
    // Iterate items
    num_items++;
}

template<typename Item_type>
void LinkedList<Item_type>::push_back(const Item_type &item) {
    if (tailPtr != NULL) {
        // Step 1 : Set the nextPtr of tailPtr to a New Node that points to Node
        tailPtr->nextPtr = new Node<Item_type>(item, NULL);
        // Set tailPtr to new Node
        tailPtr = tailPtr->nextPtr;
        //Increment
        num_items++;
    }
    else {
        // If no items in list
        push_front(item);
    }
}

template<typename Item_type>
void LinkedList<Item_type>::pop_front() {
    // Delete First Node in list
    // Throw Error if empty list
    if (headPtr == NULL)
        throw std::invalid_argument("Attempt to call pop_front() on an empty list");
    // Create Pointer to head Node, move head Node, and delete Node
    Node<Item_type>* removed_Node = headPtr;
    headPtr = headPtr->nextPtr;
    delete removed_Node;
    // Decrement
    num_items--;
}

template<typename Item_type>
void LinkedList<Item_type>::pop_back() {
    // Remove tail Node
    if (tailPtr == NULL) {
        // Error thrown if empty list
        throw std::invalid_argument("Attempt to call pop_back() on an empty list");
    }
    // Create pointer to tail
    Node<Item_type>* removed_Node = tailPtr;
    // Create temp pointer
    Node<Item_type>* temp = headPtr;
    // Iterate through list until the Node before the tail Node is found
    for (int i = 0; i < num_items; i++) {
        if (temp->nextPtr == removed_Node) {
            // Set new Tail Node
            tailPtr = temp;
            // Set Tail pointer to Null
            temp->nextPtr = NULL;
            break;
        }
        temp = temp->nextPtr;
    }
    // Delete Node
    delete removed_Node;
    // Decrement
    num_items--;
}

template<typename Item_type>
// Return data of head Pointer
const Item_type &LinkedList<Item_type>::front() const {
    return headPtr->data;
}

template<typename Item_type>
// Return data of tail Pointer
const Item_type &LinkedList<Item_type>::back() const {
    return tailPtr->data;
}

template<typename Item_type>
// Return True/False depending on if list is empty
bool LinkedList<Item_type>::empty() {
    if (num_items == 0)
        return true;
    else
        return false;
}



template<typename Item_type>
void LinkedList<Item_type>::insert(size_t index, const Item_type &item) {
//Insert item at position index (starting at 0). Insert at the end if index is beyond the end of the list
    if (index == 0)
        push_front(item);
    else if (index >= num_items) {
        push_back(item);
    }
    else {
        // Create temp pointer
        Node<Item_type>* temp = headPtr;
        // Iterate through list until you arrive at the index before insertion
        for (int i = 0; i < index - 1; i++) {
            temp = temp->nextPtr;
        }
        // Make new Node that will be inserted after temp Node so that it will
        // be at the right index
        Node<Item_type>* newNode = new Node<Item_type>(item, temp->nextPtr);
        temp->nextPtr = newNode;
        // increment
        num_items++;
    }
}

template<typename Item_type>
bool LinkedList<Item_type>::remove(size_t index) {
    // Index is out of bounds
    if (index < 0 || index >= num_items)
        return false;
    // List is empty error handling
    if (num_items == 0)
        throw std::invalid_argument("Attempt to call erase on an empty list");
    if (index == 0) {
        pop_front();
        return true;
    }
    if (index == num_items - 1) {
        pop_back();
        return true;
    }
    // Iterate through list until at the Node before index selected
    Node<Item_type>* temp = headPtr;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->nextPtr;
    }
    // Create a pointer to Node that is going to be removed
    Node<Item_type>* removed_node = temp->nextPtr;
    // Reassign Node before to point to next pointer of the deleted Node
    temp->nextPtr = removed_node->nextPtr;
    delete removed_node;
    // decrement
    num_items--;
    return true;
}

template<typename Item_type>
size_t LinkedList<Item_type>::find(const Item_type &item) {
    // Make a pointer starting at the head pointer
    Node<Item_type>* temp = headPtr;
    // Iterate through list
    for (int i = 0; i < num_items; i++) {
        // return index if found
        if (temp->data == item)
            return i;
        temp = temp->nextPtr;
    }
    // return list size if not found
    return num_items;
}

//explicit template initiation
template class LinkedList<string>;
template class LinkedList<int>;