#include <iostream>
#include <vector>

template <typename T>
void print(const T &container) {
    for (auto iter = container.begin(); iter != container.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(v);
}