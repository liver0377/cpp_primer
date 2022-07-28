#include <ctime>
#include <iostream>
#include <random>

using namespace std;

unsigned int rdm(unsigned sd = time(0)) {
    static default_random_engine e(sd);
    uniform_int_distribution<unsigned int> u;
    // std::cout << "min: " << u.min() << " max: " << u.max() << std::endl;
    return u(e);
}

int main() {
    for (int i = 0; i < 100; i++) {
        std::cout << rdm(88) << std::endl;
    }
}