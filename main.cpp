#include <iostream>
#include "SingleLinkedList.h"
#include "Stack.h"

//Purpose:  Build a Single_Linked_List class. Your class should have the data members:
//head, tail, and num_items. Write the following member functions, which perform the same
//operations as the corresponding functions in the standard list class:
//• push_front,
//• push_back,
//• pop_front,
//• pop_back,
//• front, back,
//• empty,
//• void insert(size_t index, const Item_Type& item): Insert item at position index
//(starting at 0). Insert at the end if index is beyond the end of the list
//• bool remove(size_t index): Remove the item at position index. Return true if
//successful; return false if index is beyond the end of the list.
//• size_t find(const Item_Type& item): Return the position of the first occurrence of
//item if it is found. Return the size of the list if it is not found.

int main() {
    /*
    LinkedList<string> list1;
    list1.push_front("TOM");
    list1.list();
    cout << endl;
    list1.push_back("Jerry");
    list1.list();
    cout << endl;
    list1.push_front("BOB");
    list1.list();
    cout << endl;
    list1.insert(0,"Joe");
    list1.list();
    cout << endl;
    list1.remove(2);
    list1.list();
    cout << endl;
    cout << list1.find("Jerry");
     */
    /*
    list1.pop_back();
    list1.list();
    cout << endl;
    list1.pop_front();
    list1.list();
     */
    Stack stack1;
    stack1.push(2);
    stack1.push(3);
    stack1.push(6);
    stack1.pop();
    cout << stack1.top() << endl;
    cout << stack1.average() << endl;
    //stack1.print_stack();

    return 0;
}
