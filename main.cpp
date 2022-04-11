///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   10_April_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Starting Animal Farm 2" << endl;
    Cat* catDatabaseHeadPointer;
    Cat c1("Loki", MALE, PERSIAN, 1.0);
    catDatabaseHeadPointer = &c1;
    Cat c2("Milo", MALE, MANX, 1.1);
    addCat(catDatabaseHeadPointer, &c2);
    Cat c3("Bella", FEMALE, MAINE_COON, 1.2);
    addCat(catDatabaseHeadPointer, &c3);
    Cat c4("Kali", FEMALE, SHORTHAIR, 1.3);
    addCat(catDatabaseHeadPointer, &c4);
    Cat c5("Trin", FEMALE, MANX, 1.4);
    addCat(catDatabaseHeadPointer, &c5);
    Cat c6("Chili", MALE, SHORTHAIR, 1.5);
    addCat(catDatabaseHeadPointer, &c6);
    printAllCats(catDatabaseHeadPointer);
    deleteAllCats(catDatabaseHeadPointer);
    cout << "Done with Animal Farm 2" << endl;
}

#ifdef DEBUG
int main() {
    Cat* catDatabaseHeadPointer;

    cout << endl << "Verify that a cat created with Cat() has all of the default\n"
            "values set" << endl;
    Cat c99;
    cout << c99.getName() << endl;
    cout << c99.getIsCatFixed() << endl;
    cout << c99.getWeight() << endl;
    cout << c99.getGender() << endl;
    cout << c99.getBreed() << endl << endl;

    cout << "Verify that a cat created with Cat() is not valid" << endl;
    cout << (c99.validate() ? "true":"false") << endl << endl;

    cout << "Set name to nullptr" << endl;
    c99.setName(nullptr);
    cout << endl << endl;

    cout << "Set name to ''" << endl;
    c99.setName("");
    cout << endl << endl;

    cout << "Set a 1 character name" << endl;
    c99.setName("a");
    cout << c99.getName() << endl;

    //49 As
    c99.setName("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    cout << c99.getName() << endl;

    // 51 As
    c99.setName("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    cout << endl;
    Cat c98("max", MALE, MANX, 40.1);
    c98.print();
    cout << endl;

    //protected, won't compile
    //c99.setGender(FEMALE);

    Cat c97("ralph", MALE, MAINE_COON, 32.1);
    c97.print();
    cout << endl;

    //protected, won't compile
    //c97.setBreed(MANX);

    c97.setIsCatFixed(true);
    c97.print();
    cout << endl;

    c97.setWeight(0);
    c97.setWeight((float) 1/1024);
    c97.print();
    cout << endl;

    try {
        Cat c96("testName", UNKNOWN_GENDER, MAINE_COON, 32.3);
    } catch (logic_error) {}
    try {
        Cat c95("testName2", MALE, UNKNOWN_BREED, 31.2);
    } catch (logic_error) {}
    try {
        Cat c95("testName3", MALE, MAINE_COON, UNKNOWN_WEIGHT);
    } catch (logic_error) {}
    cout << endl << endl;

    Cat c1("Loki", MALE, PERSIAN, 1.0);
    catDatabaseHeadPointer = &c1;
    Cat c2("Milo", MALE, MANX, 1.1);
    addCat(catDatabaseHeadPointer, &c2);
    Cat c3("Bella", FEMALE, MAINE_COON, 1.2);
    addCat(catDatabaseHeadPointer, &c3);
    Cat c4("Kali", FEMALE, SHORTHAIR, 1.3);
    addCat(catDatabaseHeadPointer, &c4);
    Cat c5("Trin", FEMALE, MANX, 1.4);
    addCat(catDatabaseHeadPointer, &c5);
    Cat c6("Chili", MALE, SHORTHAIR, 1.5);
    addCat(catDatabaseHeadPointer, &c6);

    Cat* foundCat = findCatByName(catDatabaseHeadPointer, "Bella");
    foundCat->print();
    cout << endl;

    foundCat = findCatByName(catDatabaseHeadPointer, "Belinda");

    deleteCat(catDatabaseHeadPointer, "Bella");
    printAllCats(catDatabaseHeadPointer);
    cout << endl;

    deleteCat(catDatabaseHeadPointer, "Bella");

}
#endif


// name
void Cat::setName(char* name) {
    if (name == nullptr) {
        cout << "Name can't be nullptr" << endl;
        return;
    }
    if (strcmp(name, "") == 0) {
        cout << "Name can't be empty ['']" << endl;
        return;
    }
    else if (name == nullptr) {
        cout << "Name can't be a null pointer" << endl;
        return;
    }
    else if (strlen(name) >= MAX_CAT_NAME) {
        cout << "Name of cat must be less than " << MAX_CAT_NAME << endl;
        return;
    }
    strcpy(Cat::name, name);
}

char* Cat::getName() {
    return Cat::name;
}

// gender
void Cat::setGender(catGender gender) {
    Cat::gender = gender;
}

const char* Cat::getGender() {
    return genderNames[gender];
}

// breed
void Cat::setBreed(catBreed breed) {
    Cat::breed = breed;
}

const char* Cat::getBreed() {
    return breedNames[breed];
}

// isCatFixed
void Cat::setIsCatFixed (bool isCatFixed) {
    Cat::isCatFixed = isCatFixed;
}

const char* Cat::getIsCatFixed() {
    return Cat::isCatFixed? "true":"false";
}

// weight
void Cat::setWeight(Weight weight) {
    if (weight <=0) {
        cout << "Cat weight must be > 0" << endl;
        return;
    }
    Cat::weight = weight;
}

Weight Cat::getWeight() const {

    return weight;
}

Cat::Cat() {
    strcpy(Cat::name, "no name");
    Cat::gender = UNKNOWN_GENDER;
    Cat::breed = UNKNOWN_BREED;
    Cat::weight = UNKNOWN_WEIGHT;
    Cat::isCatFixed = false;
}

Cat::Cat(char *name, catGender gender, catBreed breed, Weight weight)  {
    if(gender == UNKNOWN_GENDER) {
        cout << "gender must not be UNKNOWN_GENDER" << endl;
        throw logic_error("invalid gender");
    }
    else if (breed == UNKNOWN_BREED) {
        cout << "breed must not be UNKNOWN_BREED" << endl;
        throw logic_error("invalid breed");
    }
    else if (weight == UNKNOWN_WEIGHT) {
        cout << "weight must not be UNKNOWN_WEIGHT (or -1)" << endl;
        throw logic_error("invalid weight");
    }

    setName(name);
    setWeight(weight);
    setGender(gender);
    setBreed(breed);
}

void Cat::print() {
    cout << "================================================================================" << endl;
    cout << "Cat        name         " << getName() << endl;
    cout << "Cat        gender       " << getGender() << endl;
    cout << "Cat        breed        " << getBreed() << endl;
    cout << "Cat        isFixed      " << getIsCatFixed() << endl;
    cout << "Cat        weight       " << getWeight() << endl;
}

bool Cat::validate() {
    if (strcmp(Cat::name, "") == 0) {
        cout << "Name can't be empty ['']" << endl;
        return false;
    }
    else if (Cat::name == nullptr) {
        cout << "Name can't be a null pointer" << endl;
        return false;
    }
    else if (strlen(Cat::name) >= MAX_CAT_NAME) {
        cout << "Name of cat must be less than " << MAX_CAT_NAME << endl;
        return false;
    }
    else if (Cat::weight <=0) {
        cout << "Cat weight must be > 0" << endl;
        return false;
    }
    return true;
}

Cat::~Cat() {
    strcpy(Cat::name, "0000000000000000000000000000000000000000000000000");
    Cat::gender = UNKNOWN_GENDER;
    Cat::breed = UNKNOWN_BREED;
    Cat::weight = UNKNOWN_WEIGHT;
    Cat::isCatFixed = false;
    Cat::next = nullptr;
}









// old main
//int main() {
//    fprintf(stdout,"Starting Animal Farm 2\n\n");
//
//    //    struct cat catArray[MAX_CATS];
////    NumCats totalCats = 0;
////    initializeCatsStructArray(catArray);
////
////    Weight w = 8.5, w2 = 7.0, w3 = 18.2, w4 = 9.2, w5 = 12.2, w6 = 19.0;
////    addCat(catArray, &totalCats, "Loki", MALE, PERSIAN, true, &w, BLACK, WHITE, 101);
////    addCat(catArray, &totalCats, "Milo", MALE, MANX, true, &w2, BLACK, RED, 102);
////    addCat(catArray, &totalCats, "Bella", FEMALE, MAINE_COON, true,  &w3, BLACK, BLUE, 103);
////    addCat(catArray, &totalCats, "Kali", FEMALE, SHORTHAIR, false, &w4, BLACK, GREEN, 103);
////    addCat(catArray, &totalCats, "Trin", FEMALE, MANX, true,  &w5, BLACK, PINK, 105);
////    addCat(catArray, &totalCats, "Chili", UNKNOWN_GENDER, SHORTHAIR, false,  &w6, WHITE, BLACK, 106);
////    printAllCats(catArray, &totalCats);
////    fprintf(stdout,"\n");
////
////    int kali = findCat(catArray, &totalCats, "Kali");
////    updateCatName(catArray, &totalCats, kali, "Chili");
////    printCat(catArray, &totalCats, kali);
////    updateCatName(catArray, &totalCats, kali, "Capulet");
////    fixCat(catArray, kali);
////    printCat(catArray, &totalCats, kali);
////    updateCatCollar1(catArray, kali, RED);
////    printCat(catArray, &totalCats, kali);
////    updateCatCollar2(catArray, kali, WHITE);
////    printCat(catArray, &totalCats, kali);
////    updateCatLicense(catArray, kali, 200);
////    printCat(catArray, &totalCats, kali);
////    fprintf(stdout,"\n");
////
////    printAllCats(catArray, &totalCats);
////    fprintf(stdout,"\n");
////
////    deleteCat(catArray, &totalCats, kali);
////    printAllCats(catArray, &totalCats);
////    fprintf(stdout,"\n");
////
////    deleteAllCats(catArray, &totalCats);
////    printAllCats(catArray, &totalCats);
////    fprintf(stdout,"\n");
//
//    fprintf(stdout,"Done with Animal Farm 2\n");
//    return 0;
//}