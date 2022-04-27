///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"
#pragma once

class Cat : public Mammal{
protected:
    string name;
    bool isCatFixed;

public:
    static string SPECIES_NAME;
    static float MAX_WEIGHT;

    Cat(string &newName) : Mammal(MAX_WEIGHT, SPECIES_NAME){};
    Cat(string &newName, Color newColor, bool newIsFixed, Gender newGender, float newWeight) :
    Mammal(newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME) {
        name = newName;
        isCatFixed = newIsFixed;
    };

    string getName() const noexcept;
    void setName(string &newName);
    bool isFixed() const noexcept;
    void fixCat() noexcept;
    string speak() const noexcept override;
    void dump() const noexcept override;
    bool validate() const noexcept override;
    static bool validateName(string &newName);

};


