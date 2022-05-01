///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include <iostream>
#define PRINT_HEADING_FOR_DUMP "================================================="
using namespace std;

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    if(node1 > node2) {
        return true;
    }
    return false;
}

void Node::dump() const {
    cout << PRINT_HEADING_FOR_DUMP << endl;
    cout << "Node    this               " << this << endl;
    cout << "Node    next               " << Node::next << endl;
}

bool Node::validate() const noexcept {
    if (next == nullptr) {
        return true;
    }

    if (next == next->next) {
        cout << "Recursive loop detected: next points to itself!";
        return false;
    }

    return true;
}

bool Node::operator>(const Node &rightSide) {
    return compareByAddress(this, &rightSide);
}
