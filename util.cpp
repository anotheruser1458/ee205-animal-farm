/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
/////
///// @file util.cpp
///// @version 1.0
/////
///// @author Maxwell Pauly <mgpauly@hawaii.edu>
///// @date   19_Mar_2022
/////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include <iostream>
using namespace std;

bool validateDatabase(Cat *catDatabaseHeadPointer) {
    Cat *currentCat = catDatabaseHeadPointer;

    while(currentCat->next != nullptr) {
        if(!currentCat->validate()) {
            return false;
        }
        currentCat = currentCat->next;
    }
    if (!currentCat->validate()) {
        return false;
    }
    return true;

}

bool addCat(Cat *catDatabaseHeadPointer, Cat* cat) {
//    if (!validateDatabase(catDatabaseHeadPointer)) {
//        cout << "Eror in database" << endl;
//        return false;
//    }

    // call validate on new cat before adding
    Cat* currentCat = catDatabaseHeadPointer;
    while (currentCat->next != nullptr) {
        currentCat = currentCat->next;
    }
    currentCat->next = cat;
    return true;
}

bool deleteCat(Cat *catDatabaseHeadPointer) {
    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return false;
    }

}

bool deleteAllCats(Cat *catDatabaseHeadPointer) {
    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return false;
    }

}

Cat* findCatByName(Cat *catDatabaseHeadPointer, char name[]) {

}

void printAllCats(Cat *catDatabaseHeadPointer ) {
//    if (!validateDatabase(catDatabaseHeadPointer)) {
//        cout << "Eror in database" << endl;
//        return;
//    }
    Cat* currentCat = catDatabaseHeadPointer;
    while(currentCat->next != nullptr) {
        currentCat->print();
        currentCat = currentCat->next;
    }
    currentCat->print();
}

//
//int moveCatBackOneIndex(struct cat catStructArray[], int index) {
//    *(catStructArray + index) = *(catStructArray + index + 1);
//    return 0;
//}
//
//bool isDbFull(NumCats totalCats) {
//    return totalCats == MAX_CATS ? true:false;
//}
//
//bool isCatNameEmpty(char name[]) {
//    return strlen(name) > 0 ? false:true;
//}
//
//bool isNameLargerThan30Char(char name[]) {
//    return strlen(name) > 30 ? true:false;
//}
//
//bool isWeightLargerThanZero(Weight* weight) {
//    return *weight > 0.0 ? true:false;
//}