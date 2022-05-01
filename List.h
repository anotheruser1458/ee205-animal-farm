///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_LIST_H
#define EE205_LAB_08D_ANIMAL_FARM_3_LIST_H
#include "Node.h"

class List {
protected:
    Node *head = new Node;
    unsigned int count;
public:
    bool empty();

    unsigned int size();

    bool isIn(Node *aNode);

    bool isSorted();

    Node *get_first();

    void deleteAllNodes() noexcept;

    virtual Node *pop_front() noexcept = 0;

    virtual void dump() const noexcept = 0;

    virtual bool validate() const noexcept = 0;

    static Node *get_next(Node *currentNode);
};

#endif //EE205_LAB_08D_ANIMAL_FARM_3_LIST_H
