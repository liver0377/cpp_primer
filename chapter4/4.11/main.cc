#include <iostream>

using namespace std;

int main() {
    int a = 4, b = 3, c = 2, d = 1;

    if (a > b && b > c && c > d) {
        std::cout << "Match \"a > b > c > d\"" << std::endl;
    } else {
        std::cout << "Not Match \"a > b > c > d\"" << std::endl;
    }

    return 0;
}