///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file test.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "main.h"
#include <iostream>
#include "Node.h"
#include "Gender.h"
#include "Color.h"
using namespace std;

ostream & operator<<(std::ostream &lhs_stream, const Gender &rhs_Gender) {
    switch (rhs_Gender) {
        case Gender::UNKNOWN_GENDER: lhs_stream << "Unknown Gender"; break;
        case Gender::MALE: lhs_stream << "Male"; break;
        case Gender::FEMALE: lhs_stream << "Female"; break;
        default:
            throw std::out_of_range("Enum is not mapped to a string");
    }
    return lhs_stream;
}

ostream & operator<<(ostream &lhs_stream, const Color &rhs_Color) {
    switch(rhs_Color) {
        case Color::UNKNOWN_COLOR: lhs_stream << "Unknown Color"; break;
        case Color::BLACK: lhs_stream << "Black"; break;
        case Color::BROWN: lhs_stream << "Brown"; break;
        case Color::WHITE: lhs_stream << "White"; break;
        case Color::RED: lhs_stream << "Red"; break;
        case Color::BLUE: lhs_stream << "Blue"; break;
        case Color::GREEN: lhs_stream << "Green"; break;
        case Color::GINGER: lhs_stream << "Ginger"; break;
        case Color::CREAM: lhs_stream << "Cream"; break;
        case Color::CINNAMON: lhs_stream << "Cinnamon"; break;
        case Color::CALICO: lhs_stream << "Calico"; break;
        default:
            throw out_of_range("Enum is not mapped to a string");
    }
    return lhs_stream;
}

#ifdef DEBUG


void nodeTests() {
    Node n1;
    n1.dump();
}

void animalTests() {
    cout << Gender::MALE << endl;
    cout << Color::BLACK << endl;
}

int main() {
    nodeTests();
    animalTests();
    return 0;
}
#endif