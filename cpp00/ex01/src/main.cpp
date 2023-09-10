#include "../inc/contact.h"
#include "../inc/phonebook.h"
#include "../inc/validation.h"

int main() {

	Phonebook pb;
	Validation vld;

	pb.welcomeMessage();
	std::string input = "";

	while (1) {
		std::cin >> input;
		
		int inputType = vld.validateInput(input); // returning  "0-3";
		// input types : 3 - exit, 2 - add, 1 - search, 0 - error
		
		if (inputType == 3) {
			return 0;
		} else if (inputType == 2) {
			std::string firstname, lastname, nickname, phonenubmer, darkestsecret;
			std::cout << "Enter firstname: " << "\n";
			std::cin >> firstname;
			std::cout << "Enter lastname: " << "\n";
			std::cin >> lastname;
			std::cout << "Enter nickname: " << "\n";
			std::cin >> nickname;
			std::cout << "Enter phone number: " << "\n";
			std::cin >> phonenubmer;
			std::cout << "Enter darkest secret: " << "\n";
			std::cin >> darkestsecret;

			pb.setContact(firstname, lastname, nickname, phonenubmer, darkestsecret);
		} else if (inputType == 1) {
			int indexToSearch = 0;
			std::cout << "Enter index from 0 to 7: " << "\n";
			std::cin >> indexToSearch;


			pb.getContact(0);
		} else {
            vld.displayError(0);
        }
	}
}