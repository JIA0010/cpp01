#include "SedIsForLosers.hpp"
#include <iostream>
#include <fstream>

void SedIsForLosers::my_replace(std::string& str, size_t pos, size_t len, const std::string& newStr) {
      str = str.substr(0, pos) + newStr + str.substr(pos + len);
    }

void SedIsForLosers::replace(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cout << "Error: Could not open the file " << filename << std::endl;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cout << "Error: Could not create the file " << outputFilename << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            my_replace(line, pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
}
