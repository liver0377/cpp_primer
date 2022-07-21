#ifndef PRINT_STRING_H
#define PRINT_STRING_H

#include <iostream>

#include <string>
class PrintString {
  public:
    std::string operator()(std::istream &is = std::cin);
};

std::string PrintString::operator()(std::istream &is) {
    std::string t;
    is >> t;
    if (is)
        return t;
    return "";
}
#endif