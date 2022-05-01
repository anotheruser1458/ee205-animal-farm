///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

enum class Gender { UNKNOWN_GENDER =0 , MALE , FEMALE };

inline ostream & operator<<(std::ostream &lhs_stream, const Gender &rhs_Gender) {
    switch (rhs_Gender) {
        case Gender::UNKNOWN_GENDER: lhs_stream << "Unknown Gender"; break;
        case Gender::MALE: lhs_stream << "Male"; break;
        case Gender::FEMALE: lhs_stream << "Female"; break;
        default:
            throw std::out_of_range("Enum is not mapped to a string");
    }
    return lhs_stream;
}