#ifndef CONTACT_H_
#define CONTACT_H_
#include <iostream>

class Contact {

public:

	const std::string& getFirstname();
	const std::string& getNickname();
	const std::string& getLastname();
	const std::string& getPhoneNumber();
	const std::string& getDarkestSecret();

	void setFirstname(const std::string& firstname);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phonenumber);
	void setLastname(const std::string& lastname);
	void setDarkestsecret(const std::string& darkestsecret);

private:

    std::string _firstname;
    std::string _lastname;
    std::string _phoneNumber;
    std::string _nickname;
    std::string _darkestSecret;

};

#endif // !CONTACT_H_