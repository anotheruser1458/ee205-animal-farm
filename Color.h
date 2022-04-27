///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Color.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

enum class Color {
    UNKNOWN_COLOR=0 , BLACK , BROWN , WHITE ,
    RED , BLUE , GREEN , GINGER ,
    CREAM , CINNAMON , CALICO
};

std::ostream & operator<<(std::ostream &lhs_stream, const Color &rhs_Color);
