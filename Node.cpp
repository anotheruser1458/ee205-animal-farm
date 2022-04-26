///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include <iostream>

using namespace std;

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    return node1 > node2;
}

void Node::dump() const {
    cout << "==============================================" << endl;
    cout << "Node    this        " << this << endl;
    cout << "Node    next        " << Node::next << endl;
}

bool Node::validate() const noexcept {
    if (next == nullptr) {
        return false;
    }
    if (next == next->next) {
        cout << "Next points to itself, recursion risk" << endl;
        return false;
    }
    return true;
}

bool Node::operator>(const Node &rightSide) {
    return compareByAddress(this, &rightSide);
}
