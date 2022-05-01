///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"
#include <cassert>

unsigned int List::size() {
    return count;
}

Node* List::get_next(Node *currentNode) {
    return currentNode->next;
}

bool List::empty() {
    if (head->next == nullptr) {
        return true;
    }
    return false;
}

bool List::isIn(Node *aNode) {
    Node *currentNode = head;
    while(currentNode->next != nullptr) {
        if(aNode == currentNode) {
            return true;
        }
        currentNode = currentNode->next;
    }
    if(aNode == currentNode) {
        return true;
    }
    return false;
}

bool List::isSorted() {
    Node *currentNode = head;
    while(currentNode->next != nullptr) {
        if(!Node::compareByAddress(currentNode, currentNode->next)) {
            return false;
        }
        currentNode = currentNode->next;
    }
    return true;
}

Node *List::get_first() {
    return head;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif
    assert( validate() );
}