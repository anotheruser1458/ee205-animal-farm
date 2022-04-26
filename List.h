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
    Node *head;
    unsigned int count;

public:
    bool empty() const noexcept;
    unsigned int size() const noexcept;
    bool isIn(Node *aNode) const;
    bool isSorted() const noexcept;
    Node* get_first() const noexcept;
    void deleteAllNodes() noexcept;
    virtual Node * pop_front() noexcept=0;
    virtual void dump() const noexcept=0;
    virtual bool validate() const noexcept=0;
    static Node * get_next(const Node *currentNode);

};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_LIST_H
