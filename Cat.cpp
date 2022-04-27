///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"

float Cat::MAX_WEIGHT = 40;
string Cat::SPECIES_NAME = "Felis Catus";

void Cat::setName(string newName) {
    name = newName;
}

bool Cat::isFixed() {
    return isCatFixed;
}

void Cat::dump() {
    Mammal::dump();
    cout << "Cat     name               " << name << endl;
    cout << "Cat     isFixed            " << (isFixed()?"true":"false") << endl;
}

