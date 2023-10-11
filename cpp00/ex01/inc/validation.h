#ifndef VALIDATION_H_
#define VALIDATION_H_
#include <iostream>
#include "contact.h"

class Validation {

public:

	void displayError(const int& inputCode);
	int validateInput(const std::string& input);

};
#endif // !VALIDATION_H_
