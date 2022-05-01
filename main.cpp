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
#include "SinglyLinkedList.h"
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


void singlyLinkedListTests() {
    cout << "SLL TESTS" << endl << endl;
    SinglyLinkedList SLL1;
    cout << "Is list empty? " << (SLL1.empty() ? "true":"false") << endl;
    SLL1.push_front(new Cat("Mittens"));
    cout << "Is list empty? " << (SLL1.empty() ? "true":"false") << endl;
    Cat *c1 = (Cat*)SLL1.pop_front();
    cout << c1->speak() << endl;
    cout << "Is list empty? " << (SLL1.empty() ? "true":"false") << endl;

    SLL1.push_front( new Cat("Gregory"));
    SLL1.push_front( new Cat("Antohony"));
    SLL1.push_front(new Cat("Thomas"));
    cout << "Is list sorted? " << (SLL1.isSorted()?"true":"false") << endl;
    SLL1.dump();

    Cat *c2 = (Cat*)SLL1.pop_front();
    SLL1.insert_after(SLL1.get_first(), c2);
    cout << "Is list sorted? " << (SLL1.isSorted()?"true":"false") << endl;
    SLL1.dump();
    cout << endl << endl << endl << endl;

    Cat *c3 = (Cat*) SLL1.get_next(c2);
    c3->dump();
    cout << "Is SLL1 validated? " << (SLL1.validate()? "true":"false") << endl;

    SLL1.dump();
    SLL1.deleteAllNodes();
    cout << endl << endl << endl;
    SLL1.dump();
}

int main() {
    cout << "#####################################" << endl << endl;
    nodeTests();
    animalTests();
    mammalTests();
    catTests();
    singlyLinkedListTests();
    cout << endl << "####################################" << endl;
    return 0;
}

#else

int main() {

    return 0;
}

#endif