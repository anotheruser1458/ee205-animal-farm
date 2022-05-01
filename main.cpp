///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "main.h"
#include <iostream>
#include "Node.h"
#include "Gender.h"
#include "Animal.h"
#include "Color.h"
#include "Mammal.h"
#include "Cat.h"
using namespace std;





#ifdef DEBUG

void nodeTests() {
    cout << "NODE TESTS" << endl << endl;
    Node n1;
    n1.dump();
    Node n2;

}

void animalTests() {
//    string s1 = ".cool.     ", s2 = "     .nice.";
//    Animal a1(31.1, s1, s2);
//    a1.dump();
//    a1.validate();
//    a1.setGender(Gender::MALE);
//    a1.dump();
//    a1.setGender(Gender::FEMALE);
//    s1 = "Great animal";
//    s2 = "How about them animals";
//    Animal a2(Gender::FEMALE, 32.4, 40.0, s1, s2);
//    a2.dump();
}

void mammalTests() {
//    string s1 = "Feline";
//    Mammal m1(32.3, s1);
//    m1.dump();
//    m1.setColor(Color::GREEN);
//    m1.dump();
//
//    Mammal m2(Color::GINGER, Gender::MALE, 32.4, 90.0, s1);
//    m2.dump();
}

void catTests() {
    cout << "CAT TESTS" << endl << endl;
    Cat c1("Mittens", Color::RED, Gender::MALE, 23);
    c1.dump();
    c1.fixCat();
    c1.dump();
    c1.fixCat();
    c1.dump();
    cout << c1.getMaxWeight() << endl;
    cout << c1.speak() << endl;
    Cat c2(" ");
}

void listTests() {
    cout << "LIST TESTS" << endl << endl;

}

void singlyLinkedListTests() {
    cout << "SLL TESTS" << endl << endl;

}

int main() {
    cout << "#####################################" << endl << endl;
 //   nodeTests();
 //   animalTests();
  //  mammalTests();
 catTests();
  //  listTests();
   // singlyLinkedListTests();
    cout << endl << "####################################" << endl;
}
#endif