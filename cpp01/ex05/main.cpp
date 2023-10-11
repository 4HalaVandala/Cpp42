//
// Created by lilya on 10.08.2023.
//
#include "harl.h"
 int main ( void ) {
     Harl h;
     std::string choose;

     std::cout << "===HARL PROGRAM===" << std::endl;
     std::cout << "Pick one from the list as below:" << std::endl;
     std::cout << "1. DEBUG\n2. INFO\n3. WARNING\n4. ERROR\nPlease choose one of their number: ";
     getline(std::cin, choose);
     while (choose != "1" && choose != "2" && choose != "3" && choose != "4")
     {
         std::cerr << "Error input: Please input only number 1(DEBUG), 2(INFO), 3(WARNING) or 4(ERROR)\nYour choice:";
         std::cin.ignore(0);
         getline(std::cin, choose);
     }
     h.complain(choose);
     return (0);
}