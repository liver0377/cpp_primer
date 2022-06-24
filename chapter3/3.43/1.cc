#include <iostream>

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3}, 
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
     
    for (int (&r)[4]: ia) { 
        for (int& c : r) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}