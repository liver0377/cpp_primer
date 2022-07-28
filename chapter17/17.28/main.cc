#include <ctime>
#include <iostream>
#include <random>

using namespace std;

unsigned int rdm() { 
    static default_random_engine e(time(0));
    uniform_int_distribution<unsigned int> u; 
    // std::cout << "min: " << u.min() << " max: " << u.max() << std::endl;
    return u(e);
}

int main() {
    for (int i = 0; i < 100; i++) {
        std::cout << rdm() << std::endl;
    }
}