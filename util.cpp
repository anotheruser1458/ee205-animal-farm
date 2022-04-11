/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
/////
///// @file util.cpp
///// @version 1.0
/////
///// @author Maxwell Pauly <mgpauly@hawaii.edu>
///// @date   10_April_2022
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
    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return false;
    }
    if (!cat->validate()) {
        return false;
    }

    // call validate on new cat before adding
    Cat* currentCat = catDatabaseHeadPointer;
    while (currentCat->next != nullptr) {
        currentCat = currentCat->next;
    }
    currentCat->next = cat;
    return true;
}

bool deleteCat(Cat *catDatabaseHeadPointer, char name[]) {
    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return false;
    }

    Cat *currentCat, *previousCat;
    currentCat = catDatabaseHeadPointer;
    previousCat = catDatabaseHeadPointer;

    while(currentCat->next != nullptr) {
        if(strcmp(currentCat->getName(), name) == 0) {
            previousCat->next = currentCat->next;
            currentCat->~Cat();
            return true;
        }
        previousCat = currentCat;
        currentCat = currentCat->next;
    }

    // check last cat in db
    if(strcmp(currentCat->getName(), name) == 0) {
        previousCat->next = nullptr;
        currentCat->~Cat();
        return true;
    }

    cout << "Cat not found or deleted" << endl;
    return false;
}

bool deleteAllCats(Cat *catDatabaseHeadPointer) {
    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return false;
    }

    Cat* currentCat = catDatabaseHeadPointer;
    Cat* nextCat;
    while(currentCat->next != nullptr) {
        nextCat = currentCat->next;
        currentCat->~Cat();
        currentCat = nextCat;
    }
    currentCat->~Cat();
    cout << "All cats deleted" << endl;
    return true;
}

Cat* findCatByName(Cat *catDatabaseHeadPointer, char name[]) {
    Cat* currentCat = catDatabaseHeadPointer;
    while(currentCat->next != nullptr) {
        if(strcmp(name, currentCat->getName()) == 0) {
            return currentCat;
        }
        currentCat = currentCat->next;
    }
    if(strcmp(name, currentCat->getName()) == 0) {
        return currentCat;
    }

    cout << "Cat not found" << endl;
    return nullptr;
}

void printAllCats(Cat *catDatabaseHeadPointer ) {
    //empty list
    if(catDatabaseHeadPointer->next == nullptr && strcmp(catDatabaseHeadPointer->getName(), "0000000000000000000000000000000000000000000000000")==0) {
        cout << "List is empty" << endl;
        return;
    }

    if (!validateDatabase(catDatabaseHeadPointer)) {
        cout << "Eror in database" << endl;
        return;
    }

    Cat* currentCat = catDatabaseHeadPointer;
    while(currentCat->next != nullptr) {
        currentCat->print();
        currentCat = currentCat->next;
    }
    currentCat->print();
    cout << "done printing cats" << endl;
}