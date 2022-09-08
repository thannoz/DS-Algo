#include <iostream>
#include <cstdlib>

#include "List.h"

using namespace std;


// constructor: definint private data members
List::List() {
    head = nullptr;
    current = nullptr;
    temp = nullptr;
};

void List::Addnode(int data) {
    nodePtr newNode = new node;
    newNode->next = nullptr;
    newNode->data = data;
    
    // if there is already a list
    if (head != nullptr) {
        current = head;

        while(current->next != nullptr) {
            current = current->next;
        }

        // end of the list: append new node
        current->next = newNode;
    } else {
        // if there is no list: n is the new head of the list
        head = newNode;
    }

}

void List::DeleteNode(int data) {
    nodePtr nodeToDelete = nullptr;
    temp = head;
    current = head;

    // traverse through the list
    while(current != nullptr && current->data != data) {
        temp = current;
        current = current->next;
    }

    // if there no list
    if (current == nullptr) {
        cout << data << " was not in the list\n";
        delete nodeToDelete;
    } else {
        nodeToDelete = current;
        current = current->next;
        if (nodeToDelete == head) {
            head = head->next;
            temp = nullptr;
        }
        delete nodeToDelete;
        cout << "The value " << data << " was deleted\n";
    }
}

void List::Print() {
    current = head;
    while (current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}