///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file test.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "main.h"
#include "Node.h"
#include <iostream>

#ifdef DEBUG

void nodeTests() {
    Node n1;
    n1.dump();
}

int main() {
    nodeTests();

    return 0;
}
#endif