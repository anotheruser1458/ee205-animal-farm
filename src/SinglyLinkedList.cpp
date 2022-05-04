///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"


void SinglyLinkedList::push_front(Node *newNode) {
    newNode->next = head;
    head = newNode;
}

Node *SinglyLinkedList::pop_front() noexcept {
    Node *poppedNode = head;
    head = head->next;
    return poppedNode;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    Node* tmp = currentNode->next;
    currentNode->next = newNode;
    newNode->next = tmp;
    count += 1;
}

void SinglyLinkedList::dump() const noexcept {
    Node* currentNode = head;
    while(currentNode->next != nullptr) {
        currentNode->dump();
        currentNode = currentNode->next;
    }
    currentNode->dump();
}

bool SinglyLinkedList::validate() const noexcept {
    Node* currentNode = head;
    while(currentNode->next != nullptr) {
        if(!currentNode->validate()) {
            return false;
        }
        currentNode = currentNode->next;
    }
    currentNode->validate();
    return true;
}