#include "../inc/phonebook.h"

Phonebook::Phonebook() {
    this->_putIndex = 0;
}

void Phonebook::increaseIndex() {
    this->_putIndex += 1;
}

void Phonebook::setContact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret) {
     auto& selected_contact = _contact[_putIndex];

    selected_contact.setFirstname(firstname);
    selected_contact.setDarkestsecret(darkestSecret);
    selected_contact.setNickname(nickname);
    selected_contact.setLastname(lastname);
    selected_contact.setPhoneNumber(phoneNumber);

    std::cout<< "Contact successfully added with index " << _putIndex << std::endl;
    increaseIndex();
}

 void Phonebook::getContact(const int &index) {
	std::string name = _contact[index].getFirstname();
	std::string lastname = _contact[index].getLastname();
	std::string nickname = _contact[index].getNickname();


	std::cout << "Index: "<< index << "\n" << "Name: " <<  name << "\n" << "Lastname: " << lastname << "\n" << "Nickname: " << nickname << "\n";
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