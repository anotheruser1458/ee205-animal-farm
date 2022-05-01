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
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_CAT_H
#define EE205_LAB_08D_ANIMAL_FARM_3_CAT_H
#include "Mammal.h"

class Cat : public Mammal, public Node {
protected:
    string name = "UNKNOWN NAME";
    bool isCatFixed = false;

public:
    static string SPECIES_NAME;
    static float MAX_WEIGHT;

    Cat(string newName) : Mammal(MAX_WEIGHT, SPECIES_NAME){
        setName(newName);
    };
    Cat(string newName, Color newColor, Gender newGender, float newWeight) :
    Mammal(newColor,  newGender, newWeight, Cat::MAX_WEIGHT, Cat::SPECIES_NAME) {
        setName(newName);
    }

    const string getName() const;
    void setName(string newName);
    bool isFixed();
    void fixCat() noexcept;
    bool validateName(string);
    void dump();
    virtual string speak() const noexcept;
    bool isCatFixed1() const;
    bool validate();
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_CAT_H
