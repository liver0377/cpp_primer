#include <iostream>
#include <list>
#include <vector>

template <typename F, typename T>
bool find(const F &begin, const F &end, const T &target) {
    auto iter = begin;
    while (iter != end) {
        if (*iter == target)
            return true;
        iter++;
    }
    return false;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> l = {1, 2, 3, 4, 5, 6, 7};
    std::cout << find(v.begin(), v.end(), 10) << std::endl;
    std::cout << find(l.begin(), l.end(), 8) << std::endl;
}