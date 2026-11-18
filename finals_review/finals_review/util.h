#pragma once
#include<iostream>// cin, cout and string data types
#include<string>// getline, to_string, stoi and tolower
#include<vector>// lets us use vector collections



class utility
{

	// fields

	// anything here will not be visible outside of this class

public:

	// default, required for creating anything inside the class
	utility() {

	}

	void Line() {

		std::cout << "==========================================================================" << std::endl;
	}

	void Message(std::string words) {

		Line();

		std::cout << words << std::endl;

		Line();
	}


	std::string CollectInput() {

		std::string input = "";

		getline(std::cin, input);

		return input;
	}


	std::string CollectInput(std::string prompt) {

		std::string userInput = "";

		Message(prompt);

		getline(std::cin, userInput);

		return userInput;
	}


	void DisplayVector(std::vector<std::string> vec) {

		for (int i = 0; i < vec.size(); i++) {

			std::cout << vec[i] << std::endl;
		}
	}


	void DisplayVector(std::vector<int> vec) {

		for (int i = 0; i < vec.size(); i++) {

			std::cout << vec[i] << std::endl;
		}
	}


	void DisplayVector(std::vector<double> vec) {

		for (int i = 0; i < vec.size(); i++) {

			std::cout << vec[i] << std::endl;
		}
	}




};

