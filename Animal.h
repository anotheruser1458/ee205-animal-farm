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

#pragma once
#include "Node.h"
#include "Weight.h"
#include "Gender.h"
#include "Color.h"
#include <iostream>
using namespace std;




class Animal: public Node {
private:
    string species;
    string classification;
    Gender gender;
    Weight weight;

protected:
    void setGender(Gender newGender);

public:
    static string KINGDOM_NAME;

    Animal(float newMaxWeight, string &newClassification, string &newSpecies);
    Animal(Gender newGender, float newWeight, float newMaxWeight, string &newClassification, string &newSpecies);
    string getKingdom() noexcept;
    string getClassification() const noexcept;
    string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    float getWeight() const noexcept;
    void setWeight(float newWeight);
    virtual string speak() const noexcept=0;
    void dump() const noexcept override;
    bool validate() const noexcept override;
    static bool validateClassification(string &checkClassification) noexcept;
    static bool validateSpecies(string &checkSpecies) noexcept;
    void setMaxWeight(float newMaxWeight);

};
