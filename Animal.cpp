///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

void Animal::setWeight(float newWeight) {
    Animal::weight.setWeight(newWeight);
}

void Animal::setMaxWeight(float newMaxWeight) {
    Animal::weight.setMaxWeight(newMaxWeight);
}

void Animal::setClassification(const string &classification) {
    Animal::classification = classification;
}

void Animal::setSpecies(const string &species) {
    Animal::species = species;
}

void Animal::dump() {
    Node::dump();
    cout << "Animal  this               " << this << endl;
    cout << "Animal  kingdom            " << KINGDOM_NAME << endl;
    cout << "Animal  classification     " << classification << endl;
    cout << "Animal  species            " << species << endl;
    cout << "Animal  gender             " << gender << endl;
    cout << "Animal  weight             " << weight.getWeight() << endl;
}
