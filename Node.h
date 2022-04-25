///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_NODE_H
#define EE205_LAB_08D_ANIMAL_FARM_3_NODE_H


class Node {
protected:
    static bool compareByAddress(const Node *node1, const Node *node2);
    Node *next{};

public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_NODE_H
