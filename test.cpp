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
#include "Animal.h"
#include <iostream>

#ifdef DEBUG

void nodeTests() {
    Node n1;
    n1.dump();
}

void animalTests() {

}

int main() {
    nodeTests();
    animalTests();
    return 0;
}
#endif