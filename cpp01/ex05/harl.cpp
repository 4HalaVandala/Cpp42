//
// Created by lilya on 10.08.2023.
//

#include "harl.h"

void Harl::info() {
    std::cout << "info called";
}

void Harl::error() {
    std::cout << "Error called";
}

void Harl::warning() {
    std::cout << "Warning called";
}

void Harl::debug() {
    std::cout << "Debug called";
}

void Harl::complain(const std::string level) {

    void (Harl::*pf[])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
    };
    (this->*pf[stoi(level) - 1])();

}