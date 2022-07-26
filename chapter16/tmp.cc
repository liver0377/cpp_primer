#include <iostream>
#include <vector>

template <typename T> int compare(const T&, const T&);


int main() { 
    unsigned t = 0;
    t -= 1;
    std::cout << typeid((t + t)).name() << std::endl;
}