#include "Equal.h"
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std::placeholders;

int main() {
    Equal eq;
    std::vector<int> v = {1, 2, 3, 4, 5, 1, 6, 16, 16, 3, 6};
    int source = 16, target = 17;

    std::replace_if(v.begin(), v.end(), std::bind(eq, _1, source), target);
    for (auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;
}