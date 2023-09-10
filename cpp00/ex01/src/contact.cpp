#include "../inc/contact.h"

const std::string& Contact::getFirstname() {
	return _firstname;
}

const std::string& Contact::getNickname() {
	return _nickname;
}
const std::string& Contact::getLastname() {
	return _lastname;
}
const std::string& Contact::getPhoneNumber() {
	return _phoneNumber;
}
const std::string& Contact::getDarkestSecret() {
	return _darkestSecret;
}

void Contact::setFirstname(const std::string& firstname) {
	_firstname = firstname;
}
void Contact::setNickname(const std::string& nickname) {
	_nickname = nickname;
}
void Contact::setPhoneNumber(const std::string& phonenumber) {
	_phoneNumber = phonenumber;
}
void Contact::setLastname(const std::string& lastname) {
	_lastname = lastname;
}
void Contact::setDarkestsecret(const std::string& darkestsecret) {
	_darkestSecret = darkestsecret;
}
