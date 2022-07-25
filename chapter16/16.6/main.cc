#include <iostream>

template <typename T, unsigned N> T *begin(const T (&arr)[N]) {
    return const_cast<T *>(arr);
}

template <typename T, unsigned N> T *end(const T (&arr)[N]) {
    return const_cast<T *>(arr + N);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto iter = begin(arr); iter != end(arr); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}