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
class Animal {
private:
    string species;
    string classification;
    Gender gender;
    Weight weight;

protected:
    void setGender(Gender gender);

public:
    static string KINGDOM_NAME;

    Animal(float newMaxWeight, string &newClassification, string &newSpecies) : weight(UnitOfWeight::POUND, newMaxWeight), gender(Gender::UNKNOWN_GENDER){
        setClassification(newClassification);
        setSpecies(newSpecies);
    }

    Animal(Gender newGender, float newWeight, float newMaxWeight, string newClassification, string newSpecies) : weight(newWeight, newMaxWeight), gender(newGender){
        setClassification(newClassification);
        setSpecies(newSpecies);
    }
    void setWeight(float newWeight);
    void setClassification(string &classification);
    void setSpecies(string &species);
    float getMaxWeight();
    virtual void dump();
    const string &getClassification() const;
    Gender getGender() const;
    const Weight &getWeight() const;
    static const string &getKingdomName();
    const string &getSpecies() const;
    virtual bool validate();
    void validateClassification(string &newClassification);
    void validateSpecies(string &newSpecies);
    virtual string speak() const noexcept=0;
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_ANIMAL_H
