#include "Account.hpp"

int Account::checkAmount() const {}

void Account::displayAccountsInfos() {}


void Account::displayStatus() const {
}

int Account::getNbAccounts() {}

int Account::getNbDeposits() {}

int Account::getNbWithdrawals() {}

int Account::getTotalAmount() {}

void Account::makeDeposit(int deposit) {}

bool Account::makeWithdrawal(int withdrawal) {}

Account::Account(int initial_deposit) {}

Account::~Account() {}

void Account::_displayTimestamp() {
    // Get current time
    std::time_t now = std::time(0);

    // Convert to string
    char* timestamp = std::ctime(&now);

    // Display timestamp
    std::cout << "Current timestamp: " << timestamp << std::endl;

}

