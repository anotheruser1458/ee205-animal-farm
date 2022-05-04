///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"

string Mammal::MAMMAL_NAME = "Mammilian";

void Mammal::setColor(Color newColor) {
    color = newColor;
}

void Mammal::dump() {
    Animal::dump();
    cout << "Mammal  color              " << color << endl;

}

Color Mammal::getColor() const {
    return color;
}

const string &Mammal::getMammalName() {
    return MAMMAL_NAME;
}

bool Mammal::validate() {
    return Animal::validate();
}
