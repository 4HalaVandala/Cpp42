//
// Created by lilya on 05.08.2023.
//

#include "Replacer.h"


void Replacer::replace(const std::string filename,const std::string stringToReplace,const std::string newString) {
    std::ifstream inputStream(filename);
    if(!inputStream) std::cerr << "File not exists!";

    std::string	result;
    size_t		toReplaceLen = stringToReplace.length();

    if (stringToReplace == "" || newString == "") {
        std::cerr << "Strings can't be empty" << std::endl;
    }

    result.assign(std::istreambuf_iterator<char>(inputStream),
                  std::istreambuf_iterator<char>());
    for (size_t pos = 0; pos < result.length(); pos++) {
        if (result.compare(pos, toReplaceLen, stringToReplace) == 0) {
            result.erase(pos, toReplaceLen);
            result.insert(pos, newString);
        }
    }

    std::string newFile = filename + ".replace";
    std::ofstream outputStream(newFile);

    outputStream << result;
}