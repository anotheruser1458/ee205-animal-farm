///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
#define EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
#include "Node.h"
#include "Gender.h"
#include "Weight.h"
class Animal : public Node {
private:
    string species = "Unknown Species";
    string classification = "Unknown Classification";

    //@todo set gender and weight to unknown in constructor
    Gender gender;
    Weight weight;
public:
    string KINGDOM_NAME = "Kindom Animalia";

    Animal(Gender newGender, float newWeight, float newMaxWeight, string newClassification, string newSpecies) {
        setGender(newGender);
        setWeight(newWeight);
        setMaxWeight(newMaxWeight);
        setClassification(newClassification);
        setSpecies(newSpecies);
    }

    void setGender(Gender gender);
    void setWeight(float newWeight);
    void setMaxWeight(float newMaxWeight);
    void setClassification(const string &classification);
    void setSpecies(const string &species);
    void dump();
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
