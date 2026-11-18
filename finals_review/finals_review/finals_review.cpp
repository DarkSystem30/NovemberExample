// finals_review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"

int main()
{
    Person person;

    Person overPerson("Jaydan", 20);

    Person newPerson;

    newPerson.SetName("Steve");
    newPerson.SetAge(27);

    person.DisplayInfo();
    overPerson.DisplayInfo();
    newPerson.DisplayInfo();

}

