///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#pragma once

class Mammal : public Animal {

protected:
    Color color;

public:
    static string MAMMAL_NAME;

    Mammal( float newMaxWeight,  string &newSpecies) : Animal(newMaxWeight, MAMMAL_NAME, newSpecies){};
    Mammal( Color newColor,  Gender newGender,  float newWeight, float newMaxWeight,  string &newSpecies) :
    Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies) {
        setColor(newColor);
    };

    Color getColor() const noexcept;
    void setColor( Color newColor) noexcept;
    void dump() const noexcept override;
};
