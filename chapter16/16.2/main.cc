#include <iostream>
#include <string>

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
    std::string s1 = "hello", s2 = "helloo";
    std::cout << compare(s1, s2) << std::endl;
}