///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file util.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   30_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

std::string boolToText(bool value) {
    std::string answer;
    answer = value ? "true":"false";
    return answer;
};