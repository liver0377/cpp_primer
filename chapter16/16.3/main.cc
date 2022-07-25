#include "Sales_data.h"
#include <iostream>

template <typename T> int compare(const T &lhs, const T &rhs) {
    if (lhs < rhs) {
        return -1;
    }
    if (rhs < lhs) {
        return 1;
    }
    return 0;
}

int main() {
    Sales_data sd1("123", 3, 9.9), sd2("234", 4, 9.7);
    std::cout << compare(sd1, sd2) << std::endl;
}