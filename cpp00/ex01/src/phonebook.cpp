#include "../inc/phonebook.h"

Phonebook::Phonebook() {
    this->_putIndex = 0;
}

void Phonebook::increaseIndex() {
    this->_putIndex += 1;
}

void Phonebook::setContact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret) {
	_contact[_putIndex].setFirstname(firstname);
    _contact[_putIndex].setDarkestsecret(darkestSecret);
    _contact[_putIndex].setNickname(nickname);
    _contact[_putIndex].setLastname(lastname);
    _contact[_putIndex].setPhoneNumber(phoneNumber);

    std::cout<< "Contact successfully added with index " << _putIndex << std::endl;
    increaseIndex();
}

 void Phonebook::getContact(const int &index) {
	std::string name = _contact[index].getFirstname();
	std::string lastname = _contact[index].getLastname();
	std::string nickname = _contact[index].getNickname();

	std::cout << index <<  name <<  lastname << nickname;
}

  void Phonebook::welcomeMessage() {
	 std::cout << "-------------------------------" << "\n";
	 std::cout << "--Welcome to custom phonebook--" << "\n";
	 std::cout << "-------------------------------" << "\n";
	 std::cout << "------------Usage :------------" << "\n";
	 std::cout << "-------------------------------" << "\n";
	 std::cout << "-----ADD : to add contact -----" << "\n";
	 std::cout << "SEARCH: search contact by index" << "\n";
	 std::cout << "------EXIT: close program------" << "\n";
	 std::cout << "-------------------------------" << "\n";
 }