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
#include "Weight.h"
#include <iostream>
using namespace std;

enum class Color{UNKNOWN_COLOR, BLACK, BROWN, WHITE, RED, BLUE, GREEN, GINGER, CREAM, CINNAMON, CALICO};
enum class Gender{UNKNOWN_GENDER, MALE, FEMALE};

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
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
