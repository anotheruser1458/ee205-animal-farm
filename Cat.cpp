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

string Cat::getName() const noexcept {
    return name;
}

void Cat::setName(string &newName) {
    name = newName;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    isCatFixed = true;
}

string Cat::speak() const noexcept {
    string speak = "Meow";
    return speak;
}

void Cat::dump() const noexcept {
    Mammal::dump();
    cout << name << endl;
    cout << isCatFixed << endl;
}

bool Cat::validate() const noexcept {
    return Animal::validate();
}

bool Cat::validateName(string &newName) {
    return false;
}
