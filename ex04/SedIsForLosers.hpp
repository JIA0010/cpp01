#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <string>
#include <fstream>
#include <iostream>

class SedIsForLosers {
private:
    static void my_replace(std::string& str, size_t pos, size_t len, const std::string& newStr);
public:
    static void replace(const std::string& filename, const std::string& s1, const std::string& s2);
};



#endif
