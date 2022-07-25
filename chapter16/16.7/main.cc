#include <iostream>

template <typename T, unsigned N>
constexpr unsigned arrSize(const T (&arr)[N]) {
    return N;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << arrSize(arr) << std::endl;
}