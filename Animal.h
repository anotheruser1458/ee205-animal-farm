///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
#define EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Animal: public Node {
private:
    string species;
    string classification;
    // @todo
    // Gender gender;
    // Weight weight;

protected:
//  @todo
//    void setGender(const Gender newGender);

public:
    static const string KINGDOM_NAME;

// @todo
//Animal(const Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies);

};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
