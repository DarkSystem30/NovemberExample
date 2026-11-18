#pragma once
#include "util.h"


class Person
{

	std::string name;
	int age;

	utility util;

public:

	Person() {

		name = "bob";
		age = 39;

		std::cout << "default has been used" << std::endl;

		std::cout << "name: " << name << std::endl;

		std::cout << "age: " << age << std::endl;

		util.Line();
	}

	Person(std::string _name, int _age) {

		name = _name;
		age = _age;

		std::cout << "Overloaded has been used" << std::endl;

		std::cout << "name: " << _name << std::endl;

		std::cout << "age: " << _age << std::endl;

		util.Line();
	}

	void HasBirthday() {

		age++;

		std::cout << "Happy Birthday, " << name << std::endl;
		util.Line();
	}

	void Greeting() {

		std::cout << "Hey there, my name is " << name << std::endl;
		util.Line();
	}

	void DisplayInfo() {

		std::cout << "Name: " << name << std::endl;

		std::cout << "Age: " << age << std::endl;
		util.Line();
	}


	std::string GetName() {

		return name;
	}

	int Age() {

		return age;
	}


	void SetName(std::string newValue) {

		name = newValue;
	}

	void SetAge(int newValue) {

		age = newValue;
	}


};