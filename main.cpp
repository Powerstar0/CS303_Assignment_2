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
    string user_input = "";
    // Choice between Linked List and Vector
    while (true) {
        cout << " What would you like to do? :"
                " \n 1) Test Single Linked List "
                " \n 2) Test Vector Stack" << endl;
        cin >> user_input;
        if (user_input == "1" || user_input == "2") {
            break;
        }
        else {
            cout << "That is not a valid option" << endl;
        }
    }
    // Linked List choices
    if (user_input == "1") {
        LinkedList<string> list1;
        while (true) {
            cout << " What function would you like to call? :"
                    " \n 1) push_front "
                    " \n 2) push_back "
                    " \n 3) pop_front "
                    " \n 4) pop_back "
                    " \n 5) front "
                    " \n 6) back "
                    " \n 7) empty "
                    " \n 8) insert "
                    " \n 9) remove "
                    " \n 10) find "
                    " \n 11) quit" << endl;
            cin >> user_input;
            // Push Item to Head
            if (user_input == "1") {
                cout << "What to push front? " << endl;
                cin >> user_input;
                list1.push_front(user_input);
            }
            // Push Item to Tail
            else if (user_input == "2") {
                cout << "What to push back? " << endl;
                cin >> user_input;
                list1.push_back(user_input);
            }
            // Pop head
            else if (user_input == "3") {
                list1.pop_front();
                cout << "Head of linked list has been removed" << endl;
            }
            // Pop tail
            else if (user_input == "4") {
                list1.pop_back();
                cout << "Tail of linked list has been removed" << endl;
            }
            // Returns front of list
            else if (user_input == "5") {
                cout << "The front of the list is: ";
                cout << list1.front() << endl;
            }
            // Returns back of list
            else if (user_input == "6") {
                cout << "The back of the list is: " << list1.back() << endl;
            }
            // Checks to see if list is empty
            else if (user_input == "7") {
                if (list1.empty())
                    cout << "List is empty" << endl;
                else
                    cout << "List is not empty" << endl;
            }
            // Inserts Item at a selected index
            else if (user_input == "8") {
                int user_num;
                cout << "What is the thing you want to insert?" << endl;
                cin >> user_input;
                cout << "What is the index you want to insert this at?" << endl;
                cin >> user_num;
                list1.insert(user_num,user_input);
            }
            // Removes item at an index
            else if (user_input == "9") {
                int user_num;
                cout << "What is the index of the item you want to remove?" << endl;
                cin >> user_num;
                list1.remove(user_num);
            }
            // Finds an item in list
            else if (user_input == "10") {
                cout << "What is it you want to find? " << endl;
                cin >> user_input;
                // Returns the size of list if not found
                cout << "The index is: " << list1.find(user_input) << endl;
            }
            // exit
            else if (user_input == "11") {
                break;
            }
            // Invalid input
            else {
                cout << "Not a valid input" << endl;
            }
        }
        }
    // Stack creation
    if (user_input == "2") {
        Stack stack1;
        while (true) {
            cout << " What function would you like to call? :"
                    " \n 1) Empty "
                    " \n 2) Insert/Push"
                    " \n 3) Remove"
                    " \n 4) Top"
                    " \n 5) Average"
                    " \n 6) Exit" << endl;
            cin >> user_input;
            // Checks to see if stack is empty
            if (user_input == "1") {
                if (stack1.empty() == 1)
                    cout << "Stack is empty" << endl;
                else
                    cout << "Stack is not empty" << endl;
            }
            // Inserts an integer value
            else if (user_input == "2") {
                cout << "What integer value do you want to insert? " << endl;
                cin >> user_input;
                stack1.push(stoi(user_input));
            }
            // Removes the top of the stack
            else if (user_input == "3") {
                stack1.pop();
                cout << "Top value has been removed" << endl;
            }
            // Returns the top of the stack
            else if (user_input == "4") {
                cout << "The top value of stack is: " << stack1.top() << endl;
            }
            // Returns the average of all values in the stack
            else if (user_input == "5") {
                cout << "The average is: " << stack1.average() << endl;
            }
            // Exits
            else if (user_input == "6") {
                break;
            }
            // Invalid input
            else {
                cout << "Invalid Input" << endl;
            }
        }
    }
    return 0;
}
