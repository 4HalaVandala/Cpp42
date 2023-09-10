#include "../inc/validation.h"


void Validation::displaySearch( void ) {
	std::cout << "Todo display search \n";
}

void Validation::displayError(const int& inputCode) {
	if (inputCode == 0) {
		std::cout << "Invalid input! USAGE : EXIT, ADD, SEARCH" << std::endl;
	}
}

int Validation::validateInput(const std::string& input) {
	if (input == "EXIT") {
		std::cout << "Cya!";
		return 3;
	} else if (input == "ADD") {
		return 2;
	} else if (input == "SEARCH") {
		return 1;
	} else { 
		return 0;
	}
	
}
