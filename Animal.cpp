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
#include "boost/algorithm/string.hpp"
#include "util.h"

string Animal::KINGDOM_NAME = "Animalia";

void Animal::setGender(Gender newGender) {
    if (Animal::gender == Gender::UNKNOWN_GENDER) {
        Animal::gender = newGender;
    } else {
        throw logic_error("gender can only be changed once");
    }
}

void Animal::setWeight(float newWeight) {
    Animal::weight.setWeight(newWeight);
}

void Animal::setClassification(string &newClassification) {
    validateClassification(newClassification);
    Animal::classification = newClassification;
}

void Animal::setSpecies(string &newSpecies) {
    validateSpecies(newSpecies);
    Animal::species = newSpecies;
}

void Animal::dump() {
    cout << "Animal  this               " << this << endl;
    cout << "Animal  kingdom            " << KINGDOM_NAME << endl;
    cout << "Animal  classification     " << classification << endl;
    cout << "Animal  species            " << species << endl;
    cout << "Animal  gender             " << gender << endl;
    cout << "Animal  weight             " << weight.getWeight() << " out of " << weight.getMaxWeight() << " " << weight.getWeightUnit() << "s" << endl;
}

float Animal::getMaxWeight() {
    return weight.getMaxWeight();
}

const string &Animal::getSpecies() const {
    return species;
}

const string &Animal::getClassification() const {
    return classification;
}

Gender Animal::getGender() const {
    return gender;
}

const Weight &Animal::getWeight() const {
    return weight;
}

const string &Animal::getKingdomName() {
    return KINGDOM_NAME;
}

bool Animal::validate() {
    if(!weight.validate()) {
        return false;
    };
    validateClassification(classification);
    // we assume species/classification are always valid because boost trims the whitespace off ends
    validateSpecies(species);
    return true;
}

//instead of checking something these two validate functions simply take the string and use boost to trim whitespace
// if there is any. Also had to remove const constraint from setters.
void Animal::validateClassification(string &newClassification) {
    boost::algorithm::trim(newClassification);
}

void Animal::validateSpecies(string &newSpecies) {
    boost::algorithm::trim(newSpecies);
}