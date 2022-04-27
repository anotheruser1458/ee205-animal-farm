///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include <iostream>
#include "boost/algorithm/string/trim.hpp"
#include "Gender.h"
using namespace std;

string Animal::KINGDOM_NAME = "Kingdom Animalia";

void Animal::setGender(Gender newGender) {
    gender = newGender;
}

Animal::Animal(const float newMaxWeight, string &newClassification, string &newSpecies) {

    // I'm using boost to always trim whitespace, should never throw errors here
    if (!validateSpecies(newSpecies)) {
        throw invalid_argument("Need to use correct species");
    }
    if (!validateClassification(newClassification)) {
        throw invalid_argument("Need to use correct classification");
    }
    if (!validate()) {
        throw invalid_argument("Animal is not valid");
    }

    setMaxWeight(newMaxWeight);
}

Animal::Animal(Gender newGender, const float newWeight, const float newMaxWeight,string &newClassification,
               string &newSpecies) {
    setGender(newGender);
    setWeight(newWeight);
    setMaxWeight(newMaxWeight);

    if (!validateSpecies(newSpecies)) {
        throw invalid_argument("Need to use correct species");
    }
    if (!validateClassification(newClassification)) {
        throw invalid_argument("Need to use correct classification");
    }
    species = newSpecies;
    classification = newClassification;
}

string Animal::getClassification() const noexcept {
    return classification;
}

string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

float Animal::getWeight() const noexcept {
    return weight.getWeight();
}

void Animal::setWeight(const float newWeight) {
    weight.setWeight(newWeight);
}

void Animal::dump() const noexcept {
    Node::dump();
    cout << species << endl;
    cout << classification << endl;
    //@todo fix this
    cout << gender << endl;
    cout << weight.getWeight() << endl;
}

bool Animal::validate() const noexcept {
    if(!weight.validate()) {
        cout << "Weight is not valid" << endl;
        return false;
    }
    return Node::validate();
}

bool Animal::validateClassification( string &checkClassification) noexcept {
    boost::algorithm::trim(checkClassification);
    return true;
}

bool Animal::validateSpecies(string &checkSpecies) noexcept {
    boost::algorithm::trim(checkSpecies);
    return true;
}

string Animal::getKingdom() noexcept {
    cout << Animal::KINGDOM_NAME << endl;

}

void Animal::setMaxWeight(float newMaxWeight) {
    weight.setMaxWeight(newMaxWeight);
}