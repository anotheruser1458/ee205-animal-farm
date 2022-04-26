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
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_MAMMAL_H
#define EE205_LAB_08D_ANIMAL_FARM_3_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal {

protected:
    Color color;

public:
    static const string MAMMAL_NAME;

};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_MAMMAL_H