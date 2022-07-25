#include <iostream>
#include <vector>

template <typename T>
void print(const T &container) {
    typedef typename T::size_type size_type;
    for (size_type i = 0; i < container.size(); i++) {
        std::cout << container[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(v);
}