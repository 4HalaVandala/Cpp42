#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_
#include "iostream"
#include "contact.h"
#include "validation.h"

class Phonebook {

public:

	void increaseIndex();
	void setContact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret);
	void getContact(const int& index);
	void welcomeMessage();

    Phonebook();

private:

    Contact _contact[8];
    int _putIndex;


};

#endif // !PHONEBOOK_H_