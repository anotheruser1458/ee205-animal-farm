///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

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

int printCat(struct cat catStructArray[], size_t* totalCats, int index) {
    // less than 0
    if (index < 0) {
        fprintf(stdout,"Bad Code [%d]\n", index);
        return 0;
    }

    //more than number of cats in database
    if (index >= *totalCats) {
        fprintf(stdout,"Bad Cat [%d]\n", index);
        return 0;
    }

    struct cat currentCat = catStructArray[index];
    fprintf(stdout,"cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarColor1 = [%s] collarColor2 = [%s] license = [%llu]\n", index, currentCat.name, genderNames[currentCat.gender], breedNames[currentCat.breed], currentCat.isFixed, currentCat.weight, colorNames[currentCat.collarColor1], colorNames[currentCat.collarColor2], currentCat.license);
    return 0;
}

int printAllCats(struct cat catStructArray[], size_t* totalCats) {

    if (*totalCats == 0) {
        fprintf(stdout,"There are no cats on the farm.\n");
        return 0;
    }

    for (int i = 0; i < *totalCats; i++) {
        printCat(catStructArray, totalCats, i);
    }
    return 0;
}

int findCat(struct cat catStructArray[], size_t* totalCats, char name[MAX_CAT_NAME]) {
    for (int i = 0; i < *totalCats; i++) {
        if (!strcmp(catStructArray[i].name, name)) {
            return i;
        }
    }
    return -1;
}