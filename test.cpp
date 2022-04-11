/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
/////
///// @file test.cpp
///// @version 1.0
/////
///// @author Maxwell Pauly <mgpauly@hawaii.edu>
///// @date   10_April_2022
/////////////////////////////////////////////////////////////////////////////////
//#include "main.h"
//#include <iostream>
//using namespace std;
//
//int main() {
//    fprintf(stdout,"Starting Animal Farm 2\n\n");
//
//    Cat c1;
//    c1.setName("Mike");
//    printf("c1 Name = %s\n", c1.getName());
//
//    c1.setWeight(23.1);
//    cout << "c1 Weight = " << c1.getWeight() << endl;
//
//    c1.setIsCatFixed(true);
//    cout << "c1 isCatFixed = " << c1.getIsCatFixed() << endl;
//
//    cout << "c1 gender = " << c1.getGender() << endl;
//
//    cout << "c1 breed = " << c1.getBreed() << endl << endl;
//
//    Cat c2("Maxwell", MALE, MANX, 23.2);
//    printf("c2 Name = %s\n", c2.getName());
//    cout << "c2 Weight = " << c2.getWeight() << endl;
//    cout << "c2 isCatFixed = " << c2.getIsCatFixed() << endl;
//    cout << "c2 gender = " << c2.getGender() << endl;
//    cout << "c2 breed = " << c2.getBreed() << endl;
//    cout << endl;
//
//    //name setter
//
//
//    Cat *catDatabaseHeadPointer;
//    Cat c1("max", MALE, MANX, 32.1);
//    catDatabaseHeadPointer = (Cat*) &c1;
//    printAllCats(catDatabaseHeadPointer);
//    cout << endl << endl;
//
//    Cat c2("ralf", FEMALE, MAINE_COON, 11.3);
//    addCat(catDatabaseHeadPointer, &c2);
//    printAllCats(catDatabaseHeadPointer);
//
//    Cat c3("", MALE, MANX, 23.3);
//    addCat(catDatabaseHeadPointer, &c3);
//
//    Cat c4("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", MALE, MANX, 32.2);
//    addCat(catDatabaseHeadPointer, &c4);
//
//    //odd seg fault on this test
//    Cat c5(nullptr, MALE, MANX, 10.0);
//    addCat(catDatabaseHeadPointer, &c5);
//
//    Cat c6("nice", MALE, MANX, 0);
//    addCat(catDatabaseHeadPointer, &c6);
//
//    Cat c7("cool Cat", FEMALE, MANX, 3.2);
//    addCat(catDatabaseHeadPointer, &c7);
//    printAllCats(catDatabaseHeadPointer);
//    cout << endl << endl;
//
//    // print cat test
//    Cat* specificCat;
//    specificCat = findCatByName(catDatabaseHeadPointer, "ralf");
//    specificCat->print();
//    cout << endl << endl;
//
//    // delete cat test
//    Cat c8("carlos", MALE, MANX, 2.4);
//    addCat(catDatabaseHeadPointer, &c8);
//    printAllCats(catDatabaseHeadPointer);
//    deleteCat(catDatabaseHeadPointer, "cool Cat");
//    cout << endl << endl;
//    printAllCats(catDatabaseHeadPointer);
//
//    // delete all cats test
//    cout << "before delete all" << endl;
//    deleteAllCats(catDatabaseHeadPointer);
//    cout << "after delete all" << endl;
//    //validate tests
//    c1.setName(nullptr);
//    c1.validate();
//
//    c1.setName("");
//    c1.validate();
//
//    c1.setName("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
//    c1.validate();
//
//    c1.setName("cool");
//    c1.setWeight(0);
//    c1.validate();
//    cout << endl;
//
//    fprintf(stdout,"Done with Animal Farm 2\n");
//    return 0;
//}