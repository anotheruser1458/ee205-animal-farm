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
#include "util.h"
#include <string.h>

float Cat::MAX_WEIGHT = 40;
string Cat::SPECIES_NAME = "Felis Catus";

void Cat::setName(string newName) {
    if(validateName(newName)) {
        name = newName;
    } else {
        cout << "Name is invalid" << endl;
    }
}

bool Cat::isFixed() {
    return isCatFixed;
}

void Cat::dump() {
    Node::dump();
    Mammal::dump();
    cout << "Cat     name               " << name << endl;
    cout << "Cat     isFixed            " << boolToText(isFixed()) << endl;
}

string Cat::speak() const noexcept {
    string sp = "Meow";
    return sp;
}

const string Cat::getName() const {
    return name;
}

bool Cat::isCatFixed1() const {
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    if(!isCatFixed) {
        isCatFixed = true;
    }
}


bool Cat::validateName(string newName) {
if (newName.empty()) {
    throw invalid_argument("Name is empty");
}
return true;
}

bool Cat::validate() {

    if (!validateName(name)) {
        cout << "Name is not healthy" << endl;
        return false;
    }
    if (Mammal::validate() && Node::validate()) {
        return true;
    }
}