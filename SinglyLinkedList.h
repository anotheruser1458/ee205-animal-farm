///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_3_SINGLYLINKEDLIST_H
#define EE205_LAB_08D_ANIMAL_FARM_3_SINGLYLINKEDLIST_H
#include "List.h"

class SinglyLinkedList : public List{
public:
    SinglyLinkedList();
    void push_front(Node *newNode);
    Node * pop_front() noexcept override;
    void insert_after(Node *currentNode, Node *newNode);
    void dump() const noexcept override;
    bool validate() const noexcept override;
};


#endif //EE205_LAB_08D_ANIMAL_FARM_3_SINGLYLINKEDLIST_H
