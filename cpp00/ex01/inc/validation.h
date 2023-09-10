#pragma once
#ifndef VALIDATION_H_
#define VALIDATION_H_
#include <iostream>

class Validation {

public:

	void displaySearch( void );
	void displayError(const int& inputCode);
	int validateInput(const std::string& input);

};
#endif // !VALIDATION_H_
