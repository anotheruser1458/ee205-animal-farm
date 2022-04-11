///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   10_April_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H
#define EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H

#endif //EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H
#pragma once
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#define MAX_CATS 1024
#define MAX_CAT_NAME 50
//#define DEBUG
#define UNKNOWN_WEIGHT -1

// catDatabase
typedef enum {UNKNOWN_GENDER, MALE, FEMALE} catGender;
typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} catBreed;
typedef enum {BLACK, WHITE, RED, BLUE, GREEN, PINK, UNKNOWN_COLOR} Color;
typedef float Weight;
typedef size_t NumCats;

static const char * const colorNames[] = {
        [BLACK] = "BLACK",
        [WHITE] = "WHITE",
        [RED] = "RED",
        [BLUE] = "BLUE",
        [GREEN] = "GREEN",
        [PINK] = "PINK",
        [UNKNOWN_COLOR] = "UNKNOWN_COLOR"
};
static const char * const breedNames[] = {
        [UNKNOWN_BREED] = "UNKNOWN_BREED",
        [MAINE_COON] = "MAINE_COON",
        [MANX] = "MANX",
        [SHORTHAIR] = "SHORTHAIR",
        [PERSIAN] = "PERSIAN",
        [SPHYNX] = "SPHYNX",
};
static const char * const genderNames[] = {
        [UNKNOWN_GENDER] = "UNKNOWN_GENDER",
        [MALE] = "MALE",
        [FEMALE] = "FEMALE",
};

class Cat {
protected:
    char name[MAX_CAT_NAME];
    catGender gender = UNKNOWN_GENDER;
    catBreed breed = UNKNOWN_BREED;
    bool isCatFixed = false;
    Weight weight = UNKNOWN_WEIGHT;

    void setGender(catGender gender);
    void setBreed(catBreed breed);

public:
    Cat* next = nullptr;

    Cat();
    Cat(const char *name, catGender gender, catBreed breed, Weight weight);

    void setName(const char* name);
    const char* getName();
    const char* getGender();
    const char* getBreed();
    void setIsCatFixed(bool isCatFixed);
    const char* getIsCatFixed();
    void setWeight(Weight weight);
    Weight getWeight() const;

    void print();
    bool validate();

    virtual ~Cat();
};

bool validateDatabase(Cat *catDatabaseHeadPointer);
void printAllCats(Cat *catDatabaseHeadPointer );
bool addCat(Cat *catDatabaseHeadPointer, Cat* cat);
bool deleteCat(Cat *catDatabaseHeadPointer, char name[]);
bool deleteAllCats(Cat *catDatabaseHeadPointer);
Cat* findCatByName(Cat *catDatabaseHeadPointer, char name[]);