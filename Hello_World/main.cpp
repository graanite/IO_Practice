/*
Author: JG,
Date: 12/27/24
Purpose: Age/name system implementing IO, different data types, if/else logic, , etc. */
#include <iostream>

int main() { //try to separate functions into getAge, getName, getOrder, then call them in the main.
	int customerAge;
	std::string customerName;

	std::cout << "Enter your age: ";
	std::cin >> customerAge; //needs input handling, when a letter is input the program breaks

	if (customerAge < 21) {
		std::cout << "You cannot enter. (21+)\n";
		return main();
	}

	else {
		std::cout << "Welcome! ";
		std::cout << "What is your name?\n";
		std::cin >> customerName; //needs input handling, when a number is input the program breaks
	}

	

	return 0;
}