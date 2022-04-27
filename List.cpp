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

unsigned int List::size() {
    return count;
}

Node *List::get_next(Node *currentNode) {
    return currentNode->getNext();
}


bool List::empty() {
    if (head->getNext() != nullptr)
        return false;
    return true;
}


