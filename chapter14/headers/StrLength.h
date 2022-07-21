#ifndef STRLENGTH_H
#define STRLENGTH_H

#include <string>
class StrLength {
  public:
    bool operator()(std::string &str, int length) {
        return str.size() == length;
    }
};

#endif